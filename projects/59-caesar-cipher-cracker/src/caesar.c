#include "caesar.h"

#include <ctype.h> // using this for only isalpha() can replace with a small function to check ASCII integer ranges
#include <stdio.h> // is this really such a good idea? or do i need to find a better way to err report?
#include <stdlib.h>

void decode(char *enc_buf, char *decoded_buf, size_t length, int shift) {
  if (shift == 0) {
    for (size_t i = 0; i < length; i++) {
      decoded_buf[i] = enc_buf[i];
    }
    decoded_buf[length] = '\0';
  } else if (shift < 0) {
    shift += 26;
  }

  for (size_t i = 0; i < length; i++) {
    int alpha = isalpha((int)enc_buf[i]); // returns 0 if not alphabet, else
                                          // returns a non-zero number

    if (alpha == 0) {
      // not an alphabet
      // i know this reads horribly, please forgive my sin
      decoded_buf[i] = enc_buf[i];
    } else {
      int char_ascii = (int)enc_buf[i];

      // could have used isupper() and islower() here but they all give 0 when
      // true condition, and i would rather take a dive from a building.
      if (char_ascii >= 65 && char_ascii <= 90) {
        // UPPERCASE
        decoded_buf[i] =
            (char)((int)'A' + (char_ascii + shift - (int)'A') % 26);
      } else if (char_ascii >= 97 && char_ascii <= 122) {
        // lowercase
        decoded_buf[i] =
            (char)((int)'a' + (char_ascii + shift - (int)'a') % 26);
      } else {
        fprintf(stderr,
                "Encountered non-standard character: {%c} at position {%ld}. "
                "Could not decode string!\n",
                enc_buf[i], i);
        // should i clean up the decoded_buf here before exiting?
        exit(EXIT_FAILURE);
      }
    }
  }

  decoded_buf[length] = '\0';
}

// This majestic switch solution fails because apparently isalpha() does not
// behave as i mistakenly believed => returns 0 when not alphabet, returns 1
// when lowercase, returns 2 when uppercase. NOT my brightest moment
/*
 switch (alpha) {
    case 0:
      decoded_buf[i] = enc_buf[i];
      break;
    case 1:
      // lowercase character
      decoded_buf[i] =
          (char)((int)'a' + ((int)enc_buf[i] + shift - (int)'a') % 26);
      break;
    case 2:
      // UPPERCASE character
      decoded_buf[i] =
          (char)((int)'A' + ((int)enc_buf[i] + shift - (int)'A') % 26);
      break;
    default:
      fprintf(stderr,
              "Encountered non-standard character: {%c} at position {%ld}. "
              "Could not decode string!\n",
              enc_buf[i], i);
      // should i clean up the decoded_buf here before exiting?
      exit(EXIT_FAILURE);
    }
*/

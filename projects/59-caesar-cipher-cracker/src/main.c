#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "caesar.h"

// #define MAX_STR_LEN 1024

int main(void) {
  FILE *fp_enc = fopen("encrypted.txt", "r");
  FILE *fp_dec = fopen("decrypted.txt", "w");

  uint8_t shift = 13; // read from stdin later

  if (fp_enc == NULL || fp_dec == NULL) {
    char *failure;
    failure =
        (fp_enc == NULL) ? "encrypted.txt" : "decrypted.txt"; // stdin later
    fprintf(stderr, "FAILURE TO OPEN FILE %s\n", failure);
    exit(EXIT_FAILURE);
  }

  char c;
  while ((c = fgetc(fp_enc)) != EOF) {
    char c_decrypted = decrypt_char(c, shift);
    fputc(c_decrypted, fp_dec);
  }

  fprintf(
      stdout,
      "SUCCESS!\nWritten the decrypted contents of the file %s successfully "
      "to file: %s\n",
      "encrypted.txt", "decrypted.txt"); // stdin later

  return EXIT_SUCCESS;
}

/* QUESTION:
 * if i implement file i/o, is it better to get characters one by one from file
 * using fgetc and call decrypt for each character (i will obviously tweak the
 * behaviour of decrypt()); or would it be better to take the whole file data as
 * one, and pass it into the encoded_string buffer, and then call decrypt() only
 * once? when i put it like this, it sounds like the latter is better. is that
 * the case? also how do i effectively manage the size of buffers? i don't want
 * to limit the size of file or encoded string the user can pass.
 */

/* 12-06-2023 - 22:42
 * Upon having given it further thought, it seems like reading character by
 * character is superior. There are 2 reasons that have led me to this
 * conclusion -
 *
 * 1. According to a thread i read on superuser.com (which i can't find now),
 * internal caching happens when im reading character by character, so I don't
 * have to worry about disk i/o being a major factor anyway.
 *
 * 2. If i read the file one character at a time, i don't have to worry about
 * the size of the input buffer, obviously.
 */

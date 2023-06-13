#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "rot13.h"

int main(void) {
  FILE *fp_enc = fopen("encrypted.txt", "r");
  FILE *fp_dec = fopen("decrypted.txt", "w");

  int16_t shift = 13;

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

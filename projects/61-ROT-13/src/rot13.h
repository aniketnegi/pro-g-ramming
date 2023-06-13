#ifndef _CAESAR_H_
#define _CAESAR_H_

#include <stdint.h>
#include <stdlib.h>

void decrypt(char *enc_buf, char *decoded_buf, size_t length,
             int16_t shift); // shift can't be size_t because it can be negative
                             // HAHAHAHAHAHAHA

char decrypt_char(char enc, int16_t shift);
#endif // !_CAESAR_H_

#ifndef _CAESAR_H_
#define _CAESAR_H_

#include <stdlib.h>

void decode(char *enc_buf, char *decoded_buf, size_t length,
            int shift); // shift can't be size_t because it can be negative
                        // HAHAHAHAHAHAHA

#endif // !_CAESAR_H_

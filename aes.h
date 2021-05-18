#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#define NB 4
#define NK 4
#define AES_BLOCK_SIZE 16
#define AES_128_KEY_SIZE 16
#define NR 10

void aes_enc(uint8_t state[static 16], const uint8_t key[static 16]);

void aes_dec(uint8_t state[static 16], const uint8_t key[static 16]);

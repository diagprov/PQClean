#ifndef PQCLEAN_NTSKEM1264_CLEAN_API_H
#define PQCLEAN_NTSKEM1264_CLEAN_API_H

#include <stdint.h>

#define PQCLEAN_NTSKEM1264_CLEAN_CRYPTO_SECRETKEYBYTES 9248
#define PQCLEAN_NTSKEM1264_CLEAN_CRYPTO_PUBLICKEYBYTES 319488
#define PQCLEAN_NTSKEM1264_CLEAN_CRYPTO_CIPHERTEXTBYTES 128
#define PQCLEAN_NTSKEM1264_CLEAN_CRYPTO_BYTES 32

#define PQCLEAN_NTSKEM1264_CLEAN_CRYPTO_ALGNAME "NTS-KEM(12, 64)"

int PQCLEAN_NTSKEM1264_CLEAN_crypto_kem_keypair(uint8_t *pk, uint8_t *sk);

int PQCLEAN_NTSKEM1264_CLEAN_crypto_kem_enc(uint8_t *c, uint8_t *k, const uint8_t *pk);

int PQCLEAN_NTSKEM1264_CLEAN_crypto_kem_dec(uint8_t *k, const uint8_t *c, const uint8_t *sk);

#endif
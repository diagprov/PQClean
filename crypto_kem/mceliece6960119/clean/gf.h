#ifndef PQCLEAN_MCELIECE6960119_CLEAN_GF_H
#define PQCLEAN_MCELIECE6960119_CLEAN_GF_H
/*
  This file is for functions for field arithmetic
*/


#include <stdint.h>

typedef uint16_t gf;

gf PQCLEAN_MCELIECE6960119_CLEAN_gf_iszero(gf a);
gf PQCLEAN_MCELIECE6960119_CLEAN_gf_add(gf in0, gf in1);
gf PQCLEAN_MCELIECE6960119_CLEAN_gf_mul(gf in0, gf in1);
gf PQCLEAN_MCELIECE6960119_CLEAN_gf_frac(gf den, gf num);
gf PQCLEAN_MCELIECE6960119_CLEAN_gf_inv(gf in);

void PQCLEAN_MCELIECE6960119_CLEAN_GF_mul(gf *out, const gf *in0, const gf *in1);

#endif


#ifndef ROOT_H
#define ROOT_H
/*
  This file is for evaluating a polynomial at one or more field elements
*/


#include "gf.h"

gf PQCLEAN_MCELIECE348864F_CLEAN_eval(gf * /*f*/, gf /*a*/);
void PQCLEAN_MCELIECE348864F_CLEAN_root(gf * /*out*/, gf * /*f*/, gf * /*L*/);

#endif


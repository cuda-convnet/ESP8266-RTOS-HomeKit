/*
 * srp.h
 *
 *  Created on: Jun 10, 2015
 *      Author: tim
 */

#ifndef HOMEKIT_SRP_SRP_H_
#define HOMEKIT_SRP_SRP_H_

#define BIGNUM_BYTES        384
#define BIGNUM_WORDS        (BIGNUM_BYTES / 4)

typedef struct
{
  uint8_t b[32];
  uint8_t salt[16];
  uint8_t v[384];
  uint8_t B[384];

  uint8_t K[64];
  uint8_t M1[64];
  uint8_t M2[64];

  uint8_t clientM1:1;
  uint8_t serverM1:1;
} srp_keys_t;

extern srp_keys_t srp;

typedef void (*moretime_t)(void);

extern void srp_init(void);
extern void srp_start(void);
extern uint8_t srp_setA(uint8_t* a, uint16_t length);
extern uint8_t srp_checkM1(uint8_t* m1, uint16_t length);
extern uint8_t* srp_getSalt(void);
extern uint8_t* srp_getB(void);
extern uint8_t* srp_getM2(void);
extern uint8_t* srp_getK(void);

#endif /* HOMEKIT_SRP_SRP_H_ */

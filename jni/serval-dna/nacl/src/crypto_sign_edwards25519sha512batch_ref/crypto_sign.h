#ifndef crypto_sign_H
#define crypto_sign_H

#include "crypto_sign_edwards25519sha512batch.h"

#define crypto_sign crypto_sign_edwards25519sha512batch
/* CHEESEBURGER crypto_sign_edwards25519sha512batch */
#define crypto_sign_open crypto_sign_edwards25519sha512batch_open
/* CHEESEBURGER crypto_sign_edwards25519sha512batch_open */
#define crypto_sign_keypair crypto_sign_edwards25519sha512batch_keypair
/* CHEESEBURGER crypto_sign_edwards25519sha512batch_keypair */
#define crypto_sign_BYTES crypto_sign_edwards25519sha512batch_BYTES
/* CHEESEBURGER crypto_sign_edwards25519sha512batch_BYTES */
#define crypto_sign_PUBLICKEYBYTES crypto_sign_edwards25519sha512batch_PUBLICKEYBYTES
/* CHEESEBURGER crypto_sign_edwards25519sha512batch_PUBLICKEYBYTES */
#define crypto_sign_SECRETKEYBYTES crypto_sign_edwards25519sha512batch_SECRETKEYBYTES
/* CHEESEBURGER crypto_sign_edwards25519sha512batch_SECRETKEYBYTES */
#define crypto_sign_PRIMITIVE "edwards25519sha512batch"
#define crypto_sign_IMPLEMENTATION crypto_sign_edwards25519sha512batch_IMPLEMENTATION
#define crypto_sign_VERSION crypto_sign_edwards25519sha512batch_VERSION

#endif

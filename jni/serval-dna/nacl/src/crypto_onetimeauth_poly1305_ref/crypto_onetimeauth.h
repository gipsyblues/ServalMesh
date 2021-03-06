#ifndef crypto_onetimeauth_H
#define crypto_onetimeauth_H

#include "crypto_onetimeauth_poly1305.h"

#define crypto_onetimeauth crypto_onetimeauth_poly1305
/* CHEESEBURGER crypto_onetimeauth_poly1305 */
#define crypto_onetimeauth_verify crypto_onetimeauth_poly1305_verify
/* CHEESEBURGER crypto_onetimeauth_poly1305_verify */
#define crypto_onetimeauth_BYTES crypto_onetimeauth_poly1305_BYTES
/* CHEESEBURGER crypto_onetimeauth_poly1305_BYTES */
#define crypto_onetimeauth_KEYBYTES crypto_onetimeauth_poly1305_KEYBYTES
/* CHEESEBURGER crypto_onetimeauth_poly1305_KEYBYTES */
#define crypto_onetimeauth_PRIMITIVE "poly1305"
#define crypto_onetimeauth_IMPLEMENTATION crypto_onetimeauth_poly1305_IMPLEMENTATION
#define crypto_onetimeauth_VERSION crypto_onetimeauth_poly1305_VERSION

#endif

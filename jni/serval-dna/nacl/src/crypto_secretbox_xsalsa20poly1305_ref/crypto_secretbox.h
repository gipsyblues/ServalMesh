#ifndef crypto_secretbox_H
#define crypto_secretbox_H

#include "crypto_secretbox_xsalsa20poly1305.h"

#define crypto_secretbox crypto_secretbox_xsalsa20poly1305
/* CHEESEBURGER crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_open crypto_secretbox_xsalsa20poly1305_open
/* CHEESEBURGER crypto_secretbox_xsalsa20poly1305_open */
#define crypto_secretbox_KEYBYTES crypto_secretbox_xsalsa20poly1305_KEYBYTES
/* CHEESEBURGER crypto_secretbox_xsalsa20poly1305_KEYBYTES */
#define crypto_secretbox_NONCEBYTES crypto_secretbox_xsalsa20poly1305_NONCEBYTES
/* CHEESEBURGER crypto_secretbox_xsalsa20poly1305_NONCEBYTES */
#define crypto_secretbox_ZEROBYTES crypto_secretbox_xsalsa20poly1305_ZEROBYTES
/* CHEESEBURGER crypto_secretbox_xsalsa20poly1305_ZEROBYTES */
#define crypto_secretbox_BOXZEROBYTES crypto_secretbox_xsalsa20poly1305_BOXZEROBYTES
/* CHEESEBURGER crypto_secretbox_xsalsa20poly1305_BOXZEROBYTES */
#define crypto_secretbox_PRIMITIVE "xsalsa20poly1305"
#define crypto_secretbox_IMPLEMENTATION crypto_secretbox_xsalsa20poly1305_IMPLEMENTATION
#define crypto_secretbox_VERSION crypto_secretbox_xsalsa20poly1305_VERSION

#endif

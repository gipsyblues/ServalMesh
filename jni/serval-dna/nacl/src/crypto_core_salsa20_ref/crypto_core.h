#ifndef crypto_core_H
#define crypto_core_H

#include "crypto_core_salsa20.h"

#define crypto_core crypto_core_salsa20
/* CHEESEBURGER crypto_core_salsa20 */
#define crypto_core_OUTPUTBYTES crypto_core_salsa20_OUTPUTBYTES
/* CHEESEBURGER crypto_core_salsa20_OUTPUTBYTES */
#define crypto_core_INPUTBYTES crypto_core_salsa20_INPUTBYTES
/* CHEESEBURGER crypto_core_salsa20_INPUTBYTES */
#define crypto_core_KEYBYTES crypto_core_salsa20_KEYBYTES
/* CHEESEBURGER crypto_core_salsa20_KEYBYTES */
#define crypto_core_CONSTBYTES crypto_core_salsa20_CONSTBYTES
/* CHEESEBURGER crypto_core_salsa20_CONSTBYTES */
#define crypto_core_PRIMITIVE "salsa20"
#define crypto_core_IMPLEMENTATION crypto_core_salsa20_IMPLEMENTATION
#define crypto_core_VERSION crypto_core_salsa20_VERSION

#endif

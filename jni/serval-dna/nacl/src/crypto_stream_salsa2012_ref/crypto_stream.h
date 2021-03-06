#ifndef crypto_stream_H
#define crypto_stream_H

#include "crypto_stream_salsa2012.h"

#define crypto_stream crypto_stream_salsa2012
/* CHEESEBURGER crypto_stream_salsa2012 */
#define crypto_stream_xor crypto_stream_salsa2012_xor
/* CHEESEBURGER crypto_stream_salsa2012_xor */
#define crypto_stream_beforenm crypto_stream_salsa2012_beforenm
/* CHEESEBURGER crypto_stream_salsa2012_beforenm */
#define crypto_stream_afternm crypto_stream_salsa2012_afternm
/* CHEESEBURGER crypto_stream_salsa2012_afternm */
#define crypto_stream_xor_afternm crypto_stream_salsa2012_xor_afternm
/* CHEESEBURGER crypto_stream_salsa2012_xor_afternm */
#define crypto_stream_KEYBYTES crypto_stream_salsa2012_KEYBYTES
/* CHEESEBURGER crypto_stream_salsa2012_KEYBYTES */
#define crypto_stream_NONCEBYTES crypto_stream_salsa2012_NONCEBYTES
/* CHEESEBURGER crypto_stream_salsa2012_NONCEBYTES */
#define crypto_stream_BEFORENMBYTES crypto_stream_salsa2012_BEFORENMBYTES
/* CHEESEBURGER crypto_stream_salsa2012_BEFORENMBYTES */
#define crypto_stream_PRIMITIVE "salsa2012"
#define crypto_stream_IMPLEMENTATION crypto_stream_salsa2012_IMPLEMENTATION
#define crypto_stream_VERSION crypto_stream_salsa2012_VERSION

#endif

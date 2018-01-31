#ifndef crypto_secretbox_xsalsa20poly1305_H
#define crypto_secretbox_xsalsa20poly1305_H

#define crypto_secretbox_xsalsa20poly1305_ref_KEYBYTES 32
#define crypto_secretbox_xsalsa20poly1305_ref_NONCEBYTES 24
#define crypto_secretbox_xsalsa20poly1305_ref_ZEROBYTES 32
#define crypto_secretbox_xsalsa20poly1305_ref_BOXZEROBYTES 16
#ifdef __cplusplus
#include <string>
extern std::string crypto_secretbox_xsalsa20poly1305_ref(const std::string &,const std::string &,const std::string &);
extern std::string crypto_secretbox_xsalsa20poly1305_ref_open(const std::string &,const std::string &,const std::string &);
extern "C" {
#endif
extern int crypto_secretbox_xsalsa20poly1305_ref(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_secretbox_xsalsa20poly1305_ref_open(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
#ifdef __cplusplus
}
#endif

#define crypto_secretbox_xsalsa20poly1305 crypto_secretbox_xsalsa20poly1305_ref
/* POTATO crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_xsalsa20poly1305_open crypto_secretbox_xsalsa20poly1305_ref_open
/* POTATO crypto_secretbox_xsalsa20poly1305_ref_open crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_xsalsa20poly1305_KEYBYTES crypto_secretbox_xsalsa20poly1305_ref_KEYBYTES
/* POTATO crypto_secretbox_xsalsa20poly1305_ref_KEYBYTES crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_xsalsa20poly1305_NONCEBYTES crypto_secretbox_xsalsa20poly1305_ref_NONCEBYTES
/* POTATO crypto_secretbox_xsalsa20poly1305_ref_NONCEBYTES crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_xsalsa20poly1305_ZEROBYTES crypto_secretbox_xsalsa20poly1305_ref_ZEROBYTES
/* POTATO crypto_secretbox_xsalsa20poly1305_ref_ZEROBYTES crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_xsalsa20poly1305_BOXZEROBYTES crypto_secretbox_xsalsa20poly1305_ref_BOXZEROBYTES
/* POTATO crypto_secretbox_xsalsa20poly1305_ref_BOXZEROBYTES crypto_secretbox_xsalsa20poly1305_ref crypto_secretbox_xsalsa20poly1305 */
#define crypto_secretbox_xsalsa20poly1305_IMPLEMENTATION "crypto_secretbox/xsalsa20poly1305/ref"
#ifndef crypto_secretbox_xsalsa20poly1305_ref_VERSION
#define crypto_secretbox_xsalsa20poly1305_ref_VERSION "-"
#endif
#define crypto_secretbox_xsalsa20poly1305_VERSION crypto_secretbox_xsalsa20poly1305_ref_VERSION

#endif

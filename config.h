/**
 * \file config.h
 *
 * This set of compile-time options may be used to enable
 * or disable features selectively, and reduce the global
 * memory footprint.
 */
#ifndef XYSSL_CONFIG_H
#define XYSSL_CONFIG_H

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1
#endif

/*
 * Uncomment if native integers are 8-bit wide.
 *
#define XYSSL_HAVE_INT8
 */

/*
 * Uncomment if native integers are 16-bit wide.
 *
#define XYSSL_HAVE_INT16
 */

/*
 * Uncomment if the compiler supports long long.
 *
#define XYSSL_HAVE_LONGLONG
 */

/*
 * Uncomment to enable the use of assembly code.
 */
#define XYSSL_HAVE_ASM

/*
 * Uncomment if the CPU supports SSE2 (IA-32 specific).
 *
#define XYSSL_HAVE_SSE2
 */

/*
 * Enable all SSL/TLS debugging messages.
 */
#define XYSSL_DEBUG_MSG

/*
 * Enable the prime-number generation code.
 */
#define XYSSL_GENPRIME

/*
 * Uncomment this macro to store the AES tables in ROM.
 *
#define XYSSL_AES_ROM_TABLES
 */

/*
 * Module:  aes.c
 * Caller:  ssl_tls.c
 *
 * This module enables the following ciphersuites:
 *      SSL_RSA_AES_128_SHA
 *      SSL_RSA_AES_256_SHA
 *      SSL_EDH_RSA_AES_256_SHA
 */
#define XYSSL_AES_C

/*
 * Module:  arc4.c
 * Caller:  ssl_tls.c
 *
 * This module enables the following ciphersuites:
 *      SSL_RSA_RC4_128_MD5
 *      SSL_RSA_RC4_128_SHA
 */
#define XYSSL_ARC4_C

/*
 * Module:  base64.c
 * Caller:  x509parse.c
 *
 * This module is required for X.509 support.
 */
#define XYSSL_BASE64_C

/*
 * Module:  bignum.c
 * Caller:  dhm.c
 *          rsa.c
 *          ssl_tls.c
 *          x509parse.c
 *
 * This module is required for RSA and DHM support.
 */
#define XYSSL_BIGNUM_C

/*
 * Module:  certs.c
 * Caller:
 *
 * This module is used for testing (ssl_client/server).
 */
#define XYSSL_CERTS_C

/*
 * Module:  debug.c
 * Caller:  ssl_cli.c
 *          ssl_srv.c
 *          ssl_tls.c
 *
 * This module provides debugging functions.
 */
#define XYSSL_DEBUG_C

/*
 * Module:  des.c
 * Caller:  ssl_tls.c
 *
 * This module enables the following ciphersuites:
 *      SSL_RSA_DES_168_SHA
 *      SSL_EDH_RSA_DES_168_SHA
 */
#define XYSSL_DES_C

/*
 * Module:  dhm.c
 * Caller:  ssl_cli.c
 *          ssl_srv.c
 *
 * This module enables the following ciphersuites:
 *      SSL_EDH_RSA_DES_168_SHA
 *      SSL_EDH_RSA_AES_256_SHA
 */
#define XYSSL_DHM_C

/*
 * Module:  md5.c
 * Caller:  ssl_tls.c
 *          x509parse.c
 *
 * This module is required for SSL/TLS and X.509.
 */
#define XYSSL_MD5_C

/*
 * Module:  rsa.c
 * Caller:  ssl_cli.c
 *          ssl_srv.c
 *          ssl_tls.c
 *          x509.c
 *
 * This module is required for SSL/TLS and MD5-signed certificates.
 */
#define XYSSL_RSA_C

/*
 * Module:  sha1.c
 * Caller:  ssl_cli.c
 *          ssl_srv.c
 *          ssl_tls.c
 *          x509parse.c
 *
 * This module is required for SSL/TLS and SHA1-signed certificates.
 */
#define XYSSL_SHA1_C

/*
 * Module:  sha2.c
 * Caller:
 *
 * This module adds support for SHA-224 and SHA-256.
 */
#define XYSSL_SHA2_C

/*
 * Module:  sha4.c
 * Caller:
 *
 * This module adds support for SHA-384 and SHA-512.
 */
#define XYSSL_SHA4_C

/*
 * Module:  ssl_cli.c
 * Caller:
 *
 * This module is required for SSL/TLS client support.
 */
#define XYSSL_SSL_CLI_C

/*
 * Module:  ssl_srv.c
 * Caller:
 *
 * This module is required for SSL/TLS server support.
 */
#define XYSSL_SSL_SRV_C

/*
 * Module:  ssl_tls.c
 * Caller:  ssl_cli.c
 *          ssl_srv.c
 *
 * This module is required for SSL/TLS.
 */
#define XYSSL_SSL_TLS_C

/*
 * Module:  x509parse.c
 * Caller:  ssl_cli.c
 *          ssl_srv.c
 *          ssl_tls.c
 *
 * This module is required for X.509 certificate parsing.
 */
#define XYSSL_X509_PARSE_C

/*
 * Module:  x509_write.c
 * Caller:
 *
 * This module is required for X.509 certificate writing.
 */
#define XYSSL_X509_WRITE_C

#endif /* config.h */

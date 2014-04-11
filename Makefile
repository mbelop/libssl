LIB=	ssl

SRCS=	debug.c

# libcrypto components
SRCS+=	aes.c arc4.c base64.c bignum.c des.c dhm.c md5.c rsa.c
SRCS+=	sha1.c sha2.c sha4.c 

# real libssl
SRCS+=	base64.c dhm.c ssl_cli.c ssl_srv.c ssl_tls.c x509parse.c

CFLAGS+=-Wall -Werror -Wpointer-arith

CFLAGS+=-Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations
CFLAGS+=-Wpointer-arith -Wsign-compare
#-Wshadow -Wcast-qual

.include <bsd.lib.mk>

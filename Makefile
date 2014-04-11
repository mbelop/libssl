LIB=	ssl

# libcrypto components
SRCS+=	aes.c arc4.c base64.c bignum.c des.c
SRCS+=	dhm.c md5.c rsa.c sha1.c sha2.c sha4.c 

# real libssl
SRCS+=	base64.c certs.c dhm.c net.c ssl_cli.c
SRCS+=	ssl_srv.c ssl_tls.c x509parse.c

SRCS+=	debug.c

CFLAGS+=-Wall -Werror -Wpointer-arith

CFLAGS+=-Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations
CFLAGS+=-Wpointer-arith -Wsign-compare
#-Wshadow -Wcast-qual

.include <bsd.lib.mk>

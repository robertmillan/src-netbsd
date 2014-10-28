RUMPTOP=${TOPRUMP}

.PATH:	${RUMPTOP}/../dev/pci ${RUMPTOP}/../dev/ic

LIB=	rumpdev_pci_auich
IOCONF=	PCI_AUICH.ioconf

SRCS=	auich_at_pci.c

SRCS+=	auich.c

# FIXME: this belongs in a standalone module
SRCS+=	ac97.c

CPPFLAGS+= -I${RUMPTOP}/librump/rumpkern

.include "${RUMPTOP}/Makefile.rump"
.include <bsd.lib.mk>
.include <bsd.klinks.mk>

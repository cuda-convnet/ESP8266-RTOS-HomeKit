PROGRAM=esp-hal

ESPPORT=/dev/cu.SLAB_USBtoUART

ESPBAUD=1500000

EXTRA_COMPONENTS=extras/mbedtls extras/mdnsresponder homekit homekit/crypto homekit/crypto/srp homekit/crypto/tweetnacl

include ../../common.mk

serial:
	screen /dev/cu.SLAB_USBtoUART 115200
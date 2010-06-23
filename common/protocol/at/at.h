
#ifndef at_h
#define at_h

#include "../protocol.h"

typedef struct {
	GSM_Protocol_Message 	Msg;
	bool 			wascrlf;
	char 			*linestart;

	bool			EditMode;	/* wait for modem answer or not */
} GSM_Protocol_ATData;

#ifndef GSM_USED_SERIALDEVICE
#  define GSM_USED_SERIALDEVICE
#endif
#if defined(GSM_ENABLE_ATBLUETOOTH) || defined(GSM_ENABLE_DLR3BLUETOOTH)
#  ifndef GSM_USED_BLUETOOTHDEVICE
#    define GSM_USED_BLUETOOTHDEVICE
#  endif
#endif

#endif

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */

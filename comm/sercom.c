/*
 * sercom.c
 *
 * Created: 2019-09-23 3:07:48 PM
 *  Author: charl
 */ 

#include "sercom.h"
#include "FreeRTOS.h"

int8_t xSercomPadToRXPO(enum SercomPads_e pad) {
	switch(pad) {
		case PAD0:
			return 0;
		case PAD1:
			return 1;
		case PAD2:
			return 2;
		case PAD3:
			return 3;
		default:
			return -1;
	}
}

int8_t xSercomPadToTXPO(enum SercomPads_e pad) {
	switch(pad) {
		case PAD0:
			return 0;
		case PAD2:
			return 1;
		default:
			return -1;
	}
}
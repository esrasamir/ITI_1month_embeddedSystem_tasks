/*
 * kepad_private.h
 *
 *  Created on: 17 Aug 2022
 *      Author: Esraa Samir
 */

#ifndef KEPAD_PRIVATE_H_
#define KEPAD_PRIVATE_H_

#include "dio.h"

typedef struct{
	 dio_t port;
	 dio_pin_t pin;
} porting_t ;

#endif /* KEPAD_PRIVATE_H_ */

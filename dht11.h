/*
 * dth11.h
 *
 *  Created on: Mar 28, 2025
 *      Author: USER
 */

#ifndef INC_DHT11_H_
#define INC_DHT11_H_


#include "main.h"
#include "delay.h"
#include "stdbool.h"
#include "stdio.h"



enum
{
	INPUT,
	OUTPUT

};

typedef struct
{
	GPIO_TypeDef  *port;				//데이터 포트
	uint16_t  	  pinNumber;			//데이터 핀 번호
	uint8_t		  temperature;			//온도 값
	uint8_t		  humidity;				//습도 값

}DHT11;



void dht11Init(DHT11 *dht, GPIO_TypeDef *port, uint16_t pinNumber);
void dht11GpioMode(DHT11 *dht, uint8_t mode);
uint8_t dht11Read(DHT11 *dht);


#endif /* INC_DHT11_H_ */







#include "MemoryMap.h"
#include "StdTypes.h"
#include "Utils.h"

#include "DIO_Interface.h"
#include "MOTOR_Interface.h"
#include "LCD_Interface.h"
#include "KeyPad_Interface.h"
#include "ADC_Interface.h"
#include "Sensors_Interface.h"
#include "Fire_System_Interface.h"


#define  F_CPU	8000000
#include <util/delay.h>

u16 temperature,pressure;

int main(void)
{
	DIO_Init();
	MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	ADC_Init(VREF_AVCC,ADC_PRESCALER_64);
	while (1) 
    {			
			pressure = PRESS_Read();
			temperature = TEMP_Read();
			if(temperature < CRITICAL_TEMP)
			{
				FINE_State();
			}
			else
			{
				if(pressure < CRITICAL_SMOKE)
				{
					HEAT_State();
				}
				else
				{
					FIRE_State();
				}
			}
	}
}


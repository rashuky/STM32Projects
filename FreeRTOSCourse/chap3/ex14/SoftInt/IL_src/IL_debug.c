#include "IL_debug.h"


/*
 * Function thats utilize SWO as a serial monitor. SWO pin has to be connected
 */
int _write(char * str, int length)
{
	int DataIdx;

	for( DataIdx = 0; DataIdx < length; DataIdx ++)
	{
		ITM_SendChar( *str++);
	}
	return length;
}

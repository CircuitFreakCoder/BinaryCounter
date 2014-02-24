#ifndef _BINARY_COUNTER_
#define _BINARY_COUNTER_

#include "Arduino.h"
/*!
    BinaryCounter encapsulates the implementation of a binary counter led sequence.
*/	
class BinaryCounter
{
public:

/*!
    Constructs a BinaryCounter object.
*/

/*!
    \param b0 Pin number of bit zero, the least significant bit. Default value is 2.
	\param b1 Pin number of bit one. Default value is 3.	
	\param b2 Pin number of bit two. Default value is 4.	
	\param b3 Pin number of bit three, the most significant bit. Default value is 5.
*/	
	
    BinaryCounter(int b0 = 2, int b1 = 3, int b2 = 4, int b3 = 5);
	
/*!
    Starts the binary counter led sequence.
*/	
    void start();

protected:

    int pins[4];    /*!< Integer array to hold the four bits. */
	
/*!
    Displays the binary representation of a decimal number.
*/

/*!
    \param numToShow The decimal number to display in binary notation.
*/ 	
    void displayBinary(int numToShow);
};

#endif
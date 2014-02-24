#include "BinaryCounter.h"

BinaryCounter::BinaryCounter(int b0, int b1, int b2, int b3)
{
    pins[0] = b0;
    pins[1] = b1;
    pins[2] = b2;
    pins[3] = b3;

    for (int i =0; i<4; i++)
    {
        pinMode(pins[i], OUTPUT);
    }
}

void BinaryCounter::start()
{
    for (int i=0; i<16; i++)
    {
        displayBinary(i);
        delay(300);
    }
}

void BinaryCounter::displayBinary(int numToShow)
{
    for (int i =0; i<4; i++)
    {
        digitalWrite(pins[i], bitRead(numToShow, i));
    }

}
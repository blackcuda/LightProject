#include "CDriverWrapper.h"

#include <cstring>
#include <iostream>

CDriverWrapper::CDriverWrapper()
{
    memset(ledArray, 0, sizeof (ledArray));
}


CDriverWrapper::~CDriverWrapper()
{

}

void CDriverWrapper::SetColour(Colour ledColour, uint16_t index)
{
    if (index >= 100)
    {
        return;
    }

    ledArray[index].r = ledColour.red;
    ledArray[index].g = ledColour.green;
    ledArray[index].b = ledColour.blue;
    ledArray[index].w = ledColour.white;
}

void CDriverWrapper::SetLed()
{
    for(uint16_t index = 0; index < 30; index++)
    {
        std::cout << "set led " << std::to_string(index) << "->" << std::to_string(ledArray[index].r) << ":" << std::to_string(ledArray[index].g) << ":" << std::to_string(ledArray[index].b) << ":" << std::to_string(ledArray[index].w) << std::endl;
    }

    // ws2812_setLeds(ledArray, amount);
}




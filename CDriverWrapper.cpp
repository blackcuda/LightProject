#include "CDriverWrapper.h"

#include <cstring>
#include <iostream>

CDriverWrapper::CDriverWrapper(ILight** ledPtr)
                            :m_ledPtr(ledPtr)
{
    memset(ledArray, 0, sizeof (ledArray));
}


CDriverWrapper::~CDriverWrapper()
{

}

void CDriverWrapper::SetColour(colour ledColour)
{
    (void)ledColour;

//    ledArray[0].r = ledColour.red;
//    ledArray[0].g = ledColour.green;
//    ledArray[0].b = ledColour.blue;
//    ledArray[0].w = ledColour.white;
}

void CDriverWrapper::SetLed()
{
    for (int index = 0; index < 100; index++)
    {
        colour ledColour = m_ledPtr[index]->GetColour();

        ledArray[index].r = ledColour.red;
        ledArray[index].g = ledColour.green;
        ledArray[index].b = ledColour.blue;
        ledArray[index].w = ledColour.white;

        std::cout << "set led " << std::to_string(index) << "->" << std::to_string(ledArray[index].r) << ":" << std::to_string(ledArray[index].g) << ":" << std::to_string(ledArray[index].b) << ":" << std::to_string(ledArray[index].w) << std::endl;
    }

    // ws2812_setLeds(ledArray, amount);

}




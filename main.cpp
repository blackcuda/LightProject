
#include <vector>
//#include <Windows.h>
#include "ILight.h"
#include "CLed.h"
#include "CLightCollection.h"
#include "CCollection.h"
#include "CDriverWrapper.h"

int main()
{
    CLed leds[100];
    ILight* ledPtr[100];

//    Colour lightColour;

//    lightColour.red = 0;
//    lightColour.green = 0;
//    lightColour.blue = 0;
//    lightColour.white = 0;

    CDriverWrapper ledDriver;

    for (uint16_t index = 0; index < 100; index++)
    {
        leds[index].SetId(index);
        leds[index].SetLedDriver(&ledDriver);

        ledPtr[index] = &leds[index];
    }

    CLightCollection seg(ledPtr, 5, 20);

    //    CLightCollection segment2(ledPtr, 5, 5);

    //    seg.AddLight(segment2);

//    lightColour.red = 61;
//    lightColour.green = 62;
//    lightColour.blue = 63;
//    lightColour.white = 64;

//    //    seg.SetColour(lightColour);
//    //    seg.RemoveLight();

    Colour loopColour;

    while(1)
    {
        if (loopColour.red == 255)
        {
            loopColour.red = 0;
        }

        loopColour.red += 1;

        seg.SetColour(loopColour);

        ledDriver.SetLed();

//        Sleep(1000);
    }

    return 0;
}

//#include <QCoreApplication>

#include <vector>
#include <Windows.h>
#include "ILight.h"
#include "CLed.h"
#include "CLightCollection.h"
#include "CCollection.h"
#include "CDriverWrapper.h"

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    CLed leds[100];
    ILight* ledPtr[100];

    colour lightColour;

    lightColour.red = 0;
    lightColour.green = 0;
    lightColour.blue = 0;
    lightColour.white = 0;



    for (uint16_t index = 0; index < 100; index++)
    {
//        leds[index].SetLedDriver(&ledDriver);

        lightColour.red = static_cast<uint8_t>(index);

//        leds[index].SetColour(lightColour);

        ledPtr[index] = &leds[index];
    }

    CDriverWrapper ledDriver(ledPtr);

    ILight * ledjesPtr = nullptr;

    ledjesPtr = &leds[0];

//    std::vector<ILight*> henk;

//    henk.push_back(ledjesPtr);

//    CCollection<ILight*> collection(ledjesPtr);

    CLightCollection seg(ledPtr, 5, 20);
//    CLightCollection segment2(ledPtr, 5, 5);

//    seg.AddLight(segment2);

    lightColour.red = 61;
    lightColour.green = 62;
    lightColour.blue = 63;
    lightColour.white = 64;

//    seg.SetColour(lightColour);
//    seg.RemoveLight();

//    return a.exec();

    colour loopColour;

    while(1)
    {
        if (loopColour.red == 255)
        {
            loopColour.red = 0;
        }

        loopColour.red += 1;

        seg.SetColour(loopColour);

        ledDriver.SetLed();

        Sleep(1000);
    }

    return 1;
}

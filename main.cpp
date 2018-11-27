#include <QCoreApplication>

#include <vector>
#include "ILight.h"
#include "CLed.h"
#include "CLightCollection.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CLed leds[100];
    ILight* ledPtr[100];

    for (uint16_t index = 0; index < 100; index++)
    {
        leds[index].SetColour(static_cast<uint8_t>(index) + 1, 0, 0, 0);

        ledPtr[index] = &leds[index];
    }

    CLightCollection segment2(ledPtr, 5, 5);


    CLightCollection seg(ledPtr, 5, 20);

    seg.AddLight(segment2);

    seg.SetColour(60, 61, 62, 63);

    seg.RemoveLight();

    return a.exec();
}

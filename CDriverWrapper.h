#ifndef CDRIVERWRAPPER_H
#define CDRIVERWRAPPER_H

#include "ILedDriver.h"
#include "ILight.h"

#include <cstdint>

struct CRGBW {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t w;
};

class CDriverWrapper : public ILedDriver
{
public:
    CDriverWrapper(ILight** ledPtr);

    ~CDriverWrapper();

    void SetLed();

    void SetColour(colour ledColour);

private:

    ILight **m_ledPtr;

    CRGBW ledArray[100];

};

#endif // CDRIVERWRAPPER_H

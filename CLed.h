#ifndef CLED_H
#define CLED_H

#include <iostream>
#include <string>

#include "ILight.h"
#include "ILedDriver.h"


struct LedInfo
{
    uint16_t Id;
    uint8_t Brightness;
    Colour Colour;
};

class CLed : public ILight
{
public:

    CLed();

    ~CLed();

    void SetId(uint16_t id);

    void SetBrightness(uint8_t brightness);

    void SetColour(Colour lightColour);

    Colour GetColour(void);

    void SetLedDriver(ILedDriver* ledDriverPtr);

private:

    void setValue();

    LedInfo m_ledInfo;

    ILedDriver* m_ledDriverPtr;
};

#endif // CLED_H

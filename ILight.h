#ifndef ILIGHT_H
#define ILIGHT_H

#include <cstdint>

struct Colour
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t white;
};

class ILight
{
public:
    virtual ~ILight() = default;

//    virtual void SetBrightness(uint8_t brightness) = 0;

    virtual void SetColour(Colour lightColour) = 0;

    virtual Colour GetColour(void) = 0;
};

#endif // ILIGHT_H

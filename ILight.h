#ifndef ILIGHT_H
#define ILIGHT_H

#include <cstdint>

struct colour
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

    virtual void SetColour(colour lightColour) = 0;

    virtual colour GetColour(void) = 0;
};

#endif // ILIGHT_H

#ifndef ILIGHT_H
#define ILIGHT_H

#include <cstdint>

class ILight
{
public:
    virtual ~ILight() = default;

    virtual void SetColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w) = 0;
};

#endif // ILIGHT_H

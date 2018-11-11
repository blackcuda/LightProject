#ifndef ILIGHT_H
#define ILIGHT_H

#include <cstdint>

class ILight
{
public:
    virtual ~ILight();

    virtual void setColour(uint8_t r) = 0;
};

inline ILight::~ILight()
{

}

#endif // ILIGHT_H

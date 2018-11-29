#ifndef ILEDDRIVER_H
#define ILEDDRIVER_H

#include "ILight.h"

class ILedDriver
{
public:

    virtual ~ILedDriver() = default;

    virtual void SetColour(colour ledColour) = 0;

    virtual void SetLed() = 0;

};

#endif // ILEDDRIVER_H

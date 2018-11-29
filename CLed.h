#ifndef CLED_H
#define CLED_H

#include <iostream>
#include <string>

#include "ILight.h"
#include "ILedDriver.h"

class CLed : public ILight
{
public:

    CLed();

    ~CLed();

    void SetColour(colour lightColour);

    colour GetColour(void);

    void SetLedDriver(ILedDriver* ledDriverPtr);

    //void SetBrightNess();

private:

    colour m_ledColour;

    ILedDriver* m_ledDriverPtr;
};

#endif // CLED_H

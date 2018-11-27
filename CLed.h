#ifndef CLED_H
#define CLED_H

#include <iostream>
#include <string>

#include "ILight.h"

class CLed : public ILight
{
public:

    CLed();

    ~CLed();

    void SetColour(colour lightColour);

    colour GetColour();

    //void SetBrightNess();

private:

    colour m_ledColour;
};

#endif // CLED_H

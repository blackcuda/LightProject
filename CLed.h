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

    void setColour(uint8_t r);
};

#endif // CLED_H

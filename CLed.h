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

    void SetColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w);

private:

    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_white;
};

#endif // CLED_H

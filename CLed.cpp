#include "CLed.h"


CLed::CLed()
    :m_red(0), m_green(0), m_blue(0), m_white(0)
{

    std::cout << "Create LED" << std::endl;
}

CLed::~CLed() {
    std::cout << "destruct CLED" << std::endl;
}


void CLed::SetColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w)
{
    m_red = r;
    m_green = g;
    m_blue = b;
    m_white = w;

    std::cout << "set colour -> " << std::to_string(m_red) << std::endl;
}

#include "CLed.h"


CLed::CLed() {

}

CLed::~CLed() {
    std::cout << "destruct CLED" << std::endl;
}


void CLed::setColour(uint8_t r)
{
    std::cout << "set colour -> " << std::to_string(r) << std::endl;
}

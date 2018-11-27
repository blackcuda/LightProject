#include "CLed.h"


CLed::CLed()
    :m_ledColour()
{

    std::cout << "Create LED" << std::endl;
}

CLed::~CLed() {
    std::cout << "Destruct CLED" << std::endl;
}


void CLed::SetColour(colour lightColour)
{
    m_ledColour = lightColour;

    std::cout << "set colour -> " << std::to_string(m_ledColour.red) << ", " << std::to_string(m_ledColour.green) << ", " << std::to_string(m_ledColour.blue) << ", " << std::to_string(m_ledColour.white) << std::endl;
}

colour CLed::GetColour()
{
    return m_ledColour;
}

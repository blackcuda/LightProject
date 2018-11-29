#include "CLed.h"
#include "CDriverWrapper.h"

CLed::CLed()
    :m_ledColour(), m_ledDriverPtr(nullptr)
{
    std::cout << "Create LED" << std::endl;
}

CLed::~CLed()
{
    std::cout << "Destruct CLED" << std::endl;
}

void CLed::SetColour(colour lightColour)
{
    m_ledColour = lightColour;

    if (m_ledDriverPtr != nullptr)
    {
        m_ledDriverPtr->SetColour(m_ledColour);
    }

//    std::cout << "set colour -> " << std::to_string(m_ledColour.red) << ", " << std::to_string(m_ledColour.green) << ", " << std::to_string(m_ledColour.blue) << ", " << std::to_string(m_ledColour.white) << std::endl;
}

colour CLed::GetColour()
{
    return m_ledColour;
}

void CLed::SetLedDriver(ILedDriver* ledDriverPtr)
{
    m_ledDriverPtr = ledDriverPtr;
}


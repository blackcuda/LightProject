#include "CLed.h"
#include "CDriverWrapper.h"

CLed::CLed()
    :m_ledInfo(), m_ledDriverPtr(nullptr)
{
    std::cout << "Create LED" << std::endl;
}

CLed::~CLed()
{
    std::cout << "Destruct CLED" << std::endl;
}

void CLed::SetId(uint16_t id)
{
    m_ledInfo.Id = id;
}

void CLed::SetBrightness(uint8_t brightness)
{
    m_ledInfo.Brightness = brightness;

    setValue();
}

void CLed::SetColour(Colour lightColour)
{
    m_ledInfo.Colour = lightColour;

    setValue();
}

Colour CLed::GetColour()
{
    return m_ledInfo.Colour;
}

void CLed::SetLedDriver(ILedDriver* ledDriverPtr)
{
    m_ledDriverPtr = ledDriverPtr;
}


void CLed::setValue()
{
//    Colour LedValue;

//    LedValue.red = m_ledInfo.Colour.red * m_ledInfo.Brightness;





    if (m_ledDriverPtr != nullptr)
    {
        m_ledDriverPtr->SetColour(m_ledInfo.Colour, m_ledInfo.Id);

    }
    else
    {
        // not possible to set colour
    }

    //    std::cout << "set colour -> " << std::to_string(m_ledColour.red) << ", " << std::to_string(m_ledColour.green) << ", " << std::to_string(m_ledColour.blue) << ", " << std::to_string(m_ledColour.white) << std::endl;
}

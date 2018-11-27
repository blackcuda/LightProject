#include "CLightCollection.h"

#include <string.h>

//template<class T>
//CLightCollection<T>::CLightCollection(ILight** lightCollection, uint32_t amount, uint32_t startIndex)
CLightCollection::CLightCollection(ILight** lightCollection, uint32_t amount, uint32_t startIndex)
{
    memset(m_lights, 0, sizeof (m_lights));

    for(uint16_t index = 0; (index < amount) && (index < MAX_SIZE_COLLECTION); index++)
    {
        m_lights[index] = lightCollection[startIndex + index];
    }
}

CLightCollection::~CLightCollection()
{

}

void CLightCollection::AddLight(ILight& light)
{
    uint16_t index = 0;

    while (m_lights[index] != nullptr)
    {
        index++;
    }

    if (index != MAX_SIZE_COLLECTION)
    {
        m_lights[index] = &light;
    }
}

void CLightCollection::RemoveLight()
{
    uint16_t index = getLastLightIndex();

    if (index < MAX_SIZE_COLLECTION)
    {
        m_lights[index] = nullptr;
    }
}

void CLightCollection::SetColour(colour lightColour)
{
    for (uint16_t index = 0; index < MAX_SIZE_COLLECTION; index++)
    {
        if (m_lights[index] != nullptr)
        {
            std::cout << "Light" << index << ":" << std::endl;
            m_lights[index]->SetColour(lightColour);
        }
    }
}


/* ------------------- LOCAL FUNTIONS --------------------------- */

uint16_t CLightCollection::getLastLightIndex(void)
{
    uint16_t index = 0;

    while (m_lights[index] != nullptr)
    {
        index++;
    }

    return index -1;
}

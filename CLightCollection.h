#ifndef CLIGHTCOLLECTION_H
#define CLIGHTCOLLECTION_H

#include <string>
#include <cstdint>
#include <iostream>

#include "ILight.h"

#define MAX_SIZE_COLLECTION 20

class CLightCollection : public ILight
{
public:
    CLightCollection(ILight** lightCollection, uint32_t amount, uint32_t startIndex);

    ~CLightCollection();

    void AddLight(ILight& light);
    void RemoveLight();

    void SetColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w);

private:

    uint16_t getLastLightIndex(void);

    ILight* m_lights[MAX_SIZE_COLLECTION];
};

#endif // CLIGHTCOLLECTION_H

#ifndef CLIGHTCOLLECTION_H
#define CLIGHTCOLLECTION_H

#include <string>
#include <cstdint>
#include <iostream>

#include "ILight.h"
#include "CCollection.h"

#define MAX_SIZE_COLLECTION 20

//template <class T>
class CLightCollection : public ILight//, CCollection<T>
{
public:
    CLightCollection(ILight** lightCollection, uint32_t amount, uint32_t startIndex);

    ~CLightCollection();

    void AddLight(ILight& light);
    void RemoveLight();

    void SetColour(colour lightColour);

private:

    uint16_t getLastLightIndex(void);

    ILight* m_lights[MAX_SIZE_COLLECTION];
};

#endif // CLIGHTCOLLECTION_H

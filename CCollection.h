#ifndef CCOLLECTION_H
#define CCOLLECTION_H

#include <string>
#include <iostream>

template <class T> class CCollection
{

public:

    CCollection(T collection);
    virtual ~CCollection() = 0;

private:

//    T m_collection;

};

#endif // CCOLLECTION_H

#include <QCoreApplication>

#include <vector>
#include "ILight.h"
#include "CLed.h"
#include "CLightCollection.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ILight *lightPtr[3];

//    ILight *lightPtrs[5];
    CLed led1;
    CLed led2;
    CLed led3;
    CLed led4;
    CLed led5;
    CLed led6;

    lightPtr[0] = &led1;

//    lightPtrs[0] = &led1;
//    lightPtrs[1] = &led2;

    uint32_t amount = 2;
//    CLightCollection seg1(lightPtrs, amount);

//    lightPtrs[0] = nullptr;
//    lightPtrs[1] = nullptr;

//    lightPtrs[0] = &led3;

//    uint32_t amount2 = 1;
//    CLightCollection seg2(lightPtrs, amount2);

    return a.exec();
}

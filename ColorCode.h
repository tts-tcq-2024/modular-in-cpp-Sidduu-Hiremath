#ifndef COLORCODE_H
#define COLORCODE_H

#include "ColorPair.h"

namespace TelCoColorCoder  
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorCodeManual();
}

#endif 

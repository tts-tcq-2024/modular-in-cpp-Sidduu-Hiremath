#include "ColorCode.h"
#include <iostream> 

namespace TelCoColorCoder 
{
    const int numberOfMajorColors = 5;
    const int numberOfMinorColors = 5;

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintColorCodeManual() {
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
            ColorPair colorPair = GetColorFromPairNumber(i);
            std::cout << i << ": " << colorPair.ToString() << std::endl;
        }
    }
}

#include "UnitTests.h"

void CalculatePulses(int i) {
    int currentLeftEncoder, currentRightEncoder;
    switch(i) {
        case 0:
            currentLeftEncoder = 0;
            currentRightEncoder = 0;
            break;
        case 1:
            currentLeftEncoder = 100;
            currentRightEncoder = 100;
            break;
        case 2:
            currentLeftEncoder = 300;
            currentRightEncoder = 200;
            break;
        case 3:
            currentLeftEncoder = 500;
            currentRightEncoder = 300;
            break;
        case 4:
            currentLeftEncoder = 700;
            currentRightEncoder = 400;
            break;
        case 5:
            currentLeftEncoder = 900;
            currentRightEncoder = 500;
            break;
        case 6:
            currentLeftEncoder = 1000;
            currentRightEncoder = 600;
            break;
        case 7:
            currentLeftEncoder = 1100;
            currentRightEncoder = 700;
            break;
        case 8:
            currentLeftEncoder = 1200;
            currentRightEncoder = 800;
            break;
        case 9: 
            currentLeftEncoder = 1200;
            currentRightEncoder = 800;
            break;
        default:
            printf("You shouldn't reach that statement .\n");
    }
    if (currentLeftEncoder != LeftEncoderValue) {
        LeftEncoderValue = currentLeftEncoder - LeftEncoderValue;
    }
    if (currentRightEncoder != RightEncoderValue) {
        RightEncoderValue = currentRightEncoder - RightEncoderValue;
    }
}
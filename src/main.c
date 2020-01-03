#include "UnitTests.h"
// #include "math.h"

int main() {
    Position* robotPosition;
    robotPosition = (Position*)malloc(sizeof(Position));
    robotPosition->posX = 0;
    robotPosition->posY = 0;
    robotPosition->theta = 0;

    for (int i = 0 ; i < 10 ; i++) {
        CalculatePulses(i);
        linearDistance();
        linearDisplacement();
        orientationChange();
        posUpdate(robotPosition);
        printPos(robotPosition);
    }
    return 0;
}
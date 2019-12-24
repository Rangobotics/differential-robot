#include "Odometry.h"

float DeltaPosX = 0;
float DeltaPosY = 0;
float DeltaTheta = 0;

int LeftEncoderValue = 0;
int RightEncoderValue = 0;

void linearDistance() {
    DistanceLeft = ((2*M_PI*RADIUS)/ENCODER_PRECISION)*LeftEncoderValue;
    DistanceRight = ((2*M_PI*RADIUS)/ENCODER_PRECISION)*RightEncoderValue;
}

void linearDisplacement() {
    Displacement = (DistanceLeft + DistanceRight) / 2;
}

void orientationChange() {
    Orientation = (DistanceRight - DistanceLeft) / WHEEL_DISTANCE;
}
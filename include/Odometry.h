#ifndef ODOMETRY_H
#define ODOMETRY_H

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#define RADIUS                 5
#define WHEEL_DISTANCE         20
#define ENCODER_PRECISION      100

typedef struct {
     float posX, posY, theta;
} Position;

extern int LeftEncoderValue, RightEncoderValue;

float DistanceRight, DistanceLeft, Displacement, Orientation;
extern float DeltaPosX, DeltaPosY, DeltaTheta;

float linearVelocity, angularVelocity;
float WLeftRotation, WRightRotation;

void linearDistance();
void linearDisplacement();;
void orientationChange();

#endif /* ODOMETRY_H */
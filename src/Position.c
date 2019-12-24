#include "Position.h"

void posUpdate(Position* robPos) {
    DeltaPosX = Displacement * cos(Orientation);
    DeltaPosY = Displacement * sin(Orientation);

    robPos->posX = robPos->posX + DeltaPosX;
    robPos->posY = robPos->posY + DeltaPosY;
    robPos->theta = robPos->theta + Orientation;

    linearVelocity = ((M_PI * RADIUS) * (LeftEncoderValue + RightEncoderValue) / (ENCODER_PRECISION * 0.1));
    angularVelocity = ((M_PI * RADIUS) * (LeftEncoderValue - RightEncoderValue) / (WHEEL_DISTANCE * ENCODER_PRECISION * 0.1));

    WLeftRotation = ((linearVelocity - WHEEL_DISTANCE/2) * angularVelocity)/(RADIUS);
    WRightRotation = ((linearVelocity + WHEEL_DISTANCE/2) * angularVelocity)/(RADIUS);
}

void goToPos(Position* robPos, Position* goalPos) {
    float newTheta = atan2((goalPos->posY - robPos->posY), (goalPos->posX - robPos->posX));
    if (robPos->theta > newTheta) {
        // Negative Rotation 
        robPos->theta = newTheta;
    } else if (robPos->theta < newTheta) {
        // Positive Rotation 
        robPos->theta = newTheta;
    }
}

void printPos(Position* robPos) {
    printf("X = %f \n", robPos->posX);
    printf("Y = %f \n", robPos->posY);
    printf("Theta = %f \n\n", robPos->theta);
}
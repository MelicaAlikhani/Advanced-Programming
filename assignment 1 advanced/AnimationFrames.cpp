#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "ant.h"
#include "Frog.h"
#include "Rabbit.h"
#include"Dolphin.h"
#include"Fish.h"
#include "Bear.h"
#include "AnimationFrames.h"

int AnimationFrames::animation() {
    ant A;
    Rabbit R;
    frog F;
    Fish FI;
    Dolphin D;
    Bear B;
   
    R.rabbit();
    system("pause");
    F.Frog();
    system("pause");
    FI.fish();
    system("pause");
    D.dolphin();
    system("pause");
    B.bear();
    system("pause");




    return 0;

}

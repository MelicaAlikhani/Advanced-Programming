#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "ant.h"
#include "Frog.h"
#include "Rabbit.h"
#include"Monkey.h"
#include"Fish.h"
#include "Bear.h"
#include "AnimationFrames.h"

int AnimationFrames::animation() {
    ant A;
    Rabbit R;
    frog F;
    Fish FI;
    monkey M;
    Bear B;
   
    R.rabbit();
    system("pause");
    F.Frog();
    system("pause");
    FI.fish();
    system("pause");
    M.Monkey();
    system("pause");
    B.bear();
    system("pause");




    return 0;

}

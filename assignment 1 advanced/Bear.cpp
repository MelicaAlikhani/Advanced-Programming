#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "string"
#include "Bear.h"

void Bear::bear() {
    using namespace std::chrono_literals;


    //Bear

    ifstream myText("Bear.txt");
    string bear;
    if (myText.is_open())
    {
        while (getline(myText, bear))
        {
            cout << bear << '\n';
        }


        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "   __         __     \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "/  \\.-"" - . / \\  \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "\\    -   -    /    \n";
       
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  |   o   o   |     \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  \\  .-'''-.  /   \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  '-\\__Y__/-'    \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "        \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "    `---`     \n";

        std::this_thread::sleep_for(1000ms);
        system("CLS");
       
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "   __         __    \n";
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "/  \\.-"" - . / \\  \n";
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << " \\    -   -    /   \n";

        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  |   o   o   |     \n";
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "   \\  .-'''-.  /   \n";
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "    '-\\__Y__/-'    \n";
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "        | | |       \n";
        for (int steps = 0; steps < 100; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "        `---`       \n";

        std::this_thread::sleep_for(1000ms);
        system("CLS");


        auto end = std::chrono::high_resolution_clock::now();
        system("CLS");
    }

}

#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "Rabbit.h"

void Rabbit::rabbit() {
    using namespace std::chrono_literals;


    //Dog
    ifstream myfile("Rabbit.txt");
    string Rabbit;
    if (myfile.is_open())
    {
        while (getline(myfile, Rabbit))
        {
            cout << Rabbit << '\n';
        }
       
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "    // \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "   ('> \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
           
        std::cout << "   /rr \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
            std::cout <<" *\\))_   \n";
      
    
    std::this_thread::sleep_for(1000ms);
    system("CLS");

    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "   // \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  ('>\n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }

    std::cout << "  /rr \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "    )\n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
        std::cout << " *\\))_   \n";
    
    std::this_thread::sleep_for(1000ms);
    system("CLS");

    for (int steps = 0; steps < 100; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "   // \n";
    for (int steps = 0; steps < 100; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  <')\n";
    for (int steps = 0; steps < 100; ++steps)
    {
        std::cout << " ";
    }

    std::cout << "  /rr \n";
    for (int steps = 0; steps < 100; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "    )\n";
    for (int steps = 0; steps < 100; ++steps)
    {
        std::cout << " ";
    }
    std::this_thread::sleep_for(1000ms);
    system("CLS");
        auto end = std::chrono::high_resolution_clock::now();
        system("CLS");

    }
}

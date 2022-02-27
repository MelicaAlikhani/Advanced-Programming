#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "ant.h"

void ant::Ant() {
    using namespace std::chrono_literals;
      ifstream myFile ("Ant.txt");
      string line;
      if (myFile.is_open())
      {
          while (getline(myFile, line))
          {
              cout << line << '\n';
          }
          
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1000ms);
    system("CLS");
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << " \(..)/ \n";
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "-(  )-\n";
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "/(__)\\n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "\(..)/\n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "   -(  )- \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << " /(__)\ \n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");

    std::cout << "  \(..)/\n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "-(  )- \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "   /(__)\ \n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");

    auto end = std::chrono::high_resolution_clock::now();
    system("CLS");
    
  
}
}

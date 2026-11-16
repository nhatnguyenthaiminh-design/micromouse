#include <iostream>

#include "app/Application.h"

void Application::initialize()
{
    std::cout << "Initializing Micromouse Simulator..."
              << std::endl;
}

void Application::run()
{
    std::cout << "Micromouse Simulator is running."
              << std::endl;
}

void Application::shutdown()
{
    std::cout << "Shutting down application."
              << std::endl;
}

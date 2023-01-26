#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>

struct Option
{
    void (*function)();
    std::string name = "";
};

void cls();
void pause();

void displayOptions(Option options[], int length);

#endif

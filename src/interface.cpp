#include "RavenInnclude/Interface.h"
#include <iostream>

void cls()
{
    system("cls");
}

void pause()
{
    system("pause");
}

void displayOptions(Option options[], int length)
{
    int choice = -1;

    for (int i = 0; i < length; i++)
    {
        std::cout << i + 1 << ": " << options[i].name << "\n";
    }

    while (choice < 0 || choice >= length)
    {
        std::cin >> choice;
    }

    (*options[choice - 1].function)();
}

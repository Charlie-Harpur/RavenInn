#include <iostream>
#include <stdlib.h>
#include "RavenInnclude/Interface.h"

using std::cout, std::endl;

void cls();
void pause();

int main()
{
    cout << "TEST" << endl;
    void (*test[2])() = {pause, cls};
    createOptions(aTest,  2);
    cout << "MORE" << endl;
    pause();
    return 0;
}

void cls()
{
    system("cls");
}

void pause()
{
    system("pause");
}

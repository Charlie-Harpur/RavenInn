#include <iostream>
#include <stdlib.h>
#include "RavenInnclude/Interface.h"

using std::cout, std::endl;

void func1();
void func2();

int main()
{
    Option array[2] = {{func1,"func1"}, {func2, "func2"}};
    cout << "TEST" << endl;
    pause();
    displayOptions(array, 2);
    return 0;
}

void func1()
{
    std::cout << "Func1" << endl;
}

void func2()
{
    std::cout << "Func2" << endl;
}

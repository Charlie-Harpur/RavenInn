#include <iostream>
#include <stdlib.h>

using std::cout, std::endl;

void cls();
void pause();

int main()
{
    cout << "TEST" << endl;
    cls();
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

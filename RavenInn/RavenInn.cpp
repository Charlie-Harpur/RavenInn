#include <iostream>
#include <stdlib.h>
#include "RavenInnclude/Interface.h"
#include "RavenInnclude/Person.h"

using std::cout, std::endl;

int main()
{
    Person test;
    test.setGold(2);

    cout << test.getGold() << endl;

    cout << "TEST" << endl;
    pause();

    return 0;
}

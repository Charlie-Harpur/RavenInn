#include <stdlib.h>
#include <iostream>
#include "RavenInnclude/Interface.h"
#include "RavenInnclude/Person.h"

using std::cout, std::endl;

int main()
{
    /*  MAIN LOOP

        choosing which room to interact with (useful for graphics state later)

        see what guests are doing (they will change what they are doing through
        the day)

    */
    Person test;
    int i;
    std::cin >> i;
    cout << "num entered: " << i << endl;
    test.setHappiness(i);
    cout << "Happiness set: " << test.getHappiness() << endl;

    return 0;
}

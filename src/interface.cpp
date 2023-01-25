#include "RavenInnclude/Interface.h"

void createOptions(void (*opts[])(), int length)
{
    for (int i = 0; i < length; i++)
    {
        (*(opts[i]))();
    }
}

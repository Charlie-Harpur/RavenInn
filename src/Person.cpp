#include "RavenInnclude/Person.h"

Person::Person(): name(""),
    occupation(0),
    pInventory(new int[INVENTORY_SIZE]) {}

Person::~Person()
{
    delete[] pInventory;
}

Person::Person(const Person &rP)
{
    name = rP.name;
    occupation = rP.occupation;
    pInventory = new int[rP.INVENTORY_SIZE];
}

Person & Person::operator=(const Person &rP)
{
    if (this == &rP)
        return *this;

    delete[] pInventory;

    name = rP.name;
    occupation = rP.occupation;
    pInventory = new int[rP.INVENTORY_SIZE];
    return *this;
}

std::string Person::getName() const
{
    return name;
}

int Person::getOccupation() const
{
    return occupation;
}

void Person::setOccupation(const int &rNewOccupation)
{
    occupation = rNewOccupation;
}

int * Person::getInventory() const
{
    return pInventory;
}

#include "RavenInnclude/Person.h"

Person::Person(): name("Mike Hawk"),
    age(0),
    gender(true),
    allignment(0),
    happiness(0),
    pStatusEffects(new bool[STATUS_EFFECT_NUM]),
    gold(0),
    occupation(0),
    pInventory(new int[INVENTORY_SIZE]) {}

Person::~Person()
{
    delete[] pStatusEffects;
    delete[] pInventory;
}

Person::Person(const Person &rP)
{
    copyPerson(rP);
}

Person & Person::operator=(const Person &rP)
{
    if (this == &rP)
        return *this;

    copyPerson(rP);
    return *this;
}

std::string Person::getName() const
{
    return name;
}

int Person::getGold() const
{
    return gold;
}

int Person::getOccupation() const
{
    return occupation;
}

void Person::setOccupation(const int &rNewOccupation)
{
    occupation = rNewOccupation;
}

void Person::copyPerson(const Person &rP)
{
    name = rP.name;
    age = rP.age;
    gender = rP.gender;
    allignment = rP.allignment;
    happiness = rP.happiness;

    delete[] pStatusEffects;
    pStatusEffects = new bool[STATUS_EFFECT_NUM];
    for (int i = 0; i < STATUS_EFFECT_NUM; i++)
        pStatusEffects[i] = pStatusEffects[i];

    gold = rP.gold;
    occupation = rP.occupation;

    delete[] pInventory;
    pInventory = new int[INVENTORY_SIZE];
    for (int i = 0; i < INVENTORY_SIZE; i++)
        pInventory[i] = rP.pInventory[i];

}

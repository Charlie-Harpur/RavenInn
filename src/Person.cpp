#include "RavenInnclude/Person.h"

Person::Person(): name("Mike Hawk"),
    age(0),
    gender(true),
    allignment(0),
    happiness(0),
    pStatusEffects(new bool[NUM_STATUS_EFFECT]),
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

int Person::getAge() const
{
    return age;
}

bool Person::getGender() const
{
    return gender;
}

int Person::getAllignment() const
{
    return allignment;
}

int Person::getHappiness() const
{
    return happiness;
}

int Person::getGold() const
{
    return gold;
}

int Person::getOccupation() const
{
    return occupation;
}

void Person::setName(const std::string &rName)
{
    name = rName;
}

void Person::setAge(const int &rAge)
{
    age = rAge;
}

void Person::setGender(const bool &rGender)
{
    gender = rGender;
}

void Person::setAllignment(const int &rAllignment)
{
    allignment = rAllignment;
}

void Person::setHappiness(const int &rHappiness)
{
    happiness = rHappiness;
}

void Person::setGold(const int &rGold)
{
    gold = rGold;
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

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    public:
        static const int INVENTORY_SIZE = 10;

        Person();
        ~Person();
        Person(const Person &rP);
        Person & operator=(const Person &rP);

        std::string getName() const;

        int getOccupation() const;
        void setOccupation(const int &rNewOccupation);

        int * getInventory() const;

    private:
        std::string name;

        int occupation;
        int *pInventory;
};

#endif

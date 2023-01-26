#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    public:
        static const int INVENTORY_SIZE = 10;
        static const int STATUS_EFFECT_NUM = 2;

        bool *pStatusEffects;
        int *pInventory;

        Person();
        ~Person();
        Person(const Person &rP);
        Person & operator=(const Person &rP);

        std::string getName() const;
        int getAge() const;
        bool getGender() const;
        int getAllignment() const;
        int getHappiness() const;
        int getGold() const;
        int getOccupation() const;

        void setName(std::string &rName);
        void setAge(int &rAge);
        void setGender(int &rGender);
        void setAllignment(int &rAllignment);
        void setHappiness(int &rHappiness);
        void setGold(int &rGold);
        void setOccupation(const int &rNewOccupation);

    private:
        static const int MAX_HAPPINESS = 3;
        std::string name;

        int age;
        bool gender;
        int allignment;
        int happiness;

        int gold;
        int occupation;

        void copyPerson(const Person &rP);
};

#endif

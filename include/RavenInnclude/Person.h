#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    public:
        static const int INVENTORY_SIZE = 10;
        static const int NUM_STATUS_EFFECT = 2;

        Person();
        ~Person();
        Person(const Person &rP);
        Person & operator=(const Person &rP);

        //Getters
        std::string getName() const;
        int getAge() const;
        bool getGender() const;
        int getAllignment() const;
        int getHappiness() const;
        int getGold() const;
        int getOccupation() const;

        //Setters
        void setName(const std::string &rName);
        void setAge(const int &rAge);
        void setGender(const bool &rGender);
        void setAllignment(const int &rAllignment);
        void setHappiness(const int &rHappiness);
        void setGold(const int &rGold);
        void setOccupation(const int &rNewOccupation);

        //For accessing array elements
        bool checkStatus(int &rI) const;
        int getInventory(int &rI) const;

    private:
        static const int MAX_HAPPINESS = 3;
        std::string name;

        int age;
        bool gender;
        int allignment;
        int happiness;

        int gold;
        int occupation;

        bool *pStatusEffects;
        int *pInventory;

        void copyPerson(const Person &rP);
};

#endif

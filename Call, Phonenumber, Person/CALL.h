#ifndef CALL_H_INCLUDED
#define CALL_H_INCLUDED
#include"PHONEBOOK.h"
#include"PERSON.h"
class Call{

    public:
        Person();
        Person(string, string);
        Person(const Person&);

        string getFullName();
        string getPhoneNumber();
        bool setFullName(string);
        bool setPhoneNumber(string);
        PhoneBook();

        bool addPerson(string, string);
        bool addPerson(Person&);

        list<Person> searchByName(string);
        list<Person> searchByPhoneNumber(string);

        void listAllPeople();


    };
#endif // CALL_H_INCLUDED

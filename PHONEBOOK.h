#ifndef PHONEBOOK_H_INCLUDED
#define PHONEBOOK_H_INCLUDED


#include <string>
#include <list>
#include "Person.h"

    using namespace std;

    class PhoneBook {
        int norecord;
        list<Person> people;
    public:
        PhoneBook();

        bool addPerson(string, string);
        bool addPerson(Person&);

        list<Person> searchByName(string);
        list<Person> searchByPhoneNumber(string);

        void listAllPeople();
    };

#endif // PHONEBOOK_H_INCLUDED

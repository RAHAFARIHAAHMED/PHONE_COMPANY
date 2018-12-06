#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>

    using namespace std;

    class Person {
        string fullName;
        string phoneNumber;
    public:
        Person();
        Person(string, string);
        Person(const Person&);

        string getFullName();
        string getPhoneNumber();
        bool setFullName(string);
        bool setPhoneNumber(string);
    };


#endif // PERSON_H_INCLUDED

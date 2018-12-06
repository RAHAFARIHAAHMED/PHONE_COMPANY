#include"PERSON.cpp"
#include"PHONEBOOK.cpp"
#include"CALL.cpp"
#include <Windows.h>
#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main()
{


    phoneCompany<int>p(15);
    phoneCompany<int>p1(20);

    if (p.IsEmpty())
        cout<<"queue is empty"<<endl;

    p.Enqueue(4);
    p.Enqueue(9);
    p.Enqueue(2);
    p.Enqueue(7);
    p.Enqueue(3);
    p.Enqueue(11);
    p.Enqueue(17);
    p.Enqueue(0);
    p.Enqueue(5);
    p.Enqueue(1);
    if (p.IsEmpty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"queue is not empty"<<endl;

    int a;
    p.Dequeue(a);
    cout<<""<<a;
    cout<<"\n"<<endl;
    p.Dequeue(a);
    cout<<""<<a;

    p1.Enqueue(2);
    p1.Enqueue(1);
    p1.Enqueue(7);
    p1.Enqueue(4);
    p1.Enqueue(2);

    cout<<"\n"<<endl;



}

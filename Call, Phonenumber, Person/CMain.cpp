#include"PERSON.cpp"
#include"PHONEBOOK.cpp"
#include"CALL.cpp"
#include <Windows.h>
#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main()
{
	int time = 0;
	int hour = 0;
	int min = 0;
	int sec = 0;


	cout << "Enter a time in seconds: ";
	cin >> time;


	hour = time/3600;
	time = time%3600;
	min = time/60;
	time = time%60;
	sec = time;


	cout<<"\nThe time in HH:MM:SS format is: "<<hour<<" hours, "
		<<min<<" minutes, and "<<sec<<" seconds!\n";




    cout<<"Enter length of array"<<endl;
    int size;
    cin>>size;
    int * priorityqueue=new int [size];
    for (int i=0; i<size; i++)
        priorityqueue[i]=3;
    int k=4;
    SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
    while (k>=0)
    {
        for (int bi=0; bi<size; bi++)
            std::cout<<priorityqueue[bi];
        std::cout<<std::endl;
        int i=size-1;
        if (priorityqueue[i]==3)
        {
            priorityqueue[i]=4;
            continue;
        }
        if (priorityqueue[i]==4)
        {
            while (priorityqueue[i]==4)
            {
                priorityqueue[i]=3;
                --i;
            }
            priorityqueue[i]=4;
            if (i<k)
                k--;

        }

    }

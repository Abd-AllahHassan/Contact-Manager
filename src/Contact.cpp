#include "Contact.h"
#include<iostream>
using namespace std;

Contact::Contact()
{
    numPhones = 0;
}

Contact::Contact(string n,int idd, Phone p)
{   id=idd;
    name = n;
    numPhones = 1;
    phones[0] = p;
}
void Contact::set_id(int i)
{
    id=i;
}
int Contact::get_id()
{
    return id;
}

string Contact::getName()
{
    return name;
}

Phone* Contact::getPhones()
{
    return phones;
}

int Contact::getNumPhones()
{
    return numPhones;
}

void Contact::setName(string n)
 {
    name = n;
}

void Contact::addPhone(Phone p)
{
    if (numPhones < 10) {
        phones[numPhones] = p;
        numPhones++;
    } else {
        cout << "Cannot add more phones. Maximum limit reached." << endl;
    }
}

void Contact::display() {
    cout << "Name: " << name << endl;

    cout<<"ID : "<<id<<endl;
    cout << "Phones:" << endl;
    for (int i = 0; i < numPhones; i++) {
        cout<<"phone number "<<i+1<<" :"<<phones[i].get_phonenum()<<endl;
        cout << "City: " << phones[i].getCity() << endl;
        cout << "Email: " << phones[i].getEmail() << endl;
        cout << "Notes: " << phones[i].getNotes() << endl;
    }
}

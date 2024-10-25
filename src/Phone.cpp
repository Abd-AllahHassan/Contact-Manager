#include "Phone.h"
#include<iostream>
using namespace std;

Phone::Phone() {}

Phone::Phone(string c, string e, string n,int pn) {
    city = c;
    email = e;
    notes = n;
    int n1;
    phonenumber=pn;
}

string Phone::getCity() {
    return city;
}

string Phone::getEmail() {
    return email;
}

string Phone::getNotes() {
    return notes;
}

void Phone::setCity(string c) {
    city = c;
}

void Phone::setEmail(string e) {
    email = e;
}

void Phone::setNotes(string n) {
    notes = n;
}
void Phone::set_phonenum(int phonum)
{
    phonenumber=phonum;
}
int Phone::get_phonenum()
{
    return phonenumber;
}


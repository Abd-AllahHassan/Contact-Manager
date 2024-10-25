#include "ContactBook.h"
#include<iostream>
using namespace std;

ContactBook::ContactBook() {
    numContacts = 0;
}

void ContactBook::addContact(string n,int idd, Phone p) {
    if (numContacts < 10) {
        Contact contact(n,idd, p);
        contacts[numContacts] = contact;
        numContacts++;
        cout << "Contact added successfully." << endl;
    } else {
        cout << "Cannot add more contacts. Maximum limit reached." << endl;
    }
}

void ContactBook::deleteContact(int n) {
    bool found = false;
    for (int i = 0; i < numContacts; i++) {
        if (contacts[i].get_id() == n) {
            for (int j = i + 1; j < numContacts; j++) {
                contacts[j - 1] = contacts[j];
            }
            numContacts--;
            found = true;
            cout << "Contact deleted successfully." << endl;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void ContactBook::searchContact(int n) {
    bool found = false;
    for (int i = 0; i < numContacts; i++) {
        if (contacts[i].get_id() == n) {
            found = true;
            cout << "Contact found." << endl;
            contacts[i].display();
            break;
        }
    }
    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void ContactBook::displayAll() {
    if (numContacts == 0) {
        cout << "No contacts in the book." << endl;
    } else {
        cout << "All contacts in the book:" << endl;
        for (int i = 0; i < numContacts; i++) {
            contacts[i].display();
        }
    }
}


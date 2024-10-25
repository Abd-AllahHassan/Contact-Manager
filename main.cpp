#include <iostream>
#include "ContactBook.h"
#include "Phone.h"
#include <string>

using namespace std;

void displayMenu()
{
    cout << "Welcome to Contact Book!" << endl;
    cout << "Please choose an option:" << endl;
    cout << "1. Add a contact" << endl;
    cout << "2. Delete a contact" << endl;
    cout << "3. Search for a contact" << endl;
    cout << "4. Display all contacts" << endl;
    cout << "5. Exit" << endl;
    cout << "****************************\n";
}

int main()
{
    ContactBook cb;
    int phonenumberr;
    int choice,id;
    string name, city, email, notes;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Name: ";
            cin >> name;
            cout<<"Enter phone number :";
            cin>>phonenumberr;
            cout<<"Enter ID : ";
            cin>>id;
            cout << "Enter City: ";
            cin >> city;
            cout << "Enter Email: ";
            cin >> email;
            cout << "Enter Notes: ";
            cin >> notes;
            cb.addContact(name,id, Phone(city, email, notes,phonenumberr));
            break;

        case 2:
            cout << "Enter ID: ";
            cin >> id;
            cb.deleteContact(id);
            break;

        case 3:
            cout << "Enter ID: ";
            cin >> id;
            cb.searchContact(id);
            break;

        case 4:
            cb.displayAll();
            break;

        case 5:
            cout << "(: exit done" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}

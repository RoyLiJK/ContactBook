#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include<iostream>
#include<string>
#include"Contact.h"
using namespace std;

class ContactBook
{
private:
	Contact book[10]; //array of Contacts to make the ContactBook
	int allIndex = 0; //stores the next empty index in the array (aka the # of stored contacts)

public:
	const int numContacts() const; //returns how many contacts are currently stored in the array (size of the list)
	void addContact(Contact input); //adds a contact object to the array
	void deleteContact(int index); //deletes a contact from the array at the input index
	void update(int index, Contact input); //update a contact already stored in the array with the contact passed in as a parameter
	int search(string name); //searches for a contact already stored in the array by name and returns it's index if found, returns -1 if not found
	Contact contactAtIndex(int index) const; //returns the contact stored at index "index" of the array
	void displayAll(); //displays all the contacts within the array



};

#endif

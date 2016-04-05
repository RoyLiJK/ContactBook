#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include<iostream>
#include<string>
#include"Contact.h"
using namespace std;

class ContactBook
{
private:
	Contact book[10]; 
	int allIndex = 0; 

public:
	const int numContacts() const; 
	void addContact(Contact input); 
	void deleteContact(int index); 
	void update(int index, Contact input); 
	int search(string name); 
	Contact contactAtIndex(int index) const;
	void displayAll(); 



};

#endif

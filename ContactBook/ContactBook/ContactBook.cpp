#include "ContactBook.h"
using namespace std;


const int ContactBook::numContacts() const
{
	return allIndex;
}

void ContactBook::addContact(Contact input)
{
	if (allIndex < 10)
	{
		book[allIndex] = input;
		allIndex++;
	}
	else
		cout << "book is full" << endl;
}

void ContactBook::deleteContact(int index)
{
	if (index > -1 && index < 10) 
	{
		
		Contact temp[10];
		int i = 0;

		while (i != index) 
		{
			temp[i] = book[i];
			i++;
		}

		while (i < 9) 
		{
			temp[i] = book[i + 1]; 
			i++;
		}

		
		for (int j = 0; j < 10; j++) 
		{
			book[j] = temp[j];
		}

		allIndex--;

		cout << "Contact successfully deleted!"  << endl;
	}
	else cerr << "Please enter correct index!!" << endl << endl;
}

void ContactBook::update(int index, Contact input)
{
	if (index > -1 && index < 10) 
	{
		book[index] = input;
		cout << "Contact successfully updated!"  << endl;
	}
	else cerr << "Please enter correct index!!" << endl;
}

int ContactBook::search(string name)
{
	for (int i = 0; i < allIndex; i++) 
	{
		string fullName = book[i].getfirstname() + ' ' + book[i].getlastname();

		if (name.compare(book[i].getfirstname()) == 0) return i;
		else if (name.compare(book[i].getlastname()) == 0) return i;
		else if (name.compare(fullName) == 0) return i;
	}

	return -1;
}

Contact ContactBook::contactAtIndex(int index) const
{
	if (index > -1 && index < 10)
	{
		return book[index];
	}
	else
		cout << "No such contact!!" << endl;
}

void ContactBook::displayAll()
{	
	for (int i = 0; i < 10; i++)
	{
			cout << "Index = " << i << endl;
			book[i].output();
	}

}

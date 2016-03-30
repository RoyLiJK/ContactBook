#include<iostream>
#include<string>
#include"Address.h"
#include"Contact.h"
#include"ContactBook.h"
using namespace std;



int main()
{

	// Create a menu 
	int menu = 1;
	ContactBook list;

	while (menu > 0 && menu < 7)
	{
		cout << "Please enter the number your wish to proceed." << endl;

		cout << "1. Add a new contact" << endl
			 << "2. Delete an old contact" << endl
		  	 << "3. Display a contact's info" << endl
		 	 << "4. Update a contact's info" << endl
			 << "5. Display entire contact list" << endl
			 << "6. Exit" << endl << endl;

		cin >> menu;

		if (menu == 1)
		{
			Contact x; 
			x.input();
			list.addContact(x);
			continue;
		}

		else if (menu == 2)
		{
			int index;
			cout << "Please enter the index you'd like to delete: ";
			cin >> index;
			list.deleteContact(index);
			continue;
		}

		else if (menu == 3)
		{
			string display;
			cout << "Please enter the name of the contact you'd like to displayed: ";
			cin.ignore();
			getline(cin, display);

			list.contactAtIndex(list.search(display)).output();
			continue;
		}
		else if (menu == 4)
		{
			string update;
			cout << "Please enter your first name follow by your last name of the contact you'd like to modify.: ";
			cin.ignore();
			getline(cin, update);

			int index = list.search(update);

			cout << "Please enter the new data for the contact " << list.contactAtIndex(list.search(update)).getfirstname()
				<< ' ' << list.contactAtIndex(list.search(update)).getlastname() << '.' << endl << endl;

			Contact input; 
			input.input();
			list.update(index, input);

			cout << "Contact updated successfully!" << endl << endl;
			continue;
		}
		else if (menu == 5) 
		{ 
			list.displayAll();
			cout << endl;
			continue;
		}
		else if (menu == 6)
		{
			cout << "Program terminated!!" << endl;
			break;
		}

	}

	return 0;
}
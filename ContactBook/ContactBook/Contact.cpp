#include <iostream>
#include <string>
#include<regex>
#include"Contact.h"




	// Constructor with parameters
Contact::Contact(string U_lastname, string U_firstname, string U_phone, string U_email)
	{
		lastname = U_lastname;
		firstname = U_firstname;
		
		phone = U_phone;
		email = U_email;
	}

	// Default constructor
	Contact::Contact()
	{
		lastname = "unknown";
		firstname = "unknown";
		
		phone = "unknown";
		email = "unknown";
	}

	// Accessor functions
	string Contact::getlastname() { return lastname; }
	string Contact::getfirstname() { return firstname; }
	string Contact::getaddress() 
	{                                                                                                          
		string output = address.getHome() + " " + address.getStreet() + ", ";
		if (address.getApt().compare("none") != 0) output = output + address.getApt() + ", ";
		output = output + address.getCity() + ", " + address.getState() + " " + address.getZip();
		return output;
	}
	string Contact::getphone() { return phone; }
	string Contact::getemail() { return email; }
	
	// Mutator functions
	void Contact::setlastname(string U_lastname) { lastname = U_lastname; }
	void Contact::setfirstname(string U_firstname) { firstname = U_firstname; }

	const regex Contact::CheckPhone("[0-9]{10}");
	const regex Contact::CheckEmail("[0-9a-zA-Z._-]+@[0-9a-zA-Z._-]+.(com|net|gov|edu)");

	void Contact::setphone(string p) 
	{
		while (true) 
		{ 
			if (regex_match(p, CheckPhone)) 
			{ 
				phone = p;
				break; 
			}
			else 
			{ 
				cout << "Phone number must be 10 digits only. Please try again: " << endl;
				cin >> p;
			}
			cout << endl;
		}
	}


	void Contact::setemail(string e) 
	{
		while (true) 
		{ 
			if (regex_match(e, CheckEmail)) { 
				email = e;
				break; 
			}
			else 
			{ 
				cout << "Please enter proper E-mail address format: " << endl;
				cin >> e;
			}
			cout << endl;
		}
	}

	// Input and output function
bool Contact::input()
{
	cout << "Creating new contact, Enter -1 to quit" << endl;
	string questions[4] =
	{
		"Please enter your first name: ",
		"Please enter your last name: ",
		"Please enter your phone# (10 digit only): ",
		"Please enter your email: "
	};
	string input;

	for (int i = 0; i < 4; i++)
	{

		cout << questions[i] << endl;
		cin >> input;
		if (input == "-1")
	{
			return false;
		}
		if (i == 0) firstname = input;
		if (i == 1) lastname = input;
		if (i == 2) setphone(input);
		if (i == 3) setemail(input);
	}

		cin.ignore();
		address.input();
		return true;
	}

	void Contact::output()
	{
		cout << "Your firstname is: " << firstname << endl;
		cout << "Your lastname is: " << lastname << endl;	
		address.output(); 
		cout << "Your phone# is: " << phone << endl;
		cout << "Your email is: " << email << endl << endl;
	}

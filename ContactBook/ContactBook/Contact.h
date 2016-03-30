#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include<regex>
#include"Address.h"
using namespace std;

class Contact
{
private:
	string lastname;
	string firstname;
	Address address;
	string phone;
	string email;
	static const regex CheckPhone;
	static const regex CheckEmail;
public:
	Contact();
	Contact(string U_lastname, string U_firstname, string U_phone, string U_email);
	string getlastname();
	string getfirstname();
	string getaddress();
	string getphone();
	string getemail();
	void setlastname(string);
	void setfirstname(string);

	void setphone(string);
	void setemail(string);
	bool input();
	void output();
};
#endif
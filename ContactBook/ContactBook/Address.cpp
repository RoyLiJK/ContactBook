#include<iostream>
#include"Address.h"
using namespace std;

Address::Address()
{
}

string Address::getHome() const
{
	return home;
}

string Address::getStreet() const
{
	return street;
}

string Address::getApt() const
{
	return apt;
}

string Address::getCity() const
{
	return city;
}

string Address::getState() const
{
	return state;
}

string Address::getZip() const
{
	return zip;
}

void Address::output() const
{
	cout << "Your home is: " << home << endl;
	cout << "Your street is: " << street << endl;
	cout << "Your apt is: " << apt << endl;
	cout << "Your city is: " << city << endl;
	cout << "Your state is: " << state << endl;
	cout << "Your zip is: " << zip << endl;
}

void Address::input()
{	
	cout << "Please enter your home number: " << endl;
	getline(cin, home);
	cout << "Please enter your street: " << endl;
	getline(cin, street);
	cout << "Please enter your apt number: " << endl;
	getline(cin, apt);
	cout << "Please enter your city: " << endl;
	getline(cin, city);
	cout << "Please enter your state: " << endl;
	getline(cin, state);
	cout << "Please enter your zip code: " << endl;
	getline(cin, zip);
}


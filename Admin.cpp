#include <iostream>
#include <string>
#include "Menu.h"
#include "User.h"
#include "Admin.h"
#include "Passenger.h"
#include "MilesAccount.h"
#include "Booking.h"
#include "Flight.h"
#include "Airport.h"
#include "Airline.h"
#include "FlightHandling.h"
using namespace std;

void Admin::display()
{
	system("CLS");
	cout << "===========================================" << endl;
	cout << "=\tYou are logging in as an Admin. =\n ";
	cout << "=\t\tEnter Your Password: ";
	int password;
	cin >> password;
	if (password == AdminPass)
	{
		cout << "******** You are Logged in ********\n";
	}
	else
	{
		cout << "Incorrect Password\n Please Try again\n";
		display();
	}
}

int Admin::adminMenu()
{
	cout << "||\t\t      Select The Option:        \t\t  ||" << endl;
	cout << "||\t\t\t(1) Airline                     \t  ||" << endl;
	cout << "||\t\t\t(2) Airport                     \t  ||" << endl;
	cout << "||\t\t\t(3) Flight Handling             \t  ||" << endl;

	cout << "\n\tEnter Your Choice : ";
	int choice;
	cin >> choice;
	return choice;
}
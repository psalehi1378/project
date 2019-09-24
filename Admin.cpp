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

void Admin::displayAdmin()
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
		displayAdmin();
	}
}

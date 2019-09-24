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

void Passenger::display()
{
	system("CLS");
	cout << "===========================================" << endl;
	cout << "=\tYou are logging in as an Passenger. =\n ";
	cout << "=\t\tEnter Your Password: ";
	int password;
	cin >> password;
	if (password == PassengerPass)
	{
		cout << "******** You are Logged in ********\n";
	}
	else
	{
		cout << "Incorrect Password\n Please Try again\n";
		display();
	}
}

double Passenger::creditMile()
{

	return 0;
}

double Passenger::consumeMiles()
{

	return 0;
}

void Passenger::cancelMiles()
{

}

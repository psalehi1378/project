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
	cout << "=\tYou are logging in as a Passenger. \n ";
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

/*void Passenger::createAcc()
{
	system("CLS");
	cout << "===========================================" << endl;
	cout << "=\tYou are creating an account as Passenger. \n ";
	cout << "Enter your passport number; ";
	cin >> 

}*/

int Passenger::PassengerMenu()
{
	cout << "||\t\t      Select an Option:         \t\t  ||" << endl;
	cout << "||\t\t\t(1) Booking                     \t  ||" << endl;
	cout << "||\t\t\t(2) Miles Account               \t  ||" << endl;
	cout << "||\t\t\t(3) Flights                     \t  ||" << endl;

	cout << "\n\tEnter Your Choice : ";
	int choice;
	cin >> choice;
	return choice;
}

void Passenger::setPass(int p)
{
	PassengerPass = p;
}

int Passenger::getPass()
{
	return PassengerPass;
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
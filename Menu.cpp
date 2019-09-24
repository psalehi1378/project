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

int Menu::displayMain()
{
	system("CLS");
	cout << "====================================================" << endl;
	cout << "=                                                  =" << endl;
	cout << "=  ///////////  //            //          //       =" << endl;
	cout << "=  //           //             //       //         =" << endl;
	cout << "=  //           //               //   //           =" << endl;
	cout << "=  ///////////  //                 //              =" << endl;
	cout << "=  //           //                 //              =" << endl;
	cout << "=  //           //                 //              =" << endl;
	cout << "=  //           ///////////        //              =" << endl;
	cout << "=            A Flight Management System            =" << endl;
	cout << "====================================================" << endl;
	cout << std::endl;
	cout << "||\t\tSelect The Option:        \t\t  ||" << endl;
	cout << "||\t\t\t(1) Login As Admin        \t  ||" << endl;
	cout << "||\t\t\t(2) Use As Passenger      \t  ||" << endl;

	cout << "\n\tEnter Your Choice : ";
	int choice;
	cin >> choice;
	return choice;
}

void Menu::displayAdmin()
{
	system("CLS");
	cout << "===========================================" << endl;
	cout << "=\tYou are logging in as an Admin. =\n ";
	cout << "=\t\tEnter Your Password: ";
	int password;
	cin >> password;
	if (password == admPass)
	{
		cout << "******** You are Logged in ********\n";
	}
	else 
	{
		cout << "Incorrect Password\n Please Try again\n";
		displayAdmin();
	}
}

void Menu::displayPassenger()
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
		displayPassenger();
	}
}
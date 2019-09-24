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
	cout << endl;
	cout << "||\t\t      Select The Option:        \t\t  ||" << endl;
	cout << "||\t\t\t(1) Login as admin              \t  ||" << endl;
	cout << "||\t\t\t(2) Login as passenger          \t  ||" << endl;
	cout << "||\t\t\t(3) Sign Up                     \t  ||" << endl;

	cout << "\n\tEnter Your Choice : ";
	int choice;
	cin >> choice;
	return choice;
}

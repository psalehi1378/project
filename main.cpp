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


int main()
{
	Menu menu;
	Admin admin;
	Passenger passenger;
	Booking booking;
	Airline airline;
	Flight flight;
	MilesAccount milesaccount;

	int t = menu.displayMain();
	if (t == 1)
	{
		admin.display();
		int a = admin.adminMenu();
		if (a == 1)
		{
			airline.displayAirlines();
		}
		else if (a == 2)
		{

		}
		else if (a == 3)
		{

		}
	}



	else if (t == 2)
	{
		passenger.display();
		int b = passenger.PassengerMenu();
		if (b == 1)
		{

		}
		else if (b == 2)
		{

		}
		else if (b == 3)
		{

		}


	}




	else if (t == 3)
	{

	}
	

	return 0;
}
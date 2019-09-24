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
	Admin admin;
	Passenger passenger;
	int t = Menu::displayMain();
	if (t == 1)
	{
		admin.display();
	}
	else if (t == 2)
	{
		passenger.display();
	}
	else if (t == 3)
	{

	}
	

	return 0;
}

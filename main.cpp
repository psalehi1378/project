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
	int t = Menu::displayMain();
	if (t == 1)
	{
		Menu::displayAdmin();
	}
	else if (t == 2)
	{
		Menu::displayPassenger();
	}
	

	return 0;
}
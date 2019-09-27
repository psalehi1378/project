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

Airline::Airline()
{
	code = 1;
	setname();
}

void Airline::displayAirlines()
{
	cout << "The list of the airlines are as followed: " << endl;
	cout << name[0] << endl;
	cout << name[1] << endl;
	cout << name[2] << endl;
	cout << name[3] << endl;
}
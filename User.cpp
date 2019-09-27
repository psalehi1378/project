#include <iostream>
#include <string>
#include "User.h"
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


void User::setName(string n)
{
	name = n;
}

string User::getName()
{
	return name;
}

void User::setPassword(int p)
{
	password = p;
}

int User::getPassword()
{
	return password;
}

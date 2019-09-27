#pragma once
using namespace std;

class Airline
{
private:
	int code;
	string name[4];
	void setname()
	{
		name[0] = "Emirates";
		name[1] = "Qatar Airways";
		name[2] = "Singapore Airlines";
		name[3] = "AirAsia";
	}

public:
	Airline();
	void displayAirlines();
};


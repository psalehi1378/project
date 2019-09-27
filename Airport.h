#pragma once
using namespace std;

class Airport
{
private:
	string name[5];
	int code;
	string country[5];
	double fee;
	void Airportname()
	{
		name[0] = "KLIA";
		name[1] = "HKG";
		name[2] = "Singapore Changi Airport";
		name[3] = "IKIA";
		name[4] = "NRT";
	}
	void Countryname()
	{
		country[0] = "Malaysia";
		country[1] = "Hong Kong";
		country[2] = "Singapore";
		country[3] = "Iran";
		country[4] = "Japan";
	}

public:
	Airport();

};


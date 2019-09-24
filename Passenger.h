#pragma once
using namespace std;

class Passenger: public User
{
private:
	string name;
	const string passportNo;
	const string mileCard;

public:
	double creditMile();
	double consumeMiles();
	void cancelMiles();
};


#pragma once
using namespace std;

class Passenger: public User
{
private:
	string name;
	int PassengerPass = 67890;
	const string passportNo;
	const string mileCard;

public:
	void display();
	double creditMile();
	double consumeMiles();
	void cancelMiles();
};


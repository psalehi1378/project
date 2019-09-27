#pragma once
using namespace std;

class Passenger: public User
{
private:
	int PassengerPass = 67890;
	const string passportNo;
	const string mileCard;

public:
	void display();
	//void createAcc();
	int PassengerMenu();
	double creditMile();
	double consumeMiles();
	void cancelMiles();
	int getPass();
	void setPass(int);
};


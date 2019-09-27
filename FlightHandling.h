#pragma once
using namespace std;

class FlightHandling
{
private:
	char boardingGate;
	double Delay;
	int date;
	int time;

public:
	void startCheckIn();
	void checkInPassenger();
	void stopCheckIn();
	void closeFlight();
	void delayFlight();
	void passengerBoarding();
	void delay();
};


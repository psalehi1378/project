#pragma once
using namespace std;

class FlightHandling
{
private:
	string boardingGate[6];
	double Delay;
	int date;
	int time;
	void setGate()
	{
		boardingGate[0] = "A1";
		boardingGate[1] = "A2";
		boardingGate[2] = "B1";
		boardingGate[3] = "B2";
		boardingGate[4] = "C1";
		boardingGate[5] = "C2";
	}

public:
	FlightHandling();
	void startCheckIn();
	void checkInPassenger();
	void stopCheckIn();
	void closeFlight();
	void delayFlight();
	void passengerBoarding();
	void delay();
};


#pragma once
using namespace std;

class Booking
{
private:
	int date;
	const string Class[2] = { "Economy", "Buisiness" };

public:
	void reserve();
	void pay();
	void cancel();
	void change();
};


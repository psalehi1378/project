#pragma once
using namespace std;

class Admin: public User
{
private:
	int AdminPass = 12345;

public:
	void display();
	int adminMenu();

};


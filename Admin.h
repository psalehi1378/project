#pragma once
using namespace std;

class Admin: public User
{
private:
	string name;
	int AdminPass = 12345;

public:
	void display();

};


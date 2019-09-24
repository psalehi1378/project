#pragma once
using namespace std;

class User
{
private:
	string name;
	int password;
public:
	string getName();
	void setName(string n);
	int getPassword();
	void setPassword(int p); 
	virtual void display() = 0;
};


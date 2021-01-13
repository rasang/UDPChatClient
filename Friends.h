#pragma once
#pragma once
#include<string>
#include<iostream>
using namespace std;
class Friends
{
private:
	string name;
	int available;
public:
	string getName();
	int isAvailable();
	void setFriends(string name, int available);
	Friends();
};

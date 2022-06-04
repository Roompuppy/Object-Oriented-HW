#pragma once
#include <iostream>

using namespace std;

class CPerson
{
	int m_ID;
	string m_name, m_address;

public:
	CPerson();

	void inputData();
	virtual void outputData();

	int getID();
};

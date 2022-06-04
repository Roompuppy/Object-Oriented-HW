#include <string>
#include "person.h"


CPerson::CPerson()
{
	m_ID = 1000;
	m_name = "Null";
	m_address = "0000 Null";
}

void CPerson::inputData()
{
	cout << "Enter ID : ";
	cin >> m_ID;
	cout << "Enter name : ";
	cin >> m_name;
	cin.ignore();
	cout << "Enter address : ";
	getline(cin, m_address);
}

void CPerson::outputData()
{
	cout << "[";
	cout.fill('0');
	cout.width(3);
	cout << m_ID;
	cout << "] ";
	cout << m_name << ", ";
	cout << m_address;
}

int CPerson::getID()
{
	return m_ID;
}
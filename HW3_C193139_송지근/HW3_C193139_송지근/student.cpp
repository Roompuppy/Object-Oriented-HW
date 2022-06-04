#include "student.h"


CStudent::CStudent()
{
	CPerson::CPerson();
	m_GPA = 0.00;
}

void CStudent::inputData()
{
	CPerson::inputData();
	cout << "Enter GPA : ";
	cin >> m_GPA;
	
}

void CStudent::outputData()
{
	CPerson::outputData();
	cout << " (" << m_GPA << ")" << endl;
}
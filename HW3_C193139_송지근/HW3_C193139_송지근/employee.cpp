#include "employee.h"

CEmployee::CEmployee()
{
	CPerson::CPerson();
}

void CEmployee::inputData()
{
	CPerson::inputData();
	m_time.inputData();
}

void CEmployee::outputData()
{
	CPerson::outputData();
	m_time.recalTime();
	m_time.outData();
}
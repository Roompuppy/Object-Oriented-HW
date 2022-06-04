#pragma once
#include "person.h"
#include "mytime.h"


class CEmployee : public CPerson
{
	CMyTime m_time;

public:
	CEmployee();

	void inputData();
	void outputData();
};
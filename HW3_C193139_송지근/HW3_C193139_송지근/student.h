#pragma once
#include "person.h"


class CStudent : public CPerson
{
	float m_GPA;

public:
	CStudent();

	void inputData();
	void outputData();

};


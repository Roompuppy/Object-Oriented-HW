#pragma once
#include <iostream>

using namespace std;

class CMyTime
{
	int m_hour, m_min, m_sec;

public:
	CMyTime();

	void inputData();
	void outData();
	void recalTime();
};

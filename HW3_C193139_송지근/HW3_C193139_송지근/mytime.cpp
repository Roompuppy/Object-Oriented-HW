#include "mytime.h"

CMyTime::CMyTime()
{
	m_hour = 0;
	m_min = 0;
	m_sec = 0;
}

void CMyTime::inputData()
{
	cout << "Enter work time(sec) : ";
	cin >> m_sec;
}

void CMyTime::outData()
{
	cout << " (";
	cout.fill('0');
	cout.width(2);
	cout << m_hour;
	cout << ":";
	cout.fill('0');
	cout.width(2);
	cout << m_min;
	cout << ":";
	cout.fill('0');
	cout.width(2);
	cout << m_sec;
	cout << ")" << endl;
}

void CMyTime::recalTime()
{
	if (m_sec / 60 != 0)
	{
		m_min = m_sec / 60;
		m_sec %= 60;

		if (m_min / 60 != 0)
		{
			m_hour = m_min / 60;
			m_min %= 60;
		}
	}
}
#include <iostream>
#include <random>
#include <Windows.h>
#include "circle.h"

using namespace Cir;
using namespace std;

CCircle::CCircle()
{
	m_x = 300;
	m_y = 150;
	m_radius = 10;
}

CCircle::CCircle(int x, int y, int r)
{
	m_x = x;
	m_y = y;
	m_radius = r;
}

void CCircle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);
}

void CCircle::generate()
{
	random_device Ran;
	mt19937 gen(Ran());

	m_x = 300 + gen() % 501;
	m_y = 150 + gen() % 251;
	m_radius = 10 + gen() % 91;

	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);
}

void CCircle::calcArea()
{
	float Area;

	Area = 3.14 * m_radius * m_radius;

	cout << "Circle area = " << Area << endl;
}
#ifndef CIRCLE_H
#define CIRCLE_H

namespace Cir
{
	class CCircle
	{
	public:

		int m_x, m_y, m_radius;

		CCircle();
		CCircle(int x, int y, int r);

		void draw();

		void generate();

		void calcArea();
	};
}

#endif // !CIRCLE_H



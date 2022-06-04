#include <iostream>
#include <Windows.h>
#include "circle.h"

using namespace std;
using namespace Cir;

int main()
{
    // Program 01
    cout << "-----Program 01-----" << endl;

    int x, y, r;

    cout << "Enter x pos : ";
    cin >> x;
    cout << "Enter y pos : ";
    cin >> y;
    cout << "Enter radius : ";
    cin >> r;

    CCircle c1(x, y, r);

    c1.draw();
    Sleep(750);

    // Problem 02
    cout << "-----Program 02-----" << endl;

    CCircle c2;
    for (int i = 0; i < 10; i++)
    {
        Sleep(750);
        c2.generate();
    }

    // Problem 03
    cout << "-----Program 03-----" << endl;

    int cirNum;

    cout << "Enter num. of circles (1~100): ";
    cin >> cirNum;
    if (cirNum >= 1 && cirNum <= 100)
    {
        for (int i = 0; i < cirNum; i++)
        {
            Sleep(750);
            CCircle* pCir = new CCircle;

            pCir->generate();
            pCir->calcArea();

            delete pCir;
        }
    }
    else
    {
        cout << "Wrong num. of circles" << endl;
    }

    return 0;
}

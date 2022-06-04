#include "student.h"
#include "employee.h"

using namespace std;

int main()
{
		// Program 01

	/*CStudent student;

	student.inputData();
	student.outputData();

	cout << endl;*/

		// Program 02-03

	/*CEmployee employee;

	employee.inputData();
	employee.outputData();

	cout << endl;*/

		// Program 04
	bool running = true;
	char input;
	int count = 0, min;

	CPerson* List[100];
	CPerson* tempt = new CPerson;

	while (running)
	{
		cout << "Enter a command (q, s, e, p) : ";
		cin >> input;

		if (input == 113)
		{
			running = false;
		}
		else if (input == 115)
		{
			CStudent* p = new CStudent;

			p->inputData();
			List[count] = p;
			count++;
		}
		else if (input == 101)
		{
			CEmployee* p = new CEmployee;

			p->inputData();
			List[count] = p;
			count++;
		}
		else if (input == 112)
		{
			for (int i = 0; i < count; i++)
			{
				min = List[i]->getID();

				for (int j = i; j <  count; j++)
				{
					if (min > List[j]->getID())
					{
						min = List[j]->getID();
						tempt = List[i];
						List[i] = List[j];
						List[j] = tempt;
					}
				}

				List[i]->outputData();
			}
		}
		cout << endl;
	}

	return 0;
}
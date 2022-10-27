#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x; 
	double y; 
	double a; 
	double b; 
	double R; 

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;

	srand((unsigned) time(NULL));
	double s = max(a, b);
	double k = max(s, R);

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((x * x + y * y >= R * R && y <= b && x <= a && x > 0 && y >= 0)
			||
			(y <= 0 && x <= 0 && x >= -a && y >= -b && x * x + y * y <= R * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = k * rand() / RAND_MAX - k;
		y = k * rand() / RAND_MAX - k;
		if ((x * x + y * y >= R * R && y <= b && x <= a && x > 0 && y >= 0)
			||
			(y <= 0 && x <= 0 && x >= -a && y >= -b && x * x + y * y <= R * R))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	
	return 0;
}
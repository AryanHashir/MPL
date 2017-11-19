#include <iostream>
using namespace std;

int main()
{
	int Numbers;
	double Miles, Litres, MPL, T_Miles = 0, T_Litres = 0, T_MPL;

	cout << "Enter the number of trips for which you want to calculate MPL(Miles Per Litre)." << endl << "Trips: ";
	cin >> Numbers;
	cout << "\nGive the detail of each trip:" << endl;

	for (int n = 1; n <= Numbers; n++)
	{
		cout << endl << "Trip " << n << ":\nEnter the miles driven: ";
		cin >> Miles;

		cout << "Enter the Litres used: ";
		cin >> Litres;

		MPL = Miles / Litres;
		cout << "MPL: " << MPL << endl;

		T_Miles = T_Miles + Miles, T_Litres = T_Litres + Litres;
	}

	T_MPL = T_Miles / T_Litres;
	cout << endl << "Miles driven per litre are " << T_MPL << "." << endl;

	cin.get();
	system("pause");
	return 0;
}
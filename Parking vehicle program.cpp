// Parking vehicle program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main() {

	string MotorCar, Truck, vehicle;
	int Hours{};
	int Maxhours = 24;


	cout << " select the type of vehicle " << endl;
	
	cout << " 1 : MotorCar " << endl;
	cout << " 2 : Truck " << endl;

	if (vehicle == MotorCar) {

		if (Hours == 1) {
			cout << " 2 ";
		}
		else if (Hours == 2) {
			cout << " 3 ";
		}
		else if (Hours == 3 - 5) {
			cout << " 10 ";
		}
	}
	else if (vehicle == Truck) {

		if (Hours == 1) {
			cout << " 3 ";
		}
		else if (Hours == 2) {
			cout << " 4 ";
		}
		else if (Hours == 3 - 5) {
			cout << " 11 ";
		}
			cout << " No vehicle will be allowed to parked for longer than 24 hours ";
	}
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
using namespace std;

int main()
{
	double objectmass;
	int objectvelocity, kineticenergy;

	cout << "Enter the object's mass (kg): ";
	cin >> objectmass;
	cout << "Enter the object's velocity (m/s): ";
	cin >> objectvelocity;
	kineticenergy = 0.5 * objectmass * (objectvelocity * objectvelocity);

	cout << "The kinetic energy (Joules): " << kineticenergy << endl;
	return 0;
}
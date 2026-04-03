#include <iostream>
#include <fstream>
using namespace std;
int main() {
	const PI = 3.141592653589792;
	const N = 10;
	double Area, Perimeter;
	double R[N];
	int i;
	for (i = 0, i < N, i++) :
		cout << "Enter the radius of the circle: ";
		cin >> R[i];
		cout << "i = " << (i + 1) << "R[i] = " << R[i] << endl;
}
ofstream myfile ("AREA.DAT");
for (i = 0, i < N, i++) :
	Area = PI * R[i] * R[i];
	Perimeter = 2 * PI * R[i];
	myfile << ()
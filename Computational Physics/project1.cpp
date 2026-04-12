#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
void area_and_perimeter(const double& R, double& A, double& L);
const double PI = 3.141592653;
int main() {
	const int N = 10;
	double R[N];
	int i;
	double Area, Perimeter;
	for (i = 0; i < N; i++) {
		cout << "Enter your radius: ";
		cin >> R[i];
		cout << "i = " << i + 1 << " R[i] = " << R[i] << "\n";
	}
	ofstream myfile ("DAT_PERIMETER_AND_AREA");
	for (i = 0; i < N; i++) {
		area_and_perimeter(R[i], Area, Perimeter);
		myfile << "i = " << i + 1 << ") R[i] = " << R[i] << "\n"
			<< "Area = " << Area << "\n"
			<< "Perimeter = " << Perimeter << "\n";
	}
	return 0;
}
void area_and_perimeter(const double& R, double& A, double& L) {
	A = PI * R * R;
	L = 2 * PI * R;
}
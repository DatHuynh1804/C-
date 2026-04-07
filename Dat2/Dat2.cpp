#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	const double PI = 3.1415926535897932;
	const int N = 10;
	double R[N];
	double Area, Perimeter;
	for (int i = 0; i < N; i++) {
		cout << "Enter your radius: ";
		cin >> R[i];
		cout << "i = " << i + 1 << " R[i] = " << R[i] << '\n';
	}
	ofstream myFile("Dat.AREA");
	myFile << fixed << setprecision(10);
	for (int i = 0; i < N; i++) {
		Area = PI * R[i] * R[i];
		Perimeter = 2 * PI * R[i];
		myFile << i + 1 << ") R = " << R[i] << "\n"
		<< "Area = " << Area << "\n"
		<< "Perimeter = " << Perimeter << "\n";
	}
	myFile.close();
	return 0;
}
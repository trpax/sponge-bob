#include<iostream>

using namespace std;

double kant(double uan) {
	double cal = 8.7;
	return uan * cal;
}
int main() {
	double uan;
	cout << "enter amount pln ";
	cin >> uan;
	double uann = kant(uan);
	cout << uan << " pln = " << uann << " in uan"<< endl;

}
	
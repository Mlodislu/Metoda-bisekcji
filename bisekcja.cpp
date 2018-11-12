#include <iostream>
#include<cstdlib>

using namespace std;

double f(double x);
double bisekcja(double a, double b, double eps);

int main() {
	double a, b, eps;
	cout << "Podaj wartosc a: ";
	cin >> a;
	cout << "Podaj wartosc b: ";
	cin >> b;
	cout << "Podaj z jaka dokladnoscia ma byc wynik: ";
	cin >> eps;

	if (f(a)*f(b) < 0) {
		cout << "Miejsce zerowe: " << bisekcja(a, b, eps) << endl;
	}
	else {
		cout << "W przedziale nie ma miejsca zerowego!"<<endl;
	}
	return 0;
}
double f(double x) {
	return x - 5;
}
double bisekcja(double a, double b, double eps) {
	double s;
	while ((b - a) > eps) {
		s = (a + b) / 2;

		if (f(s) == 0) {
			return s;
		}
		else if (f(a)*f(s) < 0) {
			b = s;
		}
		else a = s;
	}
	return s;
}
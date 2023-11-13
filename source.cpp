#include <iostream>
using namespace std;

int ktrSoChinhPhuong(int n) {
	if ((int)sqrt(n) == sqrt(n)) {
		return 1;
	}
	return 0;
}

int ktrSoHoanThien(int n) {
	int s = 0;
	for (int i =1; i<n; i++)
		if (n %i == 0) {
			s += i;
		}
	return s == n;
}

int main() {
	int a;
	cout << "Nhap so nguyen a: ";
	cin >> a;
    cout << ktrSoChinhPhuong(a) << endl;
	cout << ktrSoHoanThien(a);
	return 0;
}
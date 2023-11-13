#include <iostream>
using namespace std;

int ktrSoChinhPhuong(int n) {
	if ((int)sqrt(n) == sqrt(n)) {
		return 1;
	}
	return 0;
}

int main() {
    int a;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << ktrSoChinhPhuong(a) << endl;
    return 0;
}
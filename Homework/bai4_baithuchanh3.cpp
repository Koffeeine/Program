#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so: ";
    cin >> n;
    if (is_prime(n)) {
        cout << n << " La so nguyen to" << endl;
    } else {
        cout << n << " Khong la so nguyen to" << endl;
    }
    return 0;
}

// Tính giai thừa
#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    cout << "Giai thua cua " << n << " = ";
    // Tính giai thừa của n
    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            cout << " * "; // Hiển thị dấu nhân giữa các số
        }
        cout << i; // Hiển thị số hiện tại
        result *= i; // Nhân dồn kết quả với số hiện tại
    }
    return result;
}

int main() {
    int num;
    cout << "Hay nhap so can tinh: ";
    cin >> num;

    // Hiển thị kết quả
    cout << " = " << factorial(num) << endl;

    return 0;
}


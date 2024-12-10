// In tam giac cân bằng sao
#include <iostream>
using namespace std;

void printIsoscelesTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        // In khoảng trắng
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        // In dấu sao
        for (int k = 1; k <= (2*i - 1); ++k) {
            cout << "*";
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

int main() {
    int n;
    cout << "Nhap chieu cao cua hinh tam giac can: ";
    cin >> n;

    printIsoscelesTriangle(n); // Gọi hàm để in hình tam giác cân

    return 0;
}

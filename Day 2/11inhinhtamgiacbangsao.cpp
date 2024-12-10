// In hình tam giác bằng sao
#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) { // Vòng lặp hàng
        for (int j = 1; j <= i; ++j) { // Vòng lặp cột
            cout << "* "; // In dấu sao
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

int main() {
    int n;
    cout << "Nhap chieu cao cua hinh tam giac: ";
    cin >> n;

    printTriangle(n); // Gọi hàm để in hình tam giác

    return 0;
}

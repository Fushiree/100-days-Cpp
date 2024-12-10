// In hình chữ nhật bằng sao
#include <iostream>
using namespace std;

// Hàm in hình chữ nhật bằng dấu sao
void Printrectangle(int n, int m) {
    for (int i = 0; i < n; ++i) { // Vòng lặp hàng
        for (int j = 0; j < m; ++j) { // Vòng lặp cột
            cout << "*  "; // In dấu sao và khoảng trắng
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

int main() {
    int Row, Col;
    cout << "Hay nhap so hang va cot cua hinh chu nhat: "; // Yêu cầu người dùng nhập số hàng và cột
    cin >> Row >> Col;

    Printrectangle(Row, Col); // Gọi hàm để in hình chữ nhật

    return 0;
}

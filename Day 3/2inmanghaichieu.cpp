// In ra mảng hai chiều
#include <iostream>
using namespace std;

void inramanghaichieu(int hang, int cot) {
    int arr[hang][cot]; // Khai báo mảng hai chiều với kích thước hang x cot
    
    // Nhập các phần tử của mảng hai chiều
    for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            cin >> arr[i][j]; // Nhập phần tử arr[i][j] từ người dùng
        }
    }

    // In ra các phần tử của mảng hai chiều
    cout << "Hay nhap cac phan tu cua mang hai chieu: " << endl;
    for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            cout << "[" << arr[i][j] << "]"; // In phần tử arr[i][j] với định dạng [giá trị]
        }
        cout << endl; // Xuống dòng sau khi in hết các phần tử của một hàng
    }
}

int main() {
    int hang, cot;
    cout << "Hay nhap so hang va so cot cua mang: "; // Yêu cầu người dùng nhập số hàng và số cột
    cin >> hang >> cot; // Nhập số hàng và số cột từ người dùng

    inramanghaichieu(hang, cot); // Gọi hàm để in mảng hai chiều

    return 0;
}

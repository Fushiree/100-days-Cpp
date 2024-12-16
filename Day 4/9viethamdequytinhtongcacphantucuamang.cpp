// Viết hàm đệ quy tính tổng các phần tử trong mảng
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Hàm khởi tạo và in mảng ngẫu nhiên
void inmangngaunhien(int arr[], int Num) {
    for (int i = 0; i < Num; ++i) {
        arr[i] = rand() % 100;  // Khởi tạo các phần tử của mảng với giá trị ngẫu nhiên
    }

    cout << "Mang: " << endl;
    for (int i = 0; i < Num; ++i) {
        cout << "[" << arr[i] << "]";  // In các phần tử của mảng
    }
    cout << endl;
}

// Hàm đệ quy tính tổng các phần tử của mảng
int tongmang(int arr[], int Num) {
    if (Num == 0) {  // Điều kiện dừng: Khi không còn phần tử nào trong mảng
        return 0;
    } else {
        return arr[Num - 1] + tongmang(arr, Num - 1);  // Gọi đệ quy: Tính tổng phần tử cuối cùng và tổng các phần tử còn lại
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int Num;
    cout << "Hay nhap so phan tu cua mang: ";
    cin >> Num;
    int arr[100];
    
    inmangngaunhien(arr, Num);  // Khởi tạo và in mảng ngẫu nhiên

    // Gọi hàm đệ quy để tính tổng các phần tử của mảng
    cout << "Tong cac phan tu trong mang la: " << tongmang(arr, Num) << endl;

    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void inmangngaunhien(int arr[][100], int sohang, int socot) {
    // Khởi tạo mảng với các phần tử ngẫu nhiên
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            arr[i][j] = rand() % 100; // Tạo phần tử ngẫu nhiên trong khoảng từ 0 đến 99
        }
    }

    // In các phần tử của mảng hai chiều
    cout << "Cac phan tu cua mang la: " << endl;
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            cout << "[" << arr[i][j] << "] ";
        }
        cout << endl; // Xuống dòng sau khi in hết các phần tử của một hàng
    }
}

int timPhanTuLonNhat(int arr[][100], int sohang, int socot) {
    int maxVal = arr[0][0]; // Giả định phần tử đầu tiên là lớn nhất
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j]; // Cập nhật maxVal nếu tìm thấy phần tử lớn hơn
            }
        }
    }
    return maxVal;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo seed cho hàm rand()

    int sohang, socot;
    cout << "Hay nhap so hang va so cot cua mang: ";
    cin >> sohang >> socot;

    int arr[100][100]; // Khai báo mảng với kích thước tối đa

    inmangngaunhien(arr, sohang, socot); // Khởi tạo và in mảng ngẫu nhiên

    int maxVal = timPhanTuLonNhat(arr, sohang, socot); // Tìm phần tử lớn nhất trong mảng

    cout << "Phan tu lon nhat trong mang la: " << maxVal << endl;

    return 0;
}

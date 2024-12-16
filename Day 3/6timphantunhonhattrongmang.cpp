// Tìm phần tử nhỏ nhất trong màng
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Hàm khởi tạo mảng với các phần tử ngẫu nhiên và in ra mảng
void inmangngaunhien(int arr[100][100], int hang, int cot) {
   // Khởi tạo các phần tử ngẫu nhiên cho mảng
   for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            arr[i][j] = rand() % 100; // Tạo phần tử ngẫu nhiên trong khoảng từ 0 đến 99
        }
    }

    // In các phần tử của mảng hai chiều
    for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            cout << "[" << arr[i][j] << "]"; // In phần tử arr[i][j] với định dạng [giá trị]
        }
        cout << endl; // Xuống dòng sau khi in hết các phần tử của một hàng
    } 
}

// Hàm tìm phần tử nhỏ nhất trong mảng
int timphantunhonhat(int arr[100][100], int hang, int cot) {
    int Min_num = arr[0][0]; // Giả định phần tử đầu tiên là nhỏ nhất
    for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            if(Min_num > arr[i][j]) {
                Min_num = arr[i][j]; // Cập nhật Min_num nếu tìm thấy phần tử nhỏ hơn
            }
        }
    }
    return Min_num; // Trả về phần tử nhỏ nhất
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo seed cho hàm rand()

    int hang, cot;
    cout << "Hay nhap so hang va so cot cua mang: ";
    cin >> hang >> cot;
    int arr[100][100]; // Khai báo mảng với kích thước tối đa

    // Khởi tạo và in mảng ngẫu nhiên
    inmangngaunhien(arr, hang, cot);

    // Tìm và in phần tử nhỏ nhất trong mảng
    cout << "Phan tu nho nhat trong mang la: " << timphantunhonhat(arr, hang, cot) << endl;

    return 0;
}

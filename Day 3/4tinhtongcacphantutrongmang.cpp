#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Hàm khởi tạo mảng với các phần tử ngẫu nhiên và in ra mảng
void inramangngaunhien(int arr[100][100], int hang, int cot) {
    // Khởi tạo các phần tử ngẫu nhiên cho mảng
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            arr[i][j] = rand() % 100; // Tạo phần tử ngẫu nhiên trong khoảng từ 0 đến 99
        }
    }

    // In các phần tử của mảng hai chiều
    cout << "Cac phan tu cua mang la: " << endl;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            cout << "[" << arr[i][j] << "]"; // In phần tử arr[i][j] với định dạng [giá trị]
        }
        cout << endl; // Xuống dòng sau khi in hết các phần tử của một hàng
    }
}

// Hàm tính tổng các phần tử trong mảng
int tinhtongcuamang(int arr[100][100], int hang, int cot) {
    int sum = 0; // Khởi tạo biến tổng sum bằng 0
    // Duyệt qua các phần tử của mảng và cộng dồn giá trị vào sum
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            sum += arr[i][j];
        }
    }
    return sum; // Trả về tổng các phần tử trong mảng
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo seed cho hàm rand() để đảm bảo tính ngẫu nhiên

    int hang, cot;
    cout << "Hay nhap so hang va so cot cua mang: ";
    cin >> hang >> cot;
    int arr[100][100]; // Khai báo mảng với kích thước tối đa

    // Khởi tạo và in mảng ngẫu nhiên
    inramangngaunhien(arr, hang, cot);

    // Tính tổng các phần tử trong mảng và in kết quả
    cout << "Tong cua mang la: " << tinhtongcuamang(arr, hang, cot) << endl;

    return 0; // Kết thúc chương trình
}

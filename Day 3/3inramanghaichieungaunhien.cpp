// In ra mảng hai chiều ngẫu nhiên
#include <iostream>
#include <ctime>    // Thư viện cho hàm time()
#include <cstdlib>  // Thư viện cho hàm rand() và srand()
using namespace std;

void inmangngaunhien(int sohang, int socot) {
    int arr[sohang][socot]; // Khai báo mảng hai chiều với kích thước sohang x socot

    // Khởi tạo mảng với các phần tử ngẫu nhiên
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            arr[i][j] = rand() % 100; // Tạo phần tử ngẫu nhiên trong khoảng từ 0 đến 99
        }
    }

    // In các phần tử của mảng hai chiều
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            cout << "[" << arr[i][j] << "]"; // In phần tử arr[i][j] với định dạng [giá trị]
        }
        cout << endl; // Xuống dòng sau khi in hết các phần tử của một hàng
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo seed cho hàm rand() để đảm bảo tính ngẫu nhiên

    int sohang, socot;
    cout << "Hay nhap so hang va so cot cua mang: "; // Yêu cầu người dùng nhập số hàng và số cột
    cin >> sohang >> socot; // Nhập số hàng và số cột từ người dùng

    inmangngaunhien(sohang, socot); // Gọi hàm để in mảng hai chiều ngẫu nhiên

    return 0; // Kết thúc chương trình
}

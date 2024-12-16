// Viết hàm đệ quy tìm phần tử nhỏ nhất trong mảng hai chiều
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Hàm khởi tạo và in mảng ngẫu nhiên hai chiều
void inmangngaunhien(int arr[][100], int hang, int cot) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            arr[i][j] = rand() % 100;  // Khởi tạo các phần tử với giá trị ngẫu nhiên
        }
    }

    cout << "Mang: " << endl;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            cout << "[" << arr[i][j] << "]";  // In các phần tử của mảng
        }
        cout << endl;
    }
    cout << endl;
}

// Hàm đệ quy tìm phần tử nhỏ nhất trong mảng hai chiều
int timmin(int arr[][100], int hang, int cot) {
    // Điều kiện dừng: nếu chỉ còn một hàng và một cột
    if (hang == 1 && cot == 1) {
        return arr[0][0];
    }
    
    // Trường hợp hết cột, chuyển sang hàng trước
    if (cot == 0) {
        return timmin(arr, hang - 1, 100);  // Giả sử kích thước ban đầu của cột là 100
    }
    
    // Gọi đệ quy để tìm phần tử nhỏ nhất trong mảng con còn lại
    int minConLai = timmin(arr, hang, cot - 1);
    
    // So sánh phần tử hiện tại với phần tử nhỏ nhất trong mảng con còn lại
    if (arr[hang - 1][cot - 1] < minConLai) {
        return arr[hang - 1][cot - 1];
    } else {
        return minConLai;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int hang, cot;
    cout << "Hay nhap so hang va so cot cua mang hai chieu: ";
    cin >> hang >> cot;
    int arr[100][100];

    inmangngaunhien(arr, hang, cot);  // Khởi tạo và in mảng ngẫu nhiên

    // Gọi hàm đệ quy để tìm phần tử nhỏ nhất trong mảng hai chiều
    cout << "Phan tu nho nhat trong mang la: " << timmin(arr, hang, cot) << endl;

    return 0;
}

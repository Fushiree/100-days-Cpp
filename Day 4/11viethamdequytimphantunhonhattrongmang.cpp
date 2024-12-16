// Viết hàm đệ quy tìm phần tử nhỏ nhất trong mảng
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

// Hàm đệ quy tìm phần tử nhỏ nhất trong mảng
int timMin(int arr[], int Num) {
    if (Num == 1) {  // Điều kiện dừng: Nếu mảng chỉ có 1 phần tử, trả về phần tử đó
        return arr[0];
    }
    // Gọi đệ quy để tìm phần tử nhỏ nhất trong mảng có kích thước Num-1
    int TimMinTrongMangConLai = timMin(arr, Num - 1);
    // So sánh phần tử cuối cùng với phần tử nhỏ nhất trong mảng con còn lại
    if (arr[Num - 1] < TimMinTrongMangConLai) {
        return arr[Num - 1];
    } else {
        return TimMinTrongMangConLai;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int Num;
    cout << "Hay nhap so luong phan tu trong mang: ";
    cin >> Num;
    int arr[100];

    inmangngaunhien(arr, Num);  // Khởi tạo và in mảng ngẫu nhiên
    // Gọi hàm đệ quy để tìm phần tử nhỏ nhất trong mảng
    cout << "Phan tu nho nhat trong mang la: " << timMin(arr, Num) << endl;

    return 0;
}

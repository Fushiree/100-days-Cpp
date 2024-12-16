// Viết hàm đệ quy tìm phần tử lớn nhất trong mảng
#include <iostream>
#include <ctime>
#include <cstdlib>
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

// Hàm đệ quy tìm phần tử lớn nhất trong mảng
int timmax(int arr[], int Num) {
    if (Num == 1) {  // Điều kiện dừng: Nếu mảng chỉ có 1 phần tử, trả về phần tử đó
        return arr[0];
    }

    // Gọi đệ quy để tìm phần tử lớn nhất trong mảng có kích thước Num-1
    int TimMaxConLaiTrongMang = timmax(arr, Num - 1);

    // So sánh phần tử cuối cùng với phần tử lớn nhất trong mảng con còn lại
    if (TimMaxConLaiTrongMang < arr[Num - 1]) {
        return arr[Num - 1];
    } else {
        return TimMaxConLaiTrongMang;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int Num;
    cout << "Hay nhap so luong phan tu cua mang: ";
    cin >> Num;
    int arr[100];

    inmangngaunhien(arr, Num);  // Khởi tạo và in mảng ngẫu nhiên

    // Gọi hàm đệ quy để tìm phần tử lớn nhất trong mảng
    cout << "Phan tu lon nhat trong mang la: " << timmax(arr, Num) << endl;

    return 0;
}

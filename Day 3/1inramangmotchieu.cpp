// In ra mảng một chiều
#include <iostream>
using namespace std;

// Hàm khai báo và in mảng một chiều
void inmangmotchieu(int soluong){
    int arr[soluong]; // Khai báo mảng với kích thước được nhập từ người dùng
    cout << "Hay nhap cac phan tu cua mang: "; // Yêu cầu người dùng nhập các phần tử của mảng
    for (int i = 0; i < soluong; ++i) {
        cin >> arr[i]; // Nhập từng phần tử của mảng
    }

    cout << "Cac phan tu cua mang la: "; // In ra các phần tử của mảng
    for (int i = 0; i < soluong; ++i) {
        cout << "[" << arr[i] << "]"; // In từng phần tử dưới dạng [giá trị]
    }
    cout << endl; // Xuống dòng sau khi in xong các phần tử

}

int main() {
    int soluong; // Khai báo biến để lưu số lượng phần tử của mảng
    cout << "Hay nhap so luong phan tu cua mang: "; // Yêu cầu người dùng nhập số lượng phần tử
    cin >> soluong; // Nhập số lượng phần tử từ người dùng

    inmangmotchieu(soluong);
    return 0;
}

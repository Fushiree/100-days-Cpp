// Đếm số lần xuất hiện của một phần tử trong mảng
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
    cout << "Cac phan tu cua mang la: " << endl;
    for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            cout << "[" << arr[i][j] << "]"; // In phần tử arr[i][j] với định dạng [giá trị]
        }
        cout << endl; // Xuống dòng sau khi in hết các phần tử của một hàng
    }
}

// Hàm đếm số lần xuất hiện của một phần tử trong mảng
int demsolanxuathiencuaphantu(int arr[100][100], int hang, int cot, int Num) {
    int result = 0; // Khởi tạo biến đếm số lần xuất hiện

    for(int i = 0; i < hang; ++i) {
        for(int j = 0; j < cot; ++j) {
            if(Num == arr[i][j]) {
                result += 1; // Tăng biến đếm nếu tìm thấy phần tử
            }
        }
    }
    return result; // Trả về số lần xuất hiện của phần tử
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo seed cho hàm rand()

    int hang, cot;
    cout << "Hay nhap so hang va so cot cua mang: ";
    cin >> hang >> cot;
    int arr[100][100]; // Khai báo mảng với kích thước tối đa

    // Khởi tạo và in mảng ngẫu nhiên
    inmangngaunhien(arr, hang, cot);

    int Num;
    cout << "Hay nhap phan tu muon kiem tra: ";
    cin >> Num;
    int result = demsolanxuathiencuaphantu(arr, hang, cot, Num);

    // In kết quả
    if(result > 0) {
        cout << "Phan tu " << Num << " xuat hien " << result << " lan" << endl;
    } else {
        cout << "Phan tu " << Num << " khong ton tai trong mang" << endl;
    }

    return 0;
}

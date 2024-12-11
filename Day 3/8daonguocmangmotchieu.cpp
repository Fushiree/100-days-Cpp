// Đảo ngược mảng một chiều
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Hàm khởi tạo và in mảng một chiều với các giá trị ngẫu nhiên
void inmangmotchieu(int arr[100], int Num) {
    // Khởi tạo các phần tử ngẫu nhiên trong mảng
    for(int i = 0; i < Num; i++) {
        arr[i] = rand() % 100;
    }

    // In mảng ban đầu
    cout << "Mang ban dau la: " << endl;
    for(int i = 0; i < Num; i++) {
        cout << "[" << arr[i] << "] ";  // In từng phần tử của mảng với định dạng [giá trị]
    }
    cout << endl;
}

// Hàm đảo ngược mảng một chiều
void daonguocmangmotchieu(int arr[100], int Num) {
    int start = 0;
    int end = Num - 1;

    // Sử dụng vòng lặp để hoán đổi các phần tử từ hai đầu mảng tiến về giữa
    while(start < end) {
        int temp = arr[start];   // Lưu trữ tạm thời giá trị của phần tử tại chỉ số start
        arr[start] = arr[end];   // Gán giá trị của phần tử tại chỉ số end cho phần tử tại chỉ số start
        arr[end] = temp;         // Gán giá trị lưu trong temp cho phần tử tại chỉ số end
        start++;
        end--;
    }
}

// Hàm in mảng sau khi đã được đảo ngược
void inmangdaonguoc(int arr[100], int Num) {
    cout << "Mang sau khi dao nguoc: " << endl;
    for(int i = 0; i < Num; i++) {
        cout << "[" << arr[i] << "] ";  // In từng phần tử của mảng sau khi đã đảo ngược với định dạng [giá trị]
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Khởi tạo seed cho hàm rand()

    int Num;
    cout << "Hay nhap so phan tu cua mang mot chieu: ";
    cin >> Num;
    int arr[100];  // Khai báo mảng với kích thước tối đa

    inmangmotchieu(arr, Num);  // Gọi hàm khởi tạo và in mảng ban đầu
    daonguocmangmotchieu(arr, Num);  // Gọi hàm đảo ngược mảng
    inmangdaonguoc(arr, Num);  // Gọi hàm in mảng sau khi đảo ngược
    
    return 0;
}

// Đảo ngược từng cột trong mảng hai chiều
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Hàm khởi tạo mảng với các phần tử ngẫu nhiên và in ra mảng ban đầu
void inmangngaunhien(int arr[100][100], int sohang, int socot){
    for(int i = 0; i < sohang; ++i){
        for(int j = 0; j < socot; ++j){  // Đảm bảo sử dụng đúng biến socot cho số cột
            arr[i][j] = rand() % 100;  // Tạo phần tử ngẫu nhiên trong khoảng từ 0 đến 99
        }
    }
    cout << "Mang ban dau" << endl;
    for(int i = 0; i < sohang; ++i){
        for(int j = 0; j < socot; ++j){  // Đảm bảo sử dụng đúng biến socot cho số cột
            cout << "[" << arr[i][j] << "]";
        }
        cout << endl;  // Xuống dòng sau khi in hết các phần tử của một hàng
    }
    cout << endl;
}

// Hàm đảo ngược từng cột của mảng hai chiều
void daonguoccotmang(int arr[100][100], int sohang, int socot){
    for(int j = 0; j < socot; ++j){
        int start = 0;
        int end = sohang - 1;
        while(start < end){
            int temp = arr[start][j];
            arr[start][j] = arr[end][j];
            arr[end][j] = temp;
            start++;
            end--;
        }
    }
}

// Hàm in mảng sau khi đã đảo ngược từng cột
void inmangdaonguoc(int arr[100][100], int sohang, int socot){
    cout << "Mang sau khi dao nguoc" << endl;
    for(int i = 0; i < sohang; ++i){
        for(int j = 0; j < socot; ++j){
            cout << "[" << arr[i][j] << "]";
        }
        cout << endl;  // Xuống dòng sau khi in hết các phần tử của một hàng
    }
}

int main(){
    srand(static_cast<unsigned int>(time(0)));  // Khởi tạo seed cho hàm rand()

    int sohang, socot;
    cout << "Hay nhap so hang va so cot cua mang: ";
    cin >> sohang >> socot;
    int arr[100][100];  // Khai báo mảng hai chiều với kích thước tối đa

    inmangngaunhien(arr, sohang, socot);  // Gọi hàm khởi tạo và in mảng ban đầu
    daonguoccotmang(arr, sohang, socot);  // Gọi hàm đảo ngược từng cột của mảng
    inmangdaonguoc(arr, sohang, socot);  // Gọi hàm in mảng sau khi đảo ngược

    return 0;
}

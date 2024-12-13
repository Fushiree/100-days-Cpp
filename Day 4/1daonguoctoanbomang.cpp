// Đảo ngược toàn bộ mảng
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Hàm tạo và in mảng hai chiều với các giá trị ngẫu nhiên từ 0 đến 99
void inmanghaichieu(int arr[100][100], int sohang, int socot) {
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            arr[i][j] = rand() % 100;  // Tạo giá trị ngẫu nhiên từ 0 đến 99 cho mỗi phần tử của mảng hai chiều
        }
    }

    // In mảng ban đầu
    cout << "Mang ban dau: " << endl;
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            cout << "[" << arr[i][j] << "] ";
        }
        cout << endl;
    }
}

// Hàm đảo ngược các phần tử của từng hàng trong mảng hai chiều
void daonguochangmang(int arr[100][100], int sohang, int socot) {
    for (int i = 0; i < sohang; ++i) {
        int start = 0;  // Khởi tạo biến start cho mỗi hàng
        int end = socot - 1;  // Khởi tạo biến end cho mỗi hàng
        while (start < end) {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    }
}

// Hàm đảo ngược các phần tử của từng cột trong mảng hai chiều
void daonguoccotmang(int arr[100][100], int sohang, int socot) {
    for (int j = 0; j < socot; ++j) {
        int start = 0;  // Khởi tạo biến start cho mỗi cột
        int end = sohang - 1;  // Khởi tạo biến end cho mỗi cột
        while (start < end) {
            int temp = arr[start][j];
            arr[start][j] = arr[end][j];
            arr[end][j] = temp;
            start++;
            end--;
        }
    }
}

// Hàm in mảng sau khi đã đảo ngược
void inmangsaukhidao(int arr[100][100], int sohang, int socot) {
    cout << "Mang sau khi dao la: " << endl;
    for (int i = 0; i < sohang; ++i) {
        for (int j = 0; j < socot; ++j) {
            cout << "[" << arr[i][j] << "] ";
        }
        cout << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Khởi tạo seed cho hàm rand() để đảm bảo các giá trị ngẫu nhiên khác nhau mỗi lần chạy

    int sohang, socot;
    cout << "Hay nhap so hang va so cot cua mang: ";  // Yêu cầu người dùng nhập số hàng và số cột của mảng
    cin >> sohang >> socot;  // Nhận giá trị từ người dùng và lưu vào biến sohang và socot
    int arr[100][100];  // Khai báo mảng hai chiều với kích thước tối đa là 100x100 phần tử

    inmanghaichieu(arr, sohang, socot);  // Gọi hàm để tạo và in mảng ban đầu

    daonguoccotmang(arr, sohang, socot);  // Gọi hàm để đảo ngược các phần tử của từng cột
    daonguochangmang(arr, sohang, socot);  // Gọi hàm để đảo ngược các phần tử của từng hàng

    inmangsaukhidao(arr, sohang, socot);  // Gọi hàm để in mảng sau khi đã đảo ngược

    return 0;  // Kết thúc chương trình
}

#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool songuyento(int Num) {
    if (Num <= 1) {  // Nếu Num nhỏ hơn hoặc bằng 1, nó không phải là số nguyên tố
        return false;
    }
    int canbachai = sqrt(Num);  // Tính căn bậc hai của Num để tối ưu hóa vòng lặp
    for (int i = 2; i <= canbachai; ++i) {  // Kiểm tra các ước số từ 2 đến căn bậc hai của Num
        if (Num % i == 0) {  // Nếu Num chia hết cho i, Num không phải là số nguyên tố
            return false;
        }
    }
    return true;  // Nếu không tìm thấy ước số nào, Num là số nguyên tố
}

// Hàm tính tổng các số nguyên tố từ 2 đến Num
int tongcacsonguyento(int Num) {
    int result = 0;  // Khởi tạo biến result để lưu tổng các số nguyên tố
    for (int i = 2; i <= Num; ++i) {  // Duyệt các số từ 2 đến Num
        if (songuyento(i)) {  // Nếu i là số nguyên tố
            result += i;  // Cộng i vào tổng result
        }
    }
    return result;  // Trả về tổng các số nguyên tố
}

// Hàm in ra các số nguyên tố từ 2 đến N
void insonguyento(int N) {
    cout << "Cac so nguyen to tu 1 den " << N << " la: ";  // In thông báo
    for (int i = 2; i <= N; ++i) {  // Duyệt các số từ 2 đến N
        if (songuyento(i)) {  // Nếu i là số nguyên tố
            cout << i << " ";  // In i ra màn hình
        }
    }
    cout << endl;  // Xuống dòng sau khi in xong các số nguyên tố
}

int main() {
    int N;
    cout << "Hay nhap N: ";  // Yêu cầu người dùng nhập N
    cin >> N;

    insonguyento(N);  // Gọi hàm insonguyento để in các số nguyên tố từ 2 đến N
    cout << "Tong cac so nguyen to tu 1 den " << N << " la: " << tongcacsonguyento(N);  // In tổng các số nguyên tố từ 2 đến N
    
    return 0;
}

// Tính tổng các số nguyên tố từ 1 đến N
#include <iostream>
#include <cmath> // Thư viện toán học cho hàm sqrt
using namespace std;

// Hàm kiểm tra số nguyên tố
bool Isprime(int Num) {
    if (Num < 2) {
        return false; // Các số nhỏ hơn 2 không phải là số nguyên tố
    }
    for (int i = 2; i <= sqrt(Num); ++i) {
        if (Num % i == 0) {
            return false; // Nếu Num chia hết cho i thì không phải là số nguyên tố
        }
    }
    return true; // Num là số nguyên tố
}

// Hàm tính tổng các số nguyên tố từ 1 đến Num
int Sumofprime(int Num) {
    int sum = 0;
    cout << "Cac so nguyen to tu 1 den " << Num << " la: ";
    for (int i = 2; i <= Num; ++i) { // Duyệt qua tất cả các số từ 2 đến Num
        if (Isprime(i)) { // Kiểm tra nếu i là số nguyên tố
            cout << i << ", "; //In ra các số nguyên tố
            sum += i; // Cộng số nguyên tố vào tổng
        }
    }
    cout << endl;
    return sum; // Trả về tổng các số nguyên tố
}

int main() {
    int N;
    cout << "Hay nhap N: "; // Yêu cầu người dùng nhập giá trị N
    cin >> N;

    // Tính và hiển thị tổng các số nguyên tố từ 1 đến N
    cout << "Tong cac so nguyen to tu 1 den " << N << " la: " << Sumofprime(N) << endl;

    return 0;
}


// Viêt hàm tính tổng hai số
#include <iostream>
using namespace std;

// Hàm tính tổng hai số nguyên
int tinhtonghaiso(int Num1, int Num2) {
    int Sum = Num1 + Num2;  // Tính tổng của hai số và lưu vào biến Sum
    return Sum;  // Trả về giá trị tổng
}

int main() {
    int Num1, Num2;
    cout << "Hay nhap hai so ban muon tinh: ";  // Yêu cầu người dùng nhập hai số
    cin >> Num1 >> Num2;  // Nhận giá trị từ người dùng và lưu vào biến Num1 và Num2

    // Gọi hàm tinhtonghaiso để tính tổng hai số và in ra kết quả
    cout << "Tong cua hai so la: " << tinhtonghaiso(Num1, Num2) << endl;

    return 0;  // Kết thúc chương trình
}

// Viết hàm tính giai thừa
#include <iostream>
using namespace std;

// Hàm tính giai thừa của một số nguyên dương
int giaithua(int Num) {
    int result = 1;  // Khởi tạo biến result để lưu kết quả giai thừa
    for (int i = 1; i <= Num; ++i) {  // Vòng lặp từ 1 đến Num
        result *= i;  // Nhân result với i và lưu lại
    }
    return result;  // Trả về kết quả giai thừa
}

int main() {
    int Num;
    cout << "Hay nhap so can tinh: ";  // Yêu cầu người dùng nhập số cần tính giai thừa
    cin >> Num;  // Nhận giá trị từ người dùng và lưu vào biến Num

    // Gọi hàm giaithua để tính giai thừa và in ra kết quả
    cout << "Giai thua cua " << Num << " la: " << giaithua(Num) << endl;

    return 0;  // Kết thúc chương trình
}

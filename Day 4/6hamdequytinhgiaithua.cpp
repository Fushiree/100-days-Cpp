// Viết hàm đệ quy tính giai thừa
#include <iostream>
using namespace std;

// Hàm đệ quy tính giai thừa của một số nguyên dương Num
int giaithua(int Num) {
    if (Num <= 1) {  // Điều kiện dừng: Nếu Num nhỏ hơn hoặc bằng 1, trả về 1
        return 1;
    } else {
        return Num * giaithua(Num - 1);  // Lời gọi đệ quy: Nhân Num với giai thừa của Num - 1
    }
}

int main() {
    int Num;
    cout << "Hay nhap so muon tinh: ";  // Yêu cầu người dùng nhập số cần tính giai thừa
    cin >> Num;  // Nhận giá trị từ người dùng và lưu vào biến Num

    // Gọi hàm giaithua để tính giai thừa và in ra kết quả
    cout << "Giai thua cua " << Num << " la: " << giaithua(Num) << endl;

    return 0;  // Kết thúc chương trình
}

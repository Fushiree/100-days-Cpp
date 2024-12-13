// Viết hàm kiểm tra so nguyên tố
#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool songuyento(int Num) {
    if (Num < 2) {  // Kiểm tra nếu Num nhỏ hơn 2 thì không phải là số nguyên tố
        return false;
    }
    for (int i = 2; i <= sqrt(Num); ++i) {  // Duyệt từ 2 đến căn bậc hai của Num
        if (Num % i == 0) {  // Nếu Num chia hết cho i, Num không phải là số nguyên tố
            return false;
        }
    }
    return true;  // Nếu không tìm thấy ước số nào, Num là số nguyên tố
}

// Hàm in kết quả kiểm tra số nguyên tố
void inketqua(int Num) {
    if (songuyento(Num)) {
        cout << Num << " la so nguyen to" << endl;
    } else {
        cout << Num << " khong la so nguyen to" << endl;
    }
}

int main() {
    int Num;
    cout << "Hay nhap so can kiem tra: ";  // Yêu cầu người dùng nhập số cần kiểm tra
    cin >> Num;  // Nhận giá trị từ người dùng và lưu vào biến Num
    
    inketqua(Num);  // Gọi hàm inketqua để in kết quả kiểm tra số nguyên tố

    return 0;  // Kết thúc chương trình
}

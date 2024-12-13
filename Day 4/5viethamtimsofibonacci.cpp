// Viết hàm tìm số Fibonacci
#include <iostream>
using namespace std;

// Hàm tìm số Fibonacci tại vị trí Num
int fibo(int Num) {
    int t1 = 0, t2 = 1, nexttemp;

    if (Num == 0) {
        return t1;  // Trường hợp đặc biệt khi Num là 0
    }

    for (int i = 2; i <= Num; ++i) {
        nexttemp = t1 + t2;  // Tính giá trị tiếp theo trong dãy Fibonacci
        t1 = t2;  // Cập nhật t1 thành giá trị của t2
        t2 = nexttemp;  // Cập nhật t2 thành giá trị của nexttemp
    }
    return t2;  // Trả về số Fibonacci tại vị trí Num
}

int main() {
    int Num;
    cout << "Hay nhap vi tri trong day Fibonacci: ";  // Yêu cầu người dùng nhập vị trí trong dãy Fibonacci
    cin >> Num;  // Nhận giá trị từ người dùng và lưu vào biến Num

    // Gọi hàm fibo để tìm số Fibonacci tại vị trí Num và in ra kết quả
    cout << "So Fibonacci tai vi tri " << Num << " la: " << fibo(Num) << endl;

    return 0;  // Kết thúc chương trình
}

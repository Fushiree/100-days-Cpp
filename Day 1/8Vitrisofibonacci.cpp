// Truy xuất vị trí số Fibonacci
#include <iostream>
using namespace std;

int fibo(int n){
    if(n <= 1){
        return n; // Trả về n nếu n nhỏ hơn hoặc bằng 1 (trường hợp cơ bản)
    }
    int t1 = 0, t2 = 1, next_term = 0;
    // Tính số Fibonacci tại vị trí n
    for(int i = 2; i <= n; ++i){
        next_term = t1 + t2; // Tính số tiếp theo trong dãy Fibonacci
        t1 = t2; // Cập nhật giá trị t1
        t2 = next_term; // Cập nhật giá trị t2
    }
    return t2; // Trả về số Fibonacci tại vị trí n
}

int main() {
    int num;
    cout << "Hay nhap vi tri trong day Fibonacci: ";
    cin >> num;

    // Hiển thị kết quả
    cout << "So Fibonacci tai vi tri " << num << " la " << fibo(num);

    return 0;
}


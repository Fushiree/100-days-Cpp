#include <iostream>
using namespace std;

int SumOfDigits(int Num){
    int Sum = 0;
    // Tính tổng các chữ số của Num
    while( Num != 0){
        Sum += Num % 10; // Thêm chữ số cuối cùng của Num vào Sum
        Num /= 10;  // Loại bỏ chữ số cuối cùng của Num
    }
    return Sum;
}

int main() {
    int Num;
    cout << "Hay nhap mot so nguyen: ";
    cin >> Num;

    // Hiển thị kết quả
    cout << "Tong cac chu so cua " << Num << " la " << SumOfDigits(Num);

    return 0;
}

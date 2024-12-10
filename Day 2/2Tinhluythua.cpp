// Tính lũy thừa
#include <iostream>
using namespace std;

int power(int a, int n){
    int result = 1;
    // Tính a^n
    for(int i = 1; i <= n; ++i){
        result *= a; // Nhân dồn result với a n lần
    }
    return result;
}

int main(){
    int a, n;
    cout << "Hay nhap co so: ";
    cin >> a;
    cout << "Hay nhap so mu: ";
    cin >> n;
    
    // Hiển thị kết quả
    cout << "Ket qua cua " << a << "^" << n << " la: " << power(a, n);

    return 0;
}

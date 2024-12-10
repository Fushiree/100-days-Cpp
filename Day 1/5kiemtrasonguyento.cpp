// Kiểm tra số nguyên tố
#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n){
    if(n < 2){
        return false; // Số nhỏ hơn 2 không phải là số nguyên tố
    }
    // Kiểm tra từ 2 đến căn bậc hai của n
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0){
            return false; // Nếu n chia hết cho i, thì n không phải là số nguyên tố
        }
    }
    return true; // n là số nguyên tố
}

int main(){
    int num;
    cout << "Hay nhap so can kiem tra: ";
    cin >> num;

    // Kiểm tra và hiển thị kết quả
    if(isprime(num)){
        cout << num << " la so nguyen to";
    }
    else{
        cout << num << " khong phai la so nguyen to";
    }

    return 0;
}

#include <iostream>
using namespace std;

int SumOfDigits(int Num){
    int Sum = 0;
    while(Num != 0){
        Sum += Num % 10;
        Num /= 10;
    }
    return Sum;
}

int main(){
    int Num;
    cout << "Hay nhap mot so nguyen: ";
    cin >> Num;

    cout << "Tong cac chu so cua " << Num << " la: " << SumOfDigits(Num);

    return 0;
}
//Kiểm tra số chẵn/lẻ
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Hay nhap so can kiem tra: ";
    cin >> num;

    // Kiểm tra số chẵn/lẻ
    if(num % 2 == 0){
        cout << num << " La so chan"; // Số chẵn
    }
    else{
        cout << num << " La so le"; // Số lẻ
    }

    return 0;
}

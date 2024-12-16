// Viết hàm đệ quy tính tổng các chữ số trong một số nguyên
#include <iostream>
using namespace std;

int tongcacso(int Num){
    if(Num == 0){
        return 0;
    }else{
        return (Num % 10) + tongcacso(Num / 10);
    }
}

int main(){
    int Num;
    cout << "Hay nhap mot so nguyen: ";
    cin >> Num;

    cout << "Tong cac chu so cua " << Num << " la: " << tongcacso(Num);

    return 0;
}
// In hình vuông bằng sao
#include <iostream>
using namespace std;

void Printsquare(int n) {
    for(int i = 0; i < n; ++i) { // Vòng lặp hàng
        for(int j = 0; j < n; ++j) { // Vòng lặp cột
            cout << "*  "; // In dấu sao
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

int main() {
    int Num;
    cout << "Hay nhap kich thuoc hinh vuong: ";
    cin >> Num;

    Printsquare(Num); // Gọi hàm để in hình vuông sao

    return 0;
}

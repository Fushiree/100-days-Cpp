// Đổi Celcius sang Fahrenheit
#include <iostream>
using namespace std;

int main() {
    float Celcius;
    cout << "Hay nhap do C can doi: ";
    cin >> Celcius;

    // Chuyển đổi từ Celsius sang Fahrenheit
    float Fahrenheit = (Celcius * 9 / 5) + 32;

    // Hiển thị kết quả
    cout << "Tu " << Celcius << " do C sang do F la: " << Fahrenheit << " do F" << endl;

    return 0;
}


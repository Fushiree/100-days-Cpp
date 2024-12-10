// Tìm số lớn nhất trong ba số
#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Hay nhap so dau tien: ";
    cin >> num1;
    cout << "Hay nhap so thu hai: ";
    cin >> num2;
    cout << "Hay nhap so thu ba: ";
    cin >> num3;
    
    int max_num = num1; // Giả sử số đầu tiên là số lớn nhất
    
    // So sánh với số thứ hai
    if(max_num < num2){
        max_num = num2; // Cập nhật nếu số thứ hai lớn hơn
    }

    // So sánh với số thứ ba
    if(max_num < num3){
        max_num = num3; // Cập nhật nếu số thứ ba lớn hơn
    }
    
    // Hiển thị kết quả
    cout << "So lon nhat trong 3 so la: " << max_num;

    return 0;
}

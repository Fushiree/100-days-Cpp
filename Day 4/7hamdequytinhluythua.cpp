// Viết hàm dệ quy tính lũy thừa
#include <iostream>
using namespace std;

// Hàm đệ quy tính lũy thừa của cơ số với số mũ
int luythua(int coso, int somu) {
    if (somu == 0) {  // Điều kiện dừng: bất kỳ số nào mũ 0 cũng bằng 1
        return 1;
    } else {
        return coso * luythua(coso, somu - 1);  // Lời gọi đệ quy: nhân cơ số với lũy thừa của (số mũ - 1)
    }
}

int main() {
    int coso, somu;
    cout << "Hay nhap co so va so mu: ";  // Yêu cầu người dùng nhập cơ số và số mũ
    cin >> coso >> somu;  // Nhận giá trị từ người dùng và lưu vào biến coso và somu

    // Gọi hàm luythua để tính lũy thừa và in ra kết quả
    cout << "Ket qua " << coso << "^" << somu << " la: " << luythua(coso, somu) << endl;

    return 0;  // Kết thúc chương trình
}

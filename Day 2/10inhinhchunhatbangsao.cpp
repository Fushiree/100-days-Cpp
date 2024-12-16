// In hình chữ nhật bằng sao
#include <iostream>
using namespace std;

// Hàm in hình chữ nhật bằng dấu sao
void Printrectangle(int n, int m) {
    for (int i = 0; i < n; ++i) { // Vòng lặp hàng
        for (int j = 0; j < m; ++j) { // Vòng lặp cột
            cout << "*  "; // In dấu sao và khoảng trắng
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

int main() {
    int Row, Col;
    cout << "Hay nhap so hang va cot cua hinh chu nhat: "; // Yêu cầu người dùng nhập số hàng và cột
    cin >> Row >> Col;

    Printrectangle(Row, Col); // Gọi hàm để in hình chữ nhật

    return 0;
}

// In hình chữ nhật rỗng
// #include <iostream>
// using namespace std;

// // Hàm in hình chữ nhật
// void inhinchunhat(int hang, int cot) {
//     // Vòng lặp bên ngoài để duyệt qua các hàng của hình chữ nhật
//     for (int i = 0; i < hang; ++i) {
//         // Vòng lặp bên trong để duyệt qua các cột của hình chữ nhật
//         for (int j = 0; j < cot; ++j) {
//             // Kiểm tra xem vị trí hiện tại có phải là cạnh của hình chữ nhật không
//             if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
//                 cout << "*  ";  // In dấu '*' nếu vị trí hiện tại là cạnh của hình chữ nhật
//             } else {
//                 cout << "   ";  // In khoảng trắng nếu vị trí hiện tại không phải là cạnh của hình chữ nhật
//             }
//         }
//         cout << endl;  // Xuống dòng sau khi in xong mỗi hàng
//     }
// }

// int main() {
//     int hang, cot;
//     cout << "Hay nhap kich thuoc cua hinh chu nhat: ";  // Yêu cầu người dùng nhập kích thước của hình chữ nhật
//     cin >> hang >> cot;  // Nhận giá trị số hàng và số cột từ người dùng

//     inhinchunhat(hang, cot);  // Gọi hàm inhinchunhat để in hình chữ nhật với kích thước đã nhập

//     return 0;  // Kết thúc chương trình
// }


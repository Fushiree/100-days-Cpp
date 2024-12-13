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


// In hình vuông rỗng
// #include <iostream>
// using namespace std;

// // Hàm in hình vuông
// void inhinhvuong(int Num) {
//     // Vòng lặp bên ngoài để duyệt qua các hàng của hình vuông
//     for (int i = 0; i < Num; ++i) {
//         // Vòng lặp bên trong để duyệt qua các cột của hình vuông
//         for (int j = 0; j < Num; ++j) {
//             // Kiểm tra xem vị trí hiện tại có phải là cạnh của hình vuông không
//             if (i == 0 || i == Num - 1 || j == 0 || j == Num - 1) {
//                 cout << "*  ";  // In dấu '*' nếu vị trí hiện tại là cạnh của hình vuông
//             } else {
//                 cout << "   ";  // In khoảng trắng nếu vị trí hiện tại không phải là cạnh của hình vuông
//             }
//         }
//         cout << endl;  // Xuống dòng sau khi in xong mỗi hàng
//     }
// }

// int main() {
//     int Num;
//     cout << "Hay nhap kich thuoc cua hinh vuong: ";  // Yêu cầu người dùng nhập kích thước của hình vuông
//     cin >> Num;  // Nhận giá trị từ người dùng và lưu vào biến Num

//     inhinhvuong(Num);  // Gọi hàm inhinhvuong để in hình vuông với kích thước Num

//     return 0;  // Kết thúc chương trình
// }



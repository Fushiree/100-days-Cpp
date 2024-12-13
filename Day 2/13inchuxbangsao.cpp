// In chữ X bằng sao
#include <iostream>
using namespace std;

void PrintX(int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i == j || (i + j) == (n - 1)){
                cout << "*  "; // In dấu sao tại các vị trí cần thiết
            }
            else{
                cout << "   "; // In khoảng trắng cho các vị trí khác
            }
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

int main(){
    int Num;
    cout << "Hay nhap kich thuoc cua chu X: "; // Yêu cầu người dùng nhập kích chữ X
    cin >> Num;

    PrintX(Num); // Gọi hàm để in hình chữ X có viền

    return 0;
}


// // In chữ X có viền
// #include <iostream>
// using namespace std;

// void PrintX(int n){
//     for(int i = 0; i < n; ++i){
//         for(int j = 0; j < n; ++j){
//             if(i == j || (i + j) == (n - 1) || i == 0 || i == n - 1 || j == 0 || j == n - 1){
//                 cout << "*  "; // In dấu sao tại các vị trí cần thiết
//             }
//             else{
//                 cout << "   "; // In khoảng trắng cho các vị trí khác
//             }
//         }
//         cout << endl; // Xuống dòng sau mỗi hàng
//     }
// }

// int main(){
//     int Num;
//     cout << "Hay nhap kich thuoc cua chu X: "; // Yêu cầu người dùng nhập kích thước Chu X
//     cin >> Num;

//     PrintX(Num); // Gọi hàm để in hình chữ X có viền

//     return 0;
// }
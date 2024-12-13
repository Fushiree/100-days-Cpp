// Dãy Fibonacci
#include <iostream>
using namespace std;

void fibonacci(int n){
    int t1 = 0, t2 = 1, nextnum;
    // Tính và in dãy Fibonacci đến số thứ n
    for(int i = 0; i <= n; ++i){
        cout << t1 << " "; // In ra số hiện tại của dãy Fibonacci
        nextnum = t1 + t2; // Tính số tiếp theo của dãy Fibonacci
        t1 = t2; // Cập nhật giá trị t1
        t2 = nextnum; // Cập nhật giá trị t2
    }
}

int main(){
    int soluongfibo;
    cout << "Hay nhap so luong trong day fibonacci: ";
    cin >> soluongfibo;

    cout << "Day fibonacci: ";
    fibonacci(soluongfibo); // Gọi hàm để in dãy Fibonacci

    return 0;
}

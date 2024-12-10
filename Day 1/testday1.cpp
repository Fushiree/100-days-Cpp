// Test day 1
#include <iostream>
using namespace std;

int fibo(int n){
    if(n <= 1){
        return n;
    }
    int t1 = 0, t2 = 1, next_term = 0;
    for(int i = 2; i <= n; ++i){
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return t2;
}

int main() {
    int num;
    cout << "Hay nhap vi tri trong day Fibonacci: ";
    cin >> num;

    cout << "So Fibonacci tai vi tri " << num << " la " << fibo(num);

    return 0;
}

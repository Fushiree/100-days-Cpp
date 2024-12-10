// In các số chẵn từ 1 đến 100
#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 100; ++i){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }

    return 0;
}
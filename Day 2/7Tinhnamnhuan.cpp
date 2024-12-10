// Tính năm nhuận
#include <iostream>
using namespace std;

bool Isleapyear(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true; // Năm chia hết cho 400 là năm nhuận
            }
            else{
                return false; // Năm chia hết cho 100 nhưng không chia hết cho 400 không phải là năm nhuận
            }
        }
        else{
            return true; // Năm chia hết cho 4 nhưng không chia hết cho 100 là năm nhuận
        }
    }
    else{
        return false; // Năm không chia hết cho 4 không phải là năm nhuận
    }
}

int main(){
    int year;
    cout << "Hay nhap nam ban muon kiem tra: ";
    cin >> year;

    if(Isleapyear(year)){
        cout << "Nam " << year << " la nam nhuan";
    }
    else{
        cout << "Nam " << year << " khong phai la nam nhuan";
    }

    return 0;
}

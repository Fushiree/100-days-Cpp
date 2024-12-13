#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inmangngaunhien(int arr[100][100], int sohang, int socot){
    for(int i = 0;  i < sohang; ++i){
        for(int j = 0; j < socot; ++j){
            arr[i][j] = rand() % 100;
        }
    }

    cout << "Mang ban dau: " << endl;
    for(int i = 0;  i < sohang; ++i){
        for(int j = 0; j < socot; ++j){
            cout << "[" << arr[i][j] << "]";
        }
        cout << endl;
    } 
}

void daonguoctunghang(int arr[100][100], int sohang, int socot){
    for(int i = 0; i < sohang; ++i){
        int start = 0;
        int end = socot - 1;
        while(start < end){
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    } 
}

void daonguoctungcot(int arr[100][100], int sohang, int socot){
    for(int j = 0; j < socot; ++j){
        int start = 0;
        int end = sohang - 1;
        while(start < end){
            int temp = arr[start][j];
            arr[start][j] = arr[end][j];
            arr[end][j] = temp;
            start++;
            end--;
        }
    }
}

void inmangsaudaonguoc(int arr[100][100], int sohang, int socot){
    cout << "Mang sau khi dao nguoc: " << endl;
    for(int i = 0;  i < sohang; ++i){
        for(int j = 0; j < socot; ++j){
            cout << "[" << arr[i][j] << "]";
        }
        cout << endl;
    }  
}

int main(){
    srand(static_cast<unsigned int>(time(0)));

    int sohang, socot;
    cout << "Hay nhap so hang va so cot cua mang: ";
    cin >> sohang >> socot;
    int arr[100][100];

    inmangngaunhien(arr, sohang, socot);

    daonguoctungcot(arr, sohang, socot);

    daonguoctunghang(arr, sohang, socot);

    inmangsaudaonguoc(arr, sohang, socot);

    return 0;
}
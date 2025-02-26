#include <iostream>  
using namespace std;  

void print_checkerboard(int N) {  
    for (int i = 0; i < N; ++i) {  
        for (int j = 0; j < N; ++j) {  
            if ((i + j) % 2 == 0) {  
                cout << "1";  
            } else {  
                cout << "0";  
            }  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int N;  
    cout << "Nhập N (5 đến 40): ";  
    cin >> N;  

    if (N >= 5 && N <= 40) {  
        print_checkerboard(N);  
    } else {  
        cout << "N không hợp lệ!" << endl;  
    }  

    return 0;  
}
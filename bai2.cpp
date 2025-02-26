#include <iostream>  
using namespace std;  

void print_pattern(int N) {  
    for (int i = 0; i < N; ++i) {  
        for (int j = 0; j < N; ++j) {  
            if (j == 0 || j == N - 1 || i == N - 1) {  
                cout << "*";  
            } else {  
                cout << " ";  
            }  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int N;  
    cout << "Nhập N (5 đến 25): ";  
    cin >> N;  

    if (N >= 5 && N <= 25) {  
        print_pattern(N);  
    } else {  
        cout << "N không hợp lệ!" << endl;  
    }  

    return 0;  
}
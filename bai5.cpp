#include <iostream>  
using namespace std;  

void print_triangle(int N) {  
    for (int i = 1; i <= N; ++i) {  
        for (int j = 0; j < i; ++j) {  
            cout << "*";  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int N;  
    cout << "Nhập N (1 đến 20): ";  
    cin >> N;  

    if (N >= 1 && N <= 20) {  
        print_triangle(N);  
    } else {  
        cout << "N không hợp lệ!" << endl;  
    }  

    return 0;  
}
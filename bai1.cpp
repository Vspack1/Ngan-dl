#include <iostream>  
using namespace std;  

void multiplication_table(int N) {  
    for (int i = 1; i <= 9; ++i) {  
        cout << N << " x " << i << " = " << N * i << endl;  
    }  
}  

int main() {  
    int N;  
    cout << "Nhập N (1 đến 9): ";  
    cin >> N;  

    if (N >= 1 && N <= 9) {  
        multiplication_table(N);  
    } else {  
        cout << "N không hợp lệ!" << endl;  
    }  

    return 0;  
}
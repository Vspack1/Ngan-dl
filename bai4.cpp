#include <iostream>  
using namespace std;  

void print_alphabet_pattern(int N) {  
    for (int i = 0; i < N; ++i) {  
        for (int j = 0; j < N; ++j) {  
            char ch;  
            if (i % 2 == 0) {  
                ch = 'A' + (i + j) % 26;  
            } else {  
                ch = 'a' + (i + j) % 26;  
            }  
            cout << ch;  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int N;  
    cout << "Nhập N (5 đến 40): ";  
    cin >> N;  

    if (N >= 5 && N <= 40) {  
        print_alphabet_pattern(N);  
    } else {  
        cout << "N không hợp lệ!" << endl;  
    }  

    return 0;  
}
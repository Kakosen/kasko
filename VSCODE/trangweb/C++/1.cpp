#include <iostream>
#include <cmath>
using namespace std;

bool kiemtrasonguyen(int n){
    if(n < 2) return false;
    if(n >= 2){
        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0){
                return false;
            }
        }
    } return true;        
}

void Ualasao(int n){
    for(int i = 2; i <= n; i++){
        if(kiemtrasonguyen(i) == true){
            cout << i << ", ";
        }
    }
}

int main(){
    int n = 100;
    Ualasao(n);

    return 0;
}
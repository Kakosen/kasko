#include<bits/stdc++.h>
using namespace std;
int main(){
	int h;
	cin >> h;
	for(int i=1; i <= h; i++){
		for(int j=1; j<=h; j++){
			if(i==1 || j == 1 || j==h || i==h){
				cout << "*";
			}else{
				cout << " ";
			}
		}
	cout << endl;
	}
	
	return 0;
}

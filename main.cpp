#include<iostream>
using namespace std;

void TreG(int x){
	int y = 0;
	for(int i = 1; i <= x; i++){
		y = y + i;
		for(int it = 0; it < i; it++){
			cout << y;
		}
		cout << endl;
	}
}

int main(){
	TreG(10);
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	if (n > 9 && n < 100){
		while(n > 1){
		int a = n % 10;
		n /= 10;
		cout << a;
		}
	}else{
		cout << "N";
	}
	return 0;
}



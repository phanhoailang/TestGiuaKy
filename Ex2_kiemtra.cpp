#include <iostream>
using namespace std;
int main(){
	double n, sum;
	cout << "Enter number of kilometer: ";
	cin >> n;
	if(n > 1){
		double a = n - 1;
		double b = a * 2;
		sum = 5 + b;
		cout << sum;
	}else if(n <= 1 && n > 0){
		sum = n * 5;
		cout << sum;
	}else {
		cout << "N";
	} 
	return 0;
}


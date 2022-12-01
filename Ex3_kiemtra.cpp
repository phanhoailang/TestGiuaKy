#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter a number n (n >= 1): ";
	cin >> n;
	if(n < 1) {
		cout << "N";
		return 0;
	} 
	double sum = 0;
	int i = 2;
	while(i <= n) {
		sum += (double)1 / 3;
		i++;
	}
	cout << sum;
	return 0;
}


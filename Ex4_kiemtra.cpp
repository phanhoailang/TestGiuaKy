#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "Enter a, b, c, d: ";
	cin >> a >> b >> c >> d;
	if(a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		cout << "N";
		return 0;
	} 
	while(true) {
		int temp;
		if(a < b) {
			temp = a;
			a = b;
			b = temp;
		}
		if(b < c) {
			temp = b;
			b = c;
			c = temp;
		}
		if(c < d) {
			temp = c;
			c = d;
			d = temp;
		}
		if( a >= b && b >= c && c >= d) {
			break;
		}
	}
	cout << a << " " << b << " "<< c << " " << d;  
	return 0;
}


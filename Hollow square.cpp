
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << " enter your number:";
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			if (i == 1 || i == n  || j == 1 || j == n ) {
				cout << "*";
			}else {
				cout << " ";
			}
		}a
		cout << endl;
	}

	system("pause");
return 0;
}
//ters kosegen (anti-diagon) 1 olan ve diger butun elemanlari 0 olan matrisi ekrana bastiriniz.

#include <iostream>
using namespace std;


//0001
//0010
//0100
//1000

int main() {
	int b;
	cout << "boyutu giriniz :";
	cin >> b;

	for (int i = 0; i < b; i++) { // satir sayisi
		for (int j = 0; j < b; j++) { // kolon sayisi
			if (i+j == b-1)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;
//int show(int a, int b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
//void wieksza(int a, int b) {
//	if (a > b) {
//		cout<< "Wieksza liczba to: " << a << endl;
//	}
//	else {
//		cout << "Wieksza liczba to: " << b << endl;
//	}
//}
//
//
//int main() {
//	cout << "Podaj dwie liczby calkowite: " << endl;
//	int a, b;
//	cin >> a >> b;
//	wieksza(a, b);
//	cout << "Funkcja show zwraca wieksza liczbe: " << show(a, b) << endl;
//			
//
//}
//zadanie 1

//zadanie 2
	int mkk(int a){
		if (a % 2 == 0){
			return a / 2;
		}
		else{
			return 3 * a + 1;
		}
	}
	int main(){
		cout << "Podaj liczbe calkowita: " << endl;
		int a;
		cin >> a;
		cout << "Wynik funkcji mkk to: " << mkk(a) << endl;
	
	}





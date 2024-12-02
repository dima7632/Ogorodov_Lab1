	 	 	 	
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
int a, b;

cout << "Введіть перше число: ";
cin >> a;
cout << "Введіть друге число: ";
cin >> b;

if (a == b) {
cout << "Числа рівні." << endl;
} else {
cout << "Числа не рівні." << endl;
}
return 0;
}

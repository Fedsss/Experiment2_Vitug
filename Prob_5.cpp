#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {
	 
	int n1, n2, n3;
	n1=0, n2=1, n3=1;
 
	cout << "Fibonacci numbers:" << endl;
	cout << "0,";

	while (n1 + n2 < 6770){
		 n3 = n1 + n2;
		 n1 = n2;
		 n2 = n3;
		 
		 cout << n1 << ",";}
	 
	cout << "10946";

	_getch ();
	return 0;
 }
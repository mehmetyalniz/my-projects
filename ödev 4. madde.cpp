
#include <iostream>
using namespace std;
// dolar kurunu kullan�c� yazmal�
int main () {
	// TL de�eri= dolar miktar� ($) * dolar kuru (x)
int TL , $ , x ;
	
	cout << "dolar miktari ($) :" ;
	cin >> $ ;
	cout << "dolar kuru (x) :" ;
	cin >> x ;
	cout << " TL de�eri(TL) :" ;
	cin >> TL ;
	
	TL= $ * x ;
	cout << "TL de�eri (TL) : " << TL  ;
	
	return 0 ;
}

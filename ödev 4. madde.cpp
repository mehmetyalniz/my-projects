
#include <iostream>
using namespace std;
// dolar kurunu kullanýcý yazmalý
int main () {
	// TL deðeri= dolar miktarý ($) * dolar kuru (x)
int TL , $ , x ;
	
	cout << "dolar miktari ($) :" ;
	cin >> $ ;
	cout << "dolar kuru (x) :" ;
	cin >> x ;
	cout << " TL deðeri(TL) :" ;
	cin >> TL ;
	
	TL= $ * x ;
	cout << "TL deðeri (TL) : " << TL  ;
	
	return 0 ;
}

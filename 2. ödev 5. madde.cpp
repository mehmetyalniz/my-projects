

#include<iostream>
using namespace std;
int main()
{

	float boy,kilo,endeks;
	cout << " Boyunuzu metre cinsinden giriniz = ";
	cin >> boy;
	cout << " Kilonuzu kg cinsinden giriniz = ";
	cin >> kilo;
	endeks = (kilo)/((boy)*(boy));
	
	if(endeks<18.5){
		cout << endl << "Ýdeal kilo durumunuz zayýf " << endl << " Vücut kitle endeksiniz = " << endeks << endl << endl;
	}
	else if(24.9>=endeks && endeks>=18.5){
		cout << endl << " Ýdeal kilo durumunuz normal " << endl << " Vücut kitle endeksiniz = " << endeks << endl << endl;
	}
	else if(29.9>=endeks && endeks>=25){
    	cout << endl << " Ýdeal kilo durumunuz fazla kilolu " << endl << " Vücut kitle endeksiniz = " << endeks << endl << endl;
	}
	else if(34.9>=endeks && endeks>=30){
		cout << " Ýdeal kilo durumunuz 1.Derece obez " << endl <<"Vücut kitle endeksiniz = " << endeks << endl << endl;
	}
	else if(39.39>=endeks && endeks>=35){
		cout << " Ýdeal kilo durumunuz 2.Derece obez " << endl <<"Vücut kitle endeksiniz = " << endeks << endl << endl;
	}
	else if(endeks>=40){
		cout << " Ýdeal kilo durumunuz 3.derece obez " << endl <<"Vücut kitle endeksiniz = " <<  endeks << endl << endl;
	}
	
	return 0;
	
}

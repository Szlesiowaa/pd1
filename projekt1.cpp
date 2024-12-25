#include <iostream>
#include <math.h>
using namespace std;

bool czyPierwsza(int a){
	float sa=sqrt(a);
	for(int i=2;i<=sa;i++)if(a%i==0)return false;
	return true;
}

int main(){
int a,menu;
cout<<"Podaj liczbe: ";
cin>>a;
cout<<"Co mam zrobic z ta liczba? (1 - sprawdz czy pierwsza, 2 - oblicz kwadrat, 3 - oblicz pierwiastek kwadratowy): ";
cin>>menu;
switch(menu){
	case 1:
	cout<<czyPierwsza(a)<<endl;
	break;
	case 2:
	cout<<a*a<<endl;
	break;
	case 3:
	cout<<sqrt(a)<<endl;
	break;
	default:
	cout<<"Nastepnym razem podaj poprawna opcje menu"<<endl;
}

return 0;
}

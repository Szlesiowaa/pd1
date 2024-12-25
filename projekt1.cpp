#include <iostream>
#include <math.h>
using namespace std;

int silnia(int liczba){
	if(liczba==0 || liczba==1)return 1;
	else return silnia(liczba-1)*liczba;
}

int main(){
int a,menu;
cout<<"Podaj liczbe: ";
cin>>a;
cout<<"Co mam zrobic z ta liczba? (1 - oblicz silnie, 2 - oblicz kwadrat, 3 - oblicz pierwiastek kwadratowy): ";
cin>>menu;
switch(menu){
	case 1:
	cout<<silnia(a)<<endl;
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

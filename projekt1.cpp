#include <iostream>
using namespace std;

int silnia(int liczba){
	if(liczba==0 || liczba==1)return 1;
	else return silnia(liczba-1)*liczba;
}

int main(){
int a;
cout<<"Podaj liczbe: ";
cin>>a;
cout<<silnia(a)<<endl;

return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

bool czyPierwsza(int a){
	float sa=sqrt(a);
	for(int i=2;i<=sa;i++)if(a%i==0)return false;
	return true;
}

int main(){
int a;
cout<<"Podaj liczbe: ";
cin>>a;
cout<<czyPierwsza(a)<<endl;

return 0;
}

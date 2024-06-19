realizar un algoritmo que sume los N primeros números naturales usando bucles.
#include<iostream>
using namespace std;
int main(){
	int n;
	int suma = 0;
	cout<<"Ingrese N:"<< endl;
	cin>> n;	
	for(int i=1;i<=n;i++){
		suma+=i;
	}
	cout<<"La suma los "<< n  <<" primeros numeros naturales "<< suma;
	return 0;
}

Se necesita un programa que solicite los N gastos realizados en un viaje. El programa
consultará si desea continuar ingresando gastos, y mostrara al final la suma de los N
gastos.
#include<iostream>
using namespace std;
int main(){
	int n ,g;
	int suma = 0;
    int x;
	do{	
	cout<<"Ingrese N:"<< endl;
	cin>> n;
	for(int i=1;i<=n;i++){
		cout<<"Ingrese gasto:"<< endl;
		cin>>g;
		suma +=g;
	}
	cout<<"Ingrese 1 para continuar:"<< endl;
	cin >> x;
	if(x!=1){
	  cout << suma;
	}
	}while(x==1);
	return 0;
}

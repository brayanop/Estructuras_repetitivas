6. Calcular el promedio de los números no negativos de una lista de “n” números
#include<iostream>
using namespace std;
int main(){
    int n;
    int num;
    int cont = 0;
    int suma = 0;
    float promedio;
    cout<<"Ingrese N:"<< endl;
    cin>>n;
    for(int i=0;i<n;i++){
    	cout<<"Ingrese numero:";
    	cin>>num;
    	if(num>=0){
    		cont++;
    		suma+=num;
		}
	}
	promedio = suma/cont;
	cout<<"El promedio de los numeros no negativos es: "<<promedio;
	return 0;
}

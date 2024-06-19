5. Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha
dictado en la universidad. El programa consultará si desea continuar ingresando notas, y
mostrará al final la cantidad de aprobados y desaprobados y el promedio del salón
#include<iostream>
using namespace std;
int main(){
     int nota;
     int n,x;
     int cont3=0;
     int suma=0;
     int cont1=0, cont2=0;
     float promedio;
     do{
     	cout<<"INGRESE N ESTUDIANTES:"<< endl;
     	cin >> n;
     for(int i=1;i<=n;i++){
     	cout<<"Ingrese nota"<<i<< endl;
     	cin >> nota;
     	suma+=nota;
     	cont3++;
     	if(nota>=10.5){
     		cont1++;
		 }else {
		 	cont2++;
		 } 
	 }
	 	promedio = suma/cont3;
	 	cout<<"Ingrese 1 para continuar.."<< endl;
	 	cin >> x;
	 	if(x!=1){
	 		cout<<"aprobados:"<<cont1<< endl;
	 		cout<<"desaprobados:"<<cont2<<endl;
	 		cout<<"Promedio:"<<promedio<< endl;
		 }
	 }while(x==1);
     
	return 0;
}

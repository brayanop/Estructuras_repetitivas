Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos
mayores que cero)
int main(){
	int n;
	int cont=0;
	cout<<"Ingrese N:"<< endl;
	cin>> n;
	for(int i=1;cont<n;i++){
		if(i%7==0){
			cont++;
			cout<<i<<" ";	
		}
	
	}
	return 0;
}


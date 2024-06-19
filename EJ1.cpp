#include<bits/stdc++.h>
using namespace std;
int main (){
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

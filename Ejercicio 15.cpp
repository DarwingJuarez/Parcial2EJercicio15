//DESPLEGAR LA TABLA DE MULTIPLICAR QUE EL USUARIO INDIQUE
#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	int numero;
	
	do{
		cout<<"Ingrese un numero: ";
		cin>>numero;
	}while(numero<1);
	cout<<"LA TABLA DE MULTIPLICAR DE "<<numero<<" ES: \n";
	
	for (int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	getch();
	return 0;
}

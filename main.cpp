#include "stack.hpp"
#include <iostream>

using namespace std	;

int main(int argc, char* argv[]){
	int opcion;
	int numero;
	Stack s;

	do{
		cout<<"1. Meter al stack"<<endl;
		cout<<"2. Sacar del stack"<<endl;
		cout<<"3. Salir"<<endl;
		cin >> opcion;

		if(opcion == 1){
			cout<<"Ingrese el numero"<<endl;
			cin >> numero;
			s.push(numero);
		}else{
			int n; 
			n = s.pop();
			cout<<"El numero extraido es: " << n << endl;		
		}
	}while(opcion != 3);
	return 0;
}
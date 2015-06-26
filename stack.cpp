#include "stack.hpp"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Stack::Stack(){
	this-> sizeTemp=10;
	this->sizeElemento=0;
	this->stack= new int [10];
}

Stack::~Stack(){
	delete[] stack;
}

void Stack::push(int num){
	if(sizeTemp-2 == sizeElemento){
		sizeTemp+=2;
		int* temp = new int [sizeTemp];
		stack=temp;
		stack[sizeElemento+1] = num;
		sizeElemento++;
	}else{
		stack[sizeElemento+1] = num;
		sizeElemento++;
	}
}

int Stack::pop(){
	int nuwnum;
	nuwnum = stack[sizeElemento];
	stack[sizeElemento]=95236806;
	sizeElemento--;
	return nuwnum;
}

int Stack::size()const{
	return sizeElemento;
}

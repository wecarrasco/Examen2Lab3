#include "stack.hpp"
#include "iostream"
#include "string"
#include "sstream"

using namespace std;

Stack::Stack(){
	this->stack= new int [10];
}

Stack::~Stack(){
	for (int i = 0; i < count; i++){
		delete []   stack[i];
	}
}

void Stack::push(int num){

}

int Stack::pop()const{

}

int Stack::size()const{

}

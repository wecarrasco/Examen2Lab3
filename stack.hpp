#pragma once

using namespace std;

class Stack{
public:
	Stack();
	~Stack();
	void push(int num);
	int pop()const;
	int size()const;

private:
	int* stack;
	int numero;
};
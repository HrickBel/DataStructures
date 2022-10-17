#include <iostream>
#define MAX 1000

using namespace std;

class Stack{//pilha
	int No;
	int stack[MAX];
	public:
		Stack(){
			No = -1;
		}
		void push(int num);
		int pop();
		int top();	
};

		void Stack::push(int num){//empilhar na pilha
			No++;
			stack[No] = num;
		}
		
		int Stack::pop(){//remover o topo da pilha
			if(No >= 0){
				int num = stack[No];
				No--;
				return num;	
			}else
				cout << "stack underflow" << endl;
				return 0;
			}
		
		int Stack::top(){
			return stack[No];
		}//indica o elemento do topo da pilha

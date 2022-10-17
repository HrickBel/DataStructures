#include <iostream>
#ifndef DataStruct_H_
#define DataStruct_H_
class Stack{
	protected:
		int top,max;
		float *t;
	public:
		Stack(int max){
			this->top = -1;
			this->max= max;
			this->t = new float[max];
		}
		void pop();
		bool push(float no);
};

bool Stack::push(float no){
	if(top < (max-1)){
		top++;
		t[top] = no;
		return true;
	}
	return false;
}
void Stack::pop(){
	if(top >= 0){
		std::cout << "popping:" << t[top] << std::endl;
		top--;
	}else{
		std::cout << "stack underflow" << std::endl;
	}
}
#endif

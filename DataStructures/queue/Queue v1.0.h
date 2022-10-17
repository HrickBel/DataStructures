#include <iostream>

class Queue{//fila
	int head, tail;
	int MAX;
	int *queue;
	
	public:
		Queue(int MAX){
		head = -1;
		tail = 0;
		this->MAX = MAX;	
		}
		void enqueue(int num);
		int dequeue();
		int Qsize();
		bool isEmpty();
};

void Queue::enqueue(int num){//enfileira os dados
	if(tail == MAX - 1){
		cout << "overflow" << endl;
	}
	queue[tail++] = num;
}
int Queue::dequeue(){//desenfileira os dados
	if(tail > head){
		head++;
		int num = queue[head];
	}else{
		cout << "Underflow" << endl;
	return false;
	}
}
int Queue::Qsize(){return tail;}//tamanho da fila
bool Queue::isEmpty(){//verifica se a fila esta vazia
	if(head > tail){
		cout << "empty" << endl;
		return false;
	}else{
		return true;
	}
}

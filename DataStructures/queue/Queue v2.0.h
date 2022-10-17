#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>

class Queue{
	private:
		int head;
		int tail;
		int max;
		float *queue;
	public:
		Queue(int max);
		void enqueue(float num);
		void dequeue();
};

void Queue::enqueue(float num){
	if(tail > max-1){
		std::cout << "overflow" << std::endl;
	}else{
		tail++;
		queue[tail] = num;
	}
}
void Queue::dequeue(){
	if(head < tail){	
		head++;
		std::cout << "dequeue:" << queue[head] << std::endl;
	}else{
		std::cout << "empty queue" << std::endl;
	}
}
Queue::Queue(int max){
			this->head = -1;
			this->tail= 0;
			this->max = max;
			this->queue = new float[max];
		}
#endif

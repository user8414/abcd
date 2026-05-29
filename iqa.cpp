#define max 10
int Queue[max];
int front=-1,rear=-1;

void enqueue(int x){
	if(rear==max-1){
		printf("Queue is overflow.\n");
	}
	if(rear==-1 && front==-1){
		rear=0;
		front=0;
	}
	else{
		rear++;
	}
	Queue[rear]=x;
	printf("Successfully inserted.\n");
}

void display(){
	if(front==-1) printf("Queue is empty.\n");
	else{
		printf("Elements in the queue : ");
		for(int i=front;i<=rear;i++){
			printf("%d ",Queue[i]);
		}
		printf("\n");
	}
}
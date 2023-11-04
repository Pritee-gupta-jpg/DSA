# include<iostream>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int arr[5];
    Queue(){
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    bool isFull(){
        if(rear==4)
        return true;
        else
        return false;
    }
    bool isEmpty(){
        if(front==-1)
        return true;
        else
        return false;
    }
    void Enqueue(int x){
        if(isFull()){
            cout<<"Queue is full\n";
        }
        else if(isEmpty()){
            front=0;
            rear=0;
            arr[rear]=x;
        }
        else{
            rear++;
            arr[rear]=x;
        }
    }
    int Dequeue(){
        int x;
        if(isEmpty()){
            cout<<"Queue is empty\n";
            return 0;
        }
        else if(rear==front){
            x=arr[front];
            front=-1;
            rear=-1;
             return x;
        }
        else{
            x=arr[front];
            front++;
             return x;
        }
       
    }
    int count(){
        return (rear-front+1);
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<"\t";
        }
    }
    
};
int main(){
    int val,choice;
    Queue q;
    do{
        cout<<"enter the operation you want ot perform.To exit enter -1\n";
        cout<<"1.Enqueue()\n2.for Dequeue()\n3.for count()\n4.for isFull()\n5.for isEmpty()\n6.for Display\n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter teh value\n";
                cin>>val;
                q.Enqueue(val);
               
                break;
            case 2:
                cout<<"The deueue value is \t"<<q.Dequeue()<<endl;
                break;
            case 3:
                cout<<"the number of element in queue is :\t"<<q.count();
                break;
            case 4:
                if(q.isFull()){
                    cout<<"queue is full\n";
                }
                else{
                    cout<<"queuue is not full\n";
                }
                break;
            case 5:
                if(q.isEmpty()){
                    cout<<"queue is empty\n";
                }
                else{
                    cout<<"queue is not empty\n";
                }
                break;
            case 6:
                cout<<"The element of queue are\t";
                q.display();
                break;
            default:
                cout<<"wrong choice\n";
        }
    }while(choice!=-1);
}

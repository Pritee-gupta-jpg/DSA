# include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int arr[5];
    stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
   bool isFull(){
        if(top==5)
        return true;
        else 
        return false;
    }
   bool isEmpty(){
        if(top==-1)
        return true;
        else
        return false;
    }
    
    void push(int x){
        if(isFull()){
            cout<<"\n stack is full";
        }
        else {
            top++;
            arr[top]=x;
        }
    }
    int pop(){
        int x;
        if(isEmpty()){
            cout<<"\n stack is empty";
            return 0;
        }
        else{
            x=arr[top];
            arr[top]=0;
            top--;
             return x;
        }
    }
    int count(){
        return (top+1);
    }
    int peek(int pos){
        if(isEmpty()){
            cout<<"\nstack underflow";
            return 0;
        }
        else{
        return arr[pos];
        }
    }
    
    void change(int k,int pos){
        arr[pos]=k;
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<"\t";
        }
    }
};
int main(){
    int val,choice,pos;
    stack s;
    do{
        cout<<"what operation do you want to perform .To exit enter -1\n";
        cout<<"1.For push()\n2.for Pop()\n3.For peek()\n4.count()\n 5.change()\n6.isFUll()\n7.isEmpty\n 8.display\n 9.for clear screen\n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter the value\n";
                cin>>val;
                s.push(val);
                cout<<"element is added to stack\n";
                break;
            case 2:
                cout<<"the pop element is :\t"<<s.pop()<<endl;
                break;
            case 3:
                cout<<"enter the position you want to see element\n";
                cin>>pos;
                cout<<"the element at position "<<pos<<"is "<<s.peek(pos)<<endl;
                break;
            case 4:
                cout<<"the element in stack is\t"<<s.count()<<endl;
                break;
            case 5:
                cout<<"enter the position\t";
                cin>>pos;
                cout<<"enter the value\t";
                cin>>val;
                s.change(val,pos);
                break;
            case 6:
                if(s.isFull()){
                    cout<<"stack is full\n";
                }
                else{
                    cout<<"stack is not full\n";
                }
                break;
            case 7:
                if(s.isEmpty()){
                    cout<<"stack is empty\n";
                }
                else{
                    cout<<"stack is not empty\n";
                }
                break;
            case 8:
                cout<<"Elements of stack are\t";
                s.display();
                break;
            case 9:
                    system("cls");
                    break;
            default:
                cout<<"wrong choice\n";
        }
    }while(choice!=-1);
}

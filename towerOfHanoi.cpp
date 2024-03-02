# include<iostream>
using namespace std;
# include<stack> 
# include<cmath>

int transfer(stack<int>&a,stack<int>&b){
    if(b.empty()==true){
        b.push(a.top());
        a.pop();
        return 1;
    }
    else if(a.empty()==true){
        a.push(b.top());
        b.pop();
        return 2;
    }
    else{
        if(a.top()>b.top()){
            a.push(b.top());
            b.pop();
            return 2;
        }
        else{
            b.push(a.top());
            a.pop();
            return 1;
        }
    }
}
int main(){
    stack<int>s,t,d;
    int n;
    cout<<"enter the number of disk"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){
        s.push(i);
    }
    int x=pow(2,n)-1;
    int i=1;
    if(n%2==0){
        while(i<=x){
            if(i%3==1){
                int y=transfer(s,t);
                if(y==1){
                    cout<<"Move"<<t.top()<<"from S->T"<<endl;
                }
                else{
                    cout<<"Move"<<s.top()<<"from T->S"<<endl;
                }
            }
            else if(i%3==2){
                int y=transfer(s,d);
                if(y==1){
                    cout<<"Move"<<d.top()<<"from S->D"<<endl;
                }
                else {
                    cout<<"Move"<<s.top()<<"from D->S"<<endl;
                }
            }
            else{
                int y=transfer(t,d);
                if(y==1){
                    cout<<"Move"<<d.top()<<"from T->D"<<endl;
                }
                else{
                    cout<<"Move"<<t.top()<<"From D->T"<<endl;
                }
            }
            i++;
        }
    }
    cout<<"After all function call"<<endl;
    while(d.empty()!=true){
        cout<<d.empty()<<endl;
        d.pop();
    }
}

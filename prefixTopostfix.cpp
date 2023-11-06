# include<iostream>
# include<stack>
# include<string>
# include<algorithm>
using namespace std;
bool isOperand(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}
string prefixTopostfix(string prefix){
    stack<string>s;
    for(int i=prefix.length()-1;i>=0;i--){ //one change as conpared to postfix to infix
        if(isOperand(prefix[i])){
           string op(1, prefix[i]);
            s.push(op);
            
        }
        else{
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push("("+op1+prefix[i]+op2+")");//here is change as compared to postfix to infix
        }
    }
    return s.top();
}
int main(){
    string infix ,prefix;
    cout<<"enter prefix expression\n";
    cin>>prefix;
    infix=prefixTopostfix(prefix);
    cout<<"infix expression is\t"<<infix<<endl;
}

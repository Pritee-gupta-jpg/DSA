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
string  infixTopostfix(string postfix){
    stack<string>s;
    for(int i=0;i<postfix.length();i++){
        if(isOperand(postfix[i])){
           string op(1, postfix[i]);//it should be written in this way only otherwise it will give error.
            s.push(op);
            
        }
        else{
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push("("+op2+postfix[i]+op1+")");
        }
    }
    return s.top();
}
int main(){
    string infix ,postfix;
    cout<<"enter postfix expression\n";
    cin>>postfix;
    infix=infixTopostfix(postfix);
    cout<<"infix expression is\t"<<infix<<endl;
}

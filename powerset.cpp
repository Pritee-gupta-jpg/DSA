
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void power(char* set,int n){
    int power_size=pow(2,n);
    for(int i=0;i<power_size;i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<set[j];
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of element uou want to enter in array of character"<<endl;
    cin>>n;
    char set[n];
    cout<<"enter the array character one by one"<<endl;
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    power(set,n);
}

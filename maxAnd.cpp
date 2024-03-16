
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int checkBits(int pattern ,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if((pattern&arr[i])==pattern)
        count++;
    }
    return count;
}
int MaxAnd(int arr[],int n){
    int res=0,count;
    for(int i=31;i>=0;i--){
        count=checkBits(res|(1<<i),arr,n);
        if(count>=2){
            res=res|(1<<i);
        }
    }
    return res;
}
int main(){
    int n;
    cout<<"enter teh size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter th earray element one by one"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxAnd(arr,n)<<endl;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<25){
        cout<<"Grade:F"<<endl;
    }
    else if(n<=44){
        cout<<"Grade:E"<<endl;
    }
    else if(n<=49){
        cout<<"Grade:D"<<endl;
    }
    else if(n<=59){
        cout<<"Grade:C"<<endl;
    }
    else if(n<=69){
        cout<<"Grade:B"<<endl;
    }
    else{
        cout<<"Grade:A"<<endl;
    }
}
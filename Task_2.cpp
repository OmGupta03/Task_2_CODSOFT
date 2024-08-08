#include<iostream>
using namespace std;
int main(){

    int num1;
    cin>>num1;
    char op;
    cin>>op;
    int num2;
    cin>>num2;
    switch(op){
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        default:
            cout<<"Invalid Operator";
        
    }

}
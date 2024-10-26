#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    
    char op;
    cout<<"Enter your operation(+,-,*,/,%) ";
    cin>>op;

    switch (op){
        case '+':
        cout<<(a+b)<<endl;
        break;
        case '-':
        cout<<(a-b)<<endl;
        break;
        case '*':
        cout<<(a*b)<<endl;
        break;
        case '/':
        cout<<(a/b)<<endl;
        break;
        case '%':
        cout<<(a%b)<<endl;
        break;
        default:
        cout<<"Enter a valid operator"<<endl;
        break;
    }
    return 0; 
}

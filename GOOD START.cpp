#include<iostream>
using namespace std;
int main()
{
int a= 6;
int b= 8;

cout<<(a+b)<<endl;
cout<<(a-b)<<endl;
cout<<(a*b)<<endl;
cout<<(b/a)<<endl;
cout<<(b%a)<<endl;
cout<<(a<b)<<endl;
cout<<(a>b)<<endl;
cout<<(a<=b)<<endl;
cout<<(a>=b)<<endl;

bool exp1=true;
bool exp2=false;
cout<<(exp1&&exp2)<<endl; //0
cout<<(exp1||exp2)<<endl; //1
cout<<(!exp1)<<endl; //0
cout<<(!exp2)<<endl; //1

a += 2; //6+2=8
cout<<a<<endl;
b -= 3; //8-3=5
cout<<b<<endl;

cout<<(a<<1)<<endl; //100000 = 16
cout<<(b>>1)<<endl; //101 = 5

cout<<(a&b)<<endl; //100 = 4
cout<<(a|b)<<endl; //101 = 5

cout<<sizeof(a)<<endl;//4

char name = 'a';

cout<<sizeof(name)<<endl;//1

    bool flag;
    a==name? flag=true : flag=false;
    cout<<flag<<endl;//0

    cout<<(&a)<<endl;
    return 0;
}
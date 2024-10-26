#include<iostream>
using namespace std;
int main(){

    int a;
    cin>>a;

    int R=0;
    while(a>0){
        int L=a%10;
        R = R*10+L;
        a=a/10;
    }
    cout<<R<<endl;
    return 0;
}
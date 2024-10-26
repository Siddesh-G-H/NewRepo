#include<iostream>
using namespace std;
int main(){

    int a;
    cin>>a;

    int Fac=1;
    for(int i=1;i<=a;i++){
        Fac*=i;
    }
    cout<<Fac<<endl;
    return 0;
}
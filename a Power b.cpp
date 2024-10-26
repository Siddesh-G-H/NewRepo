#include<iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a;
    cin>>b;

    int Power=1;

    for(int i=1;i<=b;i++){
        Power*=a;
    }
    cout<<Power<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a[5],se=0,so=0;
    for(int i=0;i<5;i++) cin>>a[i];
    for(int i=0;i<5;i++) (a[i]%2==0?se:so)+=a[i];
    cout<<"Even sum: "<<se<<"\nOdd sum: "<<so;
}

#include<iostream>
using namespace std;
int main(){
    int a[5]; 
    for(int i=0;i<5;i++) cin>>a[i];
    int f=-1e9,s=-1e9;
    for(int i=0;i<5;i++){
        if(a[i]>f){s=f;f=a[i];}
        else if(a[i]>s) s=a[i];
    }
    cout<<"Largest: "<<f<<"\nSecond largest: "<<s;
}

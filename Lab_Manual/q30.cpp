#include<iostream>
using namespace std;
int main(){
    float a[10],total=0;
    for(int i=0;i<10;i++){cin>>a[i];total+=a[i];}
    cout<<"Total: "<<total<<"\nAverage: "<<total/10;
}

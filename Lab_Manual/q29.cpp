#include<iostream>
using namespace std;
int main(){
    float a[30],mn=1e9;
    for(int i=0;i<30;i++){cin>>a[i];if(a[i]<mn)mn=a[i];}
    cout<<"Min temperature: "<<mn;
}

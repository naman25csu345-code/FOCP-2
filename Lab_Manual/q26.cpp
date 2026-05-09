#include<iostream>
using namespace std;
int main(){
    float marks[5],total=0;
    for(int i=0;i<5;i++){cin>>marks[i];total+=marks[i];}
    cout<<"Total: "<<total<<"\nPercentage: "<<total/5<<"%";
}

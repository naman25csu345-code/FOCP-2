#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string line,word,result="";
    getline(cin,line);
    int words=0,digits=0,specials=0;
    for(char c:line) if(isdigit(c)) digits++; else if(!isalpha(c)&&c!=' ') specials++;
    istringstream ss(line);
    while(ss>>word){words++;result+=(result.empty()?"":"")+word+" ";}
    if(!result.empty()) result.pop_back();
    result[0]=toupper(result[0]);
    for(int i=1;i<result.size();i++) result[i]=tolower(result[i]);
    cout<<"Normalized: "<<result<<"\n";
    cout<<"Words: "<<words<<"\nDigits: "<<digits<<"\nSpecial chars: "<<specials<<"\n";
    bool valid=true;
    for(char c:result) if(!isalpha(c)&&!isdigit(c)&&c!=' '){valid=false;break;}
    cout<<(valid?"Valid string":"Invalid string");
}

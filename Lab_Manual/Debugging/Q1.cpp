#include <iostream>
#include <string> //added string header
using namespace std;

int main()
{
    string a, b; // write small s
    cout << "Enter two strings: "; //changed operator from << to <<
    cin >> a; // changed operator from << to >>
    cin >> b; // same here

    int count[26] = {0};

    for(int i=0; i<a.length(); i++) // addec ()
    {
        count[a[i]-'a']++;
        count[b[i]-'a']--;
    }

    for(int i=0; i<26; i++)
    {
        if(count[i]!=0){ // remove ; and added {}
            cout << "Not Anagram";
            return 0; // added return statement here
        }
    }
    cout << "Anagram";
    
    return 0;
}

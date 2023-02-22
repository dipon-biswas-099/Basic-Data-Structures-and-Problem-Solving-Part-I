#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "I am programmerr";
    s1.pop_back(); // last element/ character delete .
    cout<<s1<<endl;



    for(int i=0;i<s1.size();i++)
    {
        s1[i]=s1[i]+1; // add 1 with ascii value .
    }
    cout<<s1<<endl;



    string s ="abcd";
    s.erase(s.begin());  // for deleting first element. character
     cout<<s<<endl;

    s.erase(s.begin()+2);  // for deleting second element. character

    cout<<s<<endl;



    return 0;
}

//https://codebuddy.co.in/problems/DSTNCTSTR

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    set<string>s;
    string st;
    for(int j=0;j<n;j++)
    {
        cin>>st;
        s.insert(st);
    }
    auto it=s.begin();
    for(it;it!=s.end();it++)
    {
    cout<<*it<<endl;
    }
        s.clear();
}        
}

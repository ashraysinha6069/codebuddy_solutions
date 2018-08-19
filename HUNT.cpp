//https://codebuddy.co.in/problems/HUNT

#include <iostream>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main()
{
    int N,ctr=0;
    string k;
    cin>>N;
    map <string,int> mp;
    map <string,int>::iterator it;
    
    for (int i=1;i<=N;i++)
    {
        int x;
        cin>>k;
        mp[k]++;
        for (it=mp.begin();it!=mp.end();it++)
        {
        	x=(it->second);
        	if (x>ctr)
        	{
        		ctr++;
        		cout<<ctr<<" "<<it->first<<endl;
        	}
        }
        
    }
    return 0;
    
}

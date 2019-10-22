#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define sz(s) (int)s.size()
#define pii pair<int,int>
#define piii pair< pii,int >
#define piiii pair< pii,pii >
#define pss pair <string,string> 
#define psssc pair < pair<string,int>, string > //state,cost,swap
 
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define rall(v) v.rbegin(),v.rend()
//#define endl '\n'
#define matrix vector<vector<int> >
#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define NAYAN freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define N 100005
#define mod 1000000007
#define inf 1e18
 
 
 
 
int32_t main()  
{
    boost
    #ifndef ONLINE_JUDGE 
    NAYAN
    #endif
    vector <int> v[101];
    int cpy;
    int i,j;
    for(i=1;i<=100;i++)
    {
        for(j=0;j<7;j++)
        {
            int b=(i>>j)&1;
            v[i].pb(b);
        }
    }
 
    vector <int> v1[101],v2[101];
 
    for(i=1;i<=100;i++)
    {
        for(j=0;j<7;j++)
        {
            v1[i].pb(1);
        }
        for(j=0;j<7;j++)
        {
            v1[i].pb(v[i][j]);
        }
        for(j=0;j<7;j++)
        {
            v2[i].pb(v[i][j]);
        }
        for(j=0;j<7;j++)
        {
            v2[i].pb(1);
        }
    }
 
    vector <int> v3,v4;
    int sum=0,tmp;
    for(i=1;i<=100;i++)
    {
        sum=0;
        for(j=0;j<14;j++)
        {
            if(v1[i][j])
                sum+=(1<<j);
        }
        v3.pb(sum);
 
        sum=0;
        for(j=0;j<14;j++)
        {
            if(v2[i][j])
                sum+=(1<<j);
        }
        v4.pb(sum);
 
    }
    cout << "? ";
    for(i=0;i<100;i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    
 
    int x,y;
 
    cin >> x;
 
    cout << "? ";
    for(i=0;i<100;i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    
 
    cin >> y;
 
    int ans=0;
 
    for(i=7;i<14;i++)
    {
        int b=(y>>i)&1;
        if(!b)
            ans+=(1<<i);
    }
 
    for(i=0;i<7;i++)
    {
        int b=(x>>i)&1;
        if(!b)
            ans+=(1<<i);
    }
 
    cout <<"! " << ans << endl;
 
 
 
}
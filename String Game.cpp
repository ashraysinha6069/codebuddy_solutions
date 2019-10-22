#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define sz(s) (int)s.size()
#define pii pair<int,int>
#define piii pair< int,pair<int,int> >
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
#define matrix vector<vector<int> >
#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define NAYAN freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define N 6005
#define mod 1000000007
#define inf 1e17
 
int dp[N][N];
 
/*int solve(int i,int j)
{
    if(i<=j)
        return dp[i][j]=0;
    if(dp[i][j]!=-1)
        return dp[i][j];
}*/
 
int32_t main()  
{
    boost
    #ifndef ONLINE_JUDGE
    NAYAN
    #endif
   
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
       
        cin >> s;
        s="*"+s;
        int i,j;
        int n;
        n=s.length()-1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                dp[i][j]=0;
            }
        }
 
 
 
        for(i=2;i<=n;i++)
        {
            for(j=1;(i+j-1)<=n;j++)
            {
                int k=j+i-1;
                dp[j][k]=dp[j+1][k-1]+abs((s[j]-'a')-(s[k]-'a'));
            }
        }
 
    
 
        int q;
        cin >> q;
        while(q--)
        {
            int x,y,val;
            cin >> x >> y >> val;
 
            int len = y-x+1;
            if(len&1){
            int l,r;
            l=0;
            r=len/2;
            int mid;
            int ans=0;
            int pivot = (y+x+1)/2;
            while(l<=r)
            {
                mid = l+(r-l)/2;
                if(dp[pivot-mid][pivot+mid] <= val)
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
 
            cout << 2*ans+1 << endl;
       }
       else
       {
            int l,r;
            l=1;
            r=len/2;
            int mid;
            int ans=0;
            int pivot = (y+x+1)/2;
            while(l<=r)
            {
                mid = l+(r-l)/2;
                if(dp[pivot-mid][pivot+mid-1] <= val)
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
 
            cout << 2*ans << endl;
                    
       }
        }
    }
 
}
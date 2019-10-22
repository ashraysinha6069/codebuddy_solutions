#include<bits/stdc++.h>
#define pb push_back
#define rep(a,b,c) for(int a=(int)b;a<(int)c;a++)
#define repe(a,b,c) for(int a=(int)b;a<=(int)c;a++)
#define repk(a,b,c,k) for(int a=(int)b;a<(int)c;a+=(int)k)
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define modu 998244353
#define int long long int
#define pii pair<int,int>
#define piii pair<int,pair<int,int>>
#define ful(a) a.begin(),a.end()
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define clr(x)  memset((x),0,sizeof(x))
#define neg1(x) memset((x),-1,sizeof(x))
#define pos1(x) memset((x),1,sizeof(x)) 
using namespace std;
#define MAXN 100003
#define MAXW 27
int em(int x,int Mod,int n)
{
    if(n==0)
    return 1ll;
    else if(n%2==0)
    return em((x%Mod*x%Mod)%Mod,Mod,n/2)%Mod;
    else
    return (x%Mod*em((x%Mod*x%Mod)%Mod,Mod,(n-1)/2))%Mod;
}
int32_t main()  
{  
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); 
        freopen("output.txt","w",stdout);
    #endif
    int t,i,j,k,l;
    cin>>t;
    double m,d,frac;
    frac=((double)1.0)/3.0;
    double pi=acos(-1.0);
    int cnt=1;
    while(t--){
        cout << "Case " << cnt++ << ": ";
        cin>>m>>d;
        double v=m/d;
        double mul,pre;
        mul=4;
        pre=((double)3.0)/4.0;
        double r=pow(((pre*v)/pi),frac);
        double ans=mul*pi*r*r;
        cout<<fixed<<setprecision(4)<<ans<<"\n";
    }
}  
close
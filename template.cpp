 #include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define	ins insert
#define BIT(x,i) 	((1LL<<i)&x)
#define all(x) x.begin(),x.end()
#define pll 		pair<ll,ll>
#define pii 		pair<int,int>
#define ll long long
#define ull unsigned long long
#define name "file"
const int mod=int(1e9+7);
int pi[8]={0,0,1,-1,1,1,-1,-1};
int pj[8]={-1,1,0,0,1,-1,1,-1};
template<class A,class B> inline void add(A &a,B b) { a+=b;while (a>=mod) a-=mod;}
template<class A,class B> inline void sub(A &a,B b) { a-=b;while (a>=mod) a-=mod;while (a<0) a+=mod;}
template<class A,class B> bool _max(A &a,B b) {if (a<b) return a=b,1; return 0;}
template<class A,class B> bool _min(A &a,B b) {if (a>b) return a=b,1; return 0;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	if (fopen(name".inp","r")) 
		{
			freopen(name".inp","r",stdin);
			freopen(name".out","w+",stdout);
		}
}

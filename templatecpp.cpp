#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vi;
typedef vector<pll> vpll;
typedef unordered_map <ll,ll> umap ;
//#pragma GCC optimize "trapv"
#define loop(i,a,b) for(ll i=a ;i<b;i++)
#define For(i,n) for(int i=0;i<(ll)n;i++)
#define Rev(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,n) for(int i=1;i<=n;++i)
#define F first
#define S second
#define pb push_sback
#define em emplace_back
#define all(v) (v).begin(),(v).end()
#define mems(x, y) memset(x, y, sizeof(x))
#define sz(v) (v).size()
#define mp(a,b) make_pair(a,b)
#define pf(n) cout<<n<<"\n";
#define pff(n) cout << n << " " ;
#define PI 3.141592653589793
long const M=1e9+7;
const long mxN =1e5+2 ;
const long mxNN =1e6+2 ;
int dist[mxN];     // array storing distances from refernce node
bool visited[mxN] ;   // keeps track of the found nodes
vector<pii> graph[mxN] ;   // adjacency list

void solve(){

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //solve() ;
    ll t ; cin >> t ; while(t--)solve();
	return 0;
}

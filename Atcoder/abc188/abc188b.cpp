#include <bits/stdc++.h>

using namespace std;
#define ms(x,a) memset(x,a,sizeof x)
typedef long long ll;
const int mod=1e9+7, seed=131, MAXN=1e5+1;

int a[MAXN], b[MAXN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    for (int i=1;i<=n;++i) cin >> a[i];
    for (int i=1;i<=n;++i) cin >> b[i];
    ll tot=0;
    for (int i=1;i<=n;++i) tot+=a[i]*b[i];
    cout << (tot==0?"Yes":"No") << '\n';
}
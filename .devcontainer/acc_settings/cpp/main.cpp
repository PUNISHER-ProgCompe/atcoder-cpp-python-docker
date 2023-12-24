#include <bits/stdc++.h>

#pragma region Macro
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repr(i, n) for(int i = n-1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define SORT(v) sort(v.begin(), v.end())
#define ALL(v) (v).begin(),(v).end()
#define pb(a) push_back(a)
#define eb(a) emplace_back(a)
#define vi vector<int>
#define vvi vector<vector<int>>
#define chmax(x,y) (x = max(x,y))
#define chmin(x,y) (x = min(x,y))

using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#include <atcoder/all>
using namespace atcoder;
#pragma endregion

#pragma region Debug
// コンパイル時、エイリアス「debug」を使用 --> マクロが使えるように
void debug_out() { cout << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cout << H << " ";
	debug_out(T...);
}

#ifdef _DEBUG
#define debug(...) debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif
#pragma endregion

void solve(){
	#define int ll
	// ここに処理を記述
	// コンパイル時はエイリアス「gpp」--> c++20でコンパイル
	
	return;
}

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	
	solve();
	return 0;
}
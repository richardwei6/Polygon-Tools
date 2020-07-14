/*
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
#include <limits>
#include <list>
#include <memory>
#include <stack>
#include <iterator>
#include <queue>
#include <numeric>
#include <bitset>
#include <iomanip>
#include <cstring>
#include <Windows.h>
#include <cstdlib>
#include <random>
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define ld long double
#define ull unsigned long long
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

ll RNG(ll a, ll b) {
	random_device rd;   // non-deterministic generator
    mt19937 gen(rd());  // to seed mersenne twister.
    uniform_int_distribution<> dist(a, b); // distribute results between 1 and 6 inclusive.
	return dist(gen);
}

void solve(ll a, ll b) {
	random_device rd;   // non-deterministic generator
    mt19937 gen(rd());  // to seed mersenne twister.
    uniform_int_distribution<> dist(a, b); // distribute results between 1 and 6 inclusive.
	ll x = dist(gen);
	cout << "gen";
	cout << " " << x << " ";
	random_device rd2;   // non-deterministic generator
    mt19937 gen2(rd2());  // to seed mersenne twister.
    uniform_int_distribution<> dist2(a, b); // distribute results between 1 and 6 inclusive.
	ll y = dist2(gen2);
	cout << y << " ";
	cout << x+y;
	cout << " > $" << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		solve(1, 30000);
	}
	return 0;
}


/**/

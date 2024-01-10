#include <bits/stdc++.h>
#include <atcoder/all>
#define rep1(i, n) for (decay_t<decltype(n)> i = 0; i < (n); ++i)
#define rep2(i, a, b) for (decay_t<decltype(b)> i = (a); i < (b); ++i)
#define rrep1(i, n) for (decay_t<decltype(n)> i = (n - 1); i >= 0; --i)
#define rrep2(i, a, b) for (decay_t<decltype(a)> i = (a - 1); i >= (b); --i)
#define _overload2(_1, _2, _3, name, ...) name
#define rep(...) _overload2(__VA_ARGS__, rep2, rep1)(__VA_ARGS__)
#define rrep(...) _overload2(__VA_ARGS__, rrep2, rrep1)(__VA_ARGS__)
#define ALL(x) (x).begin(), (x).end()
using namespace std;
using namespace atcoder;
using ll = long long;
using ul = unsigned long long;
using mint = modint998244353;

template<typename T> bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
template<typename T> constexpr auto INF = numeric_limits<T>::max() / 2;

struct Init {
    Init() {
        cin.tie(nullptr)->sync_with_stdio(false);
        cout << fixed << setprecision(16);
    }
} init;

int main() {
    

    return 0;
}

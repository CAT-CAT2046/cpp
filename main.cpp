#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include<atcoder/all>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
using ll=long long;
using ld=long double;
#define double long double
#define int long long
const int INF=100000000000000000000;
template<typename T,typename Ary>
T at(const Ary &A,const T x){
  // 0-indexed
    return *next(begin(A),x);
}
bool compare_by_b(pair<int,int> &a,pair<int,int> &b){
    if(a.second!=b.second){
        return a.second<b.second;
    } else{
        return a.first<b.first;
    }
}
constexpr int MOD=1000000007;
#ifdef NCCR
constexpr int MMM=510000;

long long fac[MMM],finv[MMM],inv[MMM];

// テーブルを作る前処理
void COMinit(){
    fac[0]=fac[1]=1;
    finv[0]=finv[1]=1;
    inv[1]=1;
    for(int i=2; i<MMM; i++){
        fac[i]=fac[i-1]*i%MOD;
        inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;
        finv[i]=finv[i-1]*inv[i]%MOD;
    }
}

// 二項係数計算
long long COM(int n,int k){
    if(n<k) return 0;
    if(n<0||k<0) return 0;
    return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;
}
#endif
template<typename T>
vector<T> divisor(T n){
  //約数列挙
    T ssq=ceil(sqrt(n));
    vector<T> ret;
    ret.reserve(ssq);
    for(T i=1; i<=ssq; i++){
        if(n%i==0){
            ret.push_back(i);
            if(i*i!=n) ret.push_back(n/i);
        }
    }
    ret.shrink_to_fit();
    sort(ret.begin(),ret.end());
    return ret;
}
bool comppp(pair<string,pair<int,int>> &a,pair<string,pair<int,int>> &b){
    if(a.first!=b.first){
        return a.first<b.first;
    } else{
        return a.second.first>b.second.first;
    }
}
template <typename T>
vector<T> compress(vector<T> &X){
    // ソートした結果を vals に
    vector<T> vals=X;
    sort(vals.begin(),vals.end());
    // 隣り合う重複を削除(unique), 末端のゴミを削除(erase)
    vals.erase(unique(vals.begin(),vals.end()),vals.end());
    // 各要素ごとに二分探索で位置を求める
    for(int i=0; i<(int)X.size(); i++) {
        X.at(i).first=lower_bound(vals.begin(),vals.end(),X.at(i))-vals.begin();
    }
    return vals;
}
using namespace atcoder;
constexpr double PI=acos(-1);
signed main(void){
    #ifdef NCCR
    COMinit();
    #endif
    srand((unsigned)time(NULL));
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
}
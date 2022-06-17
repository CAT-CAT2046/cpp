#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define double long double
#define int long long
const int INF=numeric_limits<int>::max();
const int MINF=numeric_limits<int>::min();
template<typename T,typename Ary>
T at(const Ary& A,const T x){
    //0-indexed
    return *next(begin(A),x);
}
#if 0
vector<vector<int>>nCrdp(51,vector<int>(51,0));//サイズは変える
int nCr(int n,int r)
{
       if(n==r) return nCrdp.at(n).at(r) = 1;
       if(r==0) return nCrdp.at(n).at(r) = 1;
       if(r==1) return nCrdp.at(n).at(r) = n;
       if(nCrdp.at(n).at(r)) return nCrdp.at(n).at(r);
       return nCrdp.at(n).at(r) = nCr(n-1,r) + nCr(n-1,r-1);
}
#endif
template<typename T>
vector<T> divisor(T n){
    //約数列挙
    T ssq=ceil(sqrt(n));
    vector<T>ret;
    ret.reserve(ssq);
    for(T i=1;i<=ssq;i++){
        if(n%i==0){
            ret.push_back(i);
            if(i*i!=n)ret.push_back(n/i);
        }
    }
    ret.shrink_to_fit();
    sort(ret.begin(),ret.end());
    return ret;
}
signed main(void){
    //[i]->.at(i)
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
}
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define double long double
#define int long long
template<typename T,typename Ary>
T at(const Ary& A,const T x){
    //0-indexed
    return *next(begin(A),x);
}
signed main(void){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
}
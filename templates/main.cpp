#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <numeric>

#ifdef WAFDAYO
#include "dbg.hpp"
#else
#define dbg(...) {}
#endif

/*** utilities ***/
struct scan{template<typename T>operator T(){T t;std::cin>>t;return t;}};
template<bool up>struct Iter{int i;Iter(int j):i(j){}
int operator*(){return i;}void operator++(){i+=(up?1:-1);}
bool operator!=(const Iter& r){return i!=r.i;}};
template<bool up>struct Range{int l,r;
Range(int a):Range(0,a){}Range(int a,int b):l(a),r(std::max(a,b)){}
Iter<up> begin(){return Iter<up>(up?l:r-1);} Iter<up> end(){return Iter<up>(up?r:l-1);}};
typedef Range<true> range;
typedef Range<false> revrange;
char splf(int i,int n){return(i+1<n)?' ':'\n';};

/*** types ***/
typedef signed long long i64;
typedef unsigned long long u64;

/*** constants ***/
// const i64 inf = (i64)1.05e18;
// const int inf = (int)1.05e9;

using namespace std;


int main() {

    return 0;
}

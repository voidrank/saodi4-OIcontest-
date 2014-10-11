#ifdef unix
#define LLD "%lld"
#else
#define LLD "%I64d"
#endif

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#define ll long long
#define ld long double
#define pb push_back
#define ci const int&
#define inf 1000002012
#define Maxn
#define Maxm
#define eps 0.000000001

using namespace std;

ld x;
ll N;

int main(){
	freopen("success.in","r",stdin);freopen("success.out","w",stdout);
	
	cin>>x>>N;
	long double p = x, sum = 0;
	for ( int i = 1; i <= N&& p/i > eps; ++i )
	{
		sum += p/i;
		p = p*x;
	}
	
	printf( "%.4f", (double)sum );
	
	fclose(stdin);fclose(stdout);
	return 0;
}
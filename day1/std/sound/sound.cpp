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

using namespace std;

int N, M, p = 1;
const int MaxInt = 65536;

int main(){
	freopen("sound.in","r",stdin);freopen("sound.out","w",stdout);
	
	scanf( "%d%d", &N, &M );
	
	for ( int i = 0; i < M; ++i ) p <<= 1;
	
	for ( int i = 1; i < N; ++i )
	{
		int x;
		scanf( "%d", &x );
		int p1 = x/p, p2 = p1 + 1;
		if ( abs( p1 * p - x ) >= abs( p2 * p - x ) )
		printf( "%d ", p2 * p );
		else printf( "%d ", p1 * p );
	}

	int x;
	scanf( "%d", &x );
	int p1 = x/p, p2 = p1 + 1;
	if ( abs( p1 * p - x ) >= abs( p2 * p - x ) )
	printf( "%d", p2 * p );
	else printf( "%d", p1 * p );
	
	fclose(stdin);fclose(stdout);
	return 0;
}
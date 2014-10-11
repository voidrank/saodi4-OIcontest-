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
#define ld double
#define pb push_back
#define ci const int&
#define inf 1000002012
#define Maxn 1013
#define Maxm

using namespace std;

int N, M, Q;
ld pi[Maxn];
ld A[Maxn][Maxn], B[Maxn][Maxn];
ld wna[Maxn], wnb[Maxn], *f = wna, *p = wnb;
int O[Maxn];

void init()
{
	scanf( "%d%d%d", &N, &M, &Q );
	
	for ( int i = 0; i < N; ++i ) scanf( "%lf", pi+i );
	for ( int i = 0; i < N; ++i ) 
	for ( int j = 0; j < Q; ++j )
	scanf( "%lf", &A[i][j] );	
	for ( int i = 0; i < N; ++i ) 
	for ( int j = 0; j < N; ++j )
	scanf( "%lf", &B[i][j] );	
	for ( int i = 0; i < M; ++i )
	scanf( "%d", O+i );
}

void work()
{
	for ( int i = 0; i < N; ++i )
		p[i] = pi[i]*A[i][O[0]];
	
	for ( int i = 1; i < M; ++i )
	{
		for ( int j = 0; j < N; ++j )
		{
			f[j] = 0;
			for ( int k = 0; k < N; ++k )
			f[j] += p[k]*B[k][j]*A[j][O[i]];
		}
		swap( f, p );
	}
	ld sum = 0;
	for ( int i = 0; i < N; ++i )
	sum += p[i];
	printf( "%.4f", (double)sum );
}

int main(){
	freopen("hmm.in","r",stdin);freopen("hmm.out","w",stdout);
	
	init();
	work();
	
	fclose(stdin);fclose(stdout);
	return 0;
}
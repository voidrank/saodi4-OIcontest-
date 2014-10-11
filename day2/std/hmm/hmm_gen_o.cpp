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
}

int gen( ld *s, int N )
{
	ld p = 1.0*rand()/(1<<15);
	for ( int i = 0; i < N; ++i )
	{
		if ( s[i] > p ) return i;
		else p -= s[i];
	}
	return N-1;
}

void work()
{
	int Now = gen( pi, N );
	for ( int i = 0; i < M; ++i )
	{
		printf( "%d ", gen(A[Now],Q) );
		Now = gen(B[Now],N);
	}
}

int main(){
	freopen("hmm.in","r",stdin);freopen("hmm.out","w",stdout);
	
	srand(time(0));
	init();
	work();
	
	fclose(stdin);fclose(stdout);
	return 0;
}
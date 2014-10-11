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
#define it vector<int>::iterator
#define Maxn 102013
#define Maxm

using namespace std;

bool found;
int N, len, p;
int dfs[Maxn], bfs[Maxn], pos[Maxn], son[Maxn];
int f[Maxn], length[Maxn];
ll sum, ct;
vector<int> V, E[Maxn]; 

struct disjoint_set
{
	int f[Maxn];
	inline int&getfather( int x )
	{
		if ( f[x] != x ) f[x] = getfather(f[x]);
		return f[x];
	}
	inline int&operator[]( int x )
	{
		return getfather(x);
	}
} fa;

void init()
{
		
	scanf( "%d", &N );
	for ( int i = 1; i <= N; ++i ) 
	{
		scanf( "%d", dfs + i );
	}
	for ( int i = 1; i <= N; ++i ) 
	{
		int x;
		scanf( "%d", &x );
		bfs[x] = i;
	}
	for ( int i = 1; i <= N; ++i ) 
	{
		dfs[i] = bfs[dfs[i]];
		pos[dfs[i]] = i;
	}
	
	for ( int i = 1; i <= N; ++i ) fa.f[i] = i;
	for ( int i = 2; i <= N; ++i )
	if ( dfs[i] > dfs[i-1] + 1 )
	{
		for ( int j = dfs[i-1]; j < dfs[i]; ++j )
		{
			int a = fa[j];
			fa[a] = fa[dfs[i-1]+1];
		}
	}
}

void travel( int x )
{
	length[x] = 0;
	if ( x != dfs[p] )
	{
		found = 0;
		return;
	}
	else ++p;
	for ( it i = E[x].begin(); i != E[x].end(); ++i )
	{
		travel( *i );
		if ( !found ) return;
		len = max( len, length[x] + length[*i] );
		length[x] = max( length[x], length[*i] );
	}
	++length[x];
}


void GETMAX()
{
	for ( int i = 1; i <= N; ++i ) E[i].erase( E[i].begin(), E[i].end() );
	for ( int i = 1; i <= N; ++i ) E[f[i]].pb( i );
	len = 0;
	found = 1;
	p = 1;
	travel( 1 );
	if ( !found ) return;
	sum += len; ++ct;
}

void DFS( int x, int father )
{
	if ( x == N + 1 )
	{
		GETMAX();
		return;
	}
	for ( int i = father; i < x; ++i )
	{
		f[x] = i;
		DFS( x + 1, i );
	}
}

void work()
{
	V.pb( 1 ); V.pb( 2 );
	DFS( 3, 1 );
}

int main(){
	freopen( "tree.in", "r", stdin ); freopen( "tree_p.out", "w", stdout );

	init();
	f[2] = 1;
	work();
	printf( "%.3f", (double)1.0*sum/ct );
	
	fclose(stdin);fclose(stdout);
	return 0;
}
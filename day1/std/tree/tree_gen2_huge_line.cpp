#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#define ll long long
#define pb push_back
#define ci const int&
#define it vector<int>::iterator
#define inf 1000002012
#define Rep(i,n) for(int i=1;i<=n;++i)
#define rep(i,n) for(int i=0;i<n;++i)
#define Maxn 102013
#define Maxm

using namespace std;

int cnt, N = 10;
int s[Maxn];
char ch;
int f[Maxn];
vector<int> E[Maxn];
queue<int> V;

void travel( int x )
{
	printf( "%d ", x );
	for ( it i = E[x].begin(); i != E[x].end(); ++i )
	travel( *i );
}

void bfs()
{
	V.push( 1 );
	while ( V.size() )
	{
		int x = V.front(); V.pop();
		printf( "%d ", x );
		for ( it i = E[x].begin(); i != E[x].end(); ++i )
		V.push( *i );
	}
}

int main(){
	srand(time(0));
	while(1)
	{
		freopen( "tree.in", "w", stdout );
		N = 9755;
		printf( "%d\n", N );
		for ( int i = 1; i <= N; ++i ) s[i] = i;
		for ( int i = 1; i <= N; ++i )
		{
			int x = rand()*10%N+1;
			int y = rand()*10%N+1;
			swap( s[x], s[y] );
		}
		for ( int i = 1; i <= N; ++i ) printf( "%d ", s[i] );
		for ( int i = 1; i <= N; ++i ) printf( "%d ", s[i] );
		return 0;
	}
	return 0;
}
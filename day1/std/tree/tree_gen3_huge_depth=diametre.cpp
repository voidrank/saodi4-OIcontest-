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

int cnt, N = 7000;
int dfs[Maxn], bfs[Maxn], pos[Maxn];
int f[Maxn];
vector<int> E[Maxn];
vector<int> V;

int main(){
	srand(time(0));
	while(1)
	{
		freopen("tree.in","w",stdout);
		
		dfs[1] = 1; dfs[2] = 2; int  p = 3;
		pos[1] = 1; pos[2] = 2;
		for ( int i = 3; i <= N; ++i, ++p )
		{
			dfs[p] = i;
			pos[i] = p;
			int t = rand()%(rand()%(rand()%10+10)+1);
			if ( i + t <= N )
			{
				for ( int j = t; j; --j )
				{
					V.pb( j + i );
				}
				i += t;
			}
			else
				int bp = 1;
		}
		
		for ( ; p <= N; ++p )
		{
			dfs[p] = V.back();
			pos[V.back()] = p;
			V.pop_back();
		}
		
		for ( int i = 1; i <= N; ++i ) bfs[i] = i;
		
		for ( int i = 1; i <= N; ++i )
		{
			int x = rand()%N+1, y = rand()%N+1;
			int a = bfs[x], b = bfs[y];
			swap( bfs[x], bfs[y] );
			swap( dfs[pos[a]], dfs[pos[b]] );
			swap( pos[a], pos[b] );
		}
		
		printf( "%d\n", N );
		for ( int i = 1; i <= N; ++i ) printf( "%d ", dfs[i] ); puts("");
		for ( int i = 1; i <= N; ++i ) printf( "%d ", bfs[i] ); puts("");
		fclose(stdout);
		return 0;
	}
	return 0;
}
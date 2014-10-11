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
#define Mod 1000000009
#define Maxn
#define Maxm

using namespace std;

ll N,P,d;

struct Matrix
{
	ll s[3][3];
	Matrix() 
	{
		memset( s, 0, sizeof(s) );
	}
	Matrix operator*( Matrix p )
	{
		Matrix E;
		for ( int k = 0; k < 3; ++k )
		for ( int i = 0; i < 3; ++i )
		for ( int j = 0; j < 3; ++j )
		(E.s[i][j] += (s[i][k] * p.s[k][j])%Mod)%=Mod;
		return E;
	}
} p, T;

void POW( ll depth )
{
	if ( depth == 1 ) T = p;
	else
	{
		POW( depth>>1 );
		T = T * T;
		if ( depth&1 )
		T = T * p;
	}
}

int main(){
	freopen("matrix.in","r",stdin);freopen("matrix.out","w",stdout);
	
	cin>>N>>P>>d;
	P%=Mod; d%=Mod;
	p.s[0][0] = 1; p.s[0][1] = 1; 
	p.s[1][1] = 1; p.s[1][2] = (Mod+(2*d%Mod*P%Mod + 2*d%Mod*d%Mod*N%Mod - 2*d%Mod*d%Mod)%Mod)%Mod;
	p.s[2][2] = 1;
	
	POW( N );
	
	ll pro1 = (P*P%Mod + (N-1)%Mod*d%Mod*P%Mod)%Mod;
	
	cout<< (pro1*T.s[0][1]%Mod + T.s[0][2] + T.s[0][3])%Mod;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

ifstream fin("matrix.in");
ofstream fout("matrix.out");
#define cin fin
#define cout fout

unsigned long long n1,p1,d1;

unsigned long long n,p,d;

int main()
{
    cin>>n1>>p1>>d1;
    
    unsigned long long n=n1%1000000009;
    unsigned long long p=p1%1000000009;
    unsigned long long d=d1%1000000009;
    
    unsigned long long s=(p+(n-1)*d%1000000009)%1000000009;

    
    cout<<(
    n*s%1000000009*s%1000000009
    )<<endl;
    
    
    
    //system("PAUSE");
    return 0;
}


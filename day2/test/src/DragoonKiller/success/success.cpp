#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>

using namespace std;

ifstream fin("success.in");
ofstream fout("success.out");
#define cin fin
#define cout fout

long long n;
double x;
double sum=0;
        
    
int main()
{
    cout<<fixed;
    cout.precision(4);
    
    cin>>x>>n;
    double s=1;
    for(long long i=1;i<=n;i++)
    {
        s*=x;
        
        if(s<0.0000001)break;
        
        sum+=s/i;
        
    }
    
    cout<<sum<<endl;
    
    //system("PAUSE");
    return 0;
}

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define MAXN 1000005

int a[MAXN]

int main()
{
    int n;

    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];

    for(int i=1;i<=n;i++)
    for(int j=1;j<=n-i;j++)
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);

    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<endl;	

	return 0;
}

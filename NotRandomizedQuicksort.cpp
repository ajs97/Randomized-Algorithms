#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdlib.h>
#include <cstdio>
using namespace std;
#define MAXN 500005
int a[MAXN];
int n;

int partition(int l,int r)
{
	int pivot=a[l];
	while(l<r)
	{
		while(a[l]<=pivot&&l<=r)
			l++;
		while(a[r]>pivot&&r>l)
			r--;
        if(l<=r){swap(a[l],a[r]); 
             
                  } 
        
	}

    return l-1;
}


void quicksort(int l,int r)
{
	if(l>=r)
	{
     return ;
	} 

	int pivot=a[l];
    int p=partition(l,r);

  //  cout<<"Pivot"<<pivot<<" "<<p<<endl;
   
   
    swap(a[l],a[p]);
    
    quicksort(l,p-1);
    quicksort(p+1,r); 
}

int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
  /*
  **
  **
  **Notice the commented out random_shuffle() that gives the probabilistic guarantee for quicksort
  **
  */

   // random_shuffle(a+1,a+n+1);
	
	//for(int i=1;i<=n;i++)
    //cout<<a[i]<<" ";
	//cout<<endl;

	quicksort(1,n);

	for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
#include<iostream>
using namespace std;
void rotate(int a[],int n)
{
	int temp=a[0];
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    for(int i=1;i<=k;i++)
    {
    	rotate(a,n);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
    return 0;
}


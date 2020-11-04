#include<iostream>
using namespace std;
int minimumswaps(int arr[ ],int n){
	int count=0;
	int i=0;
	while(i<n)
  {
		if(arr[i]!=i+1){
		while(arr[i]!=i+1){
			int temp=arr[arr[i]-1];
			arr[arr[i]-1]=arr[i];
			arr[i]=temp;
			count++;
		}
	}
	i++;
}
return count;
}
int main()
{
	int n;
	cout<<"enter the number of elements of the array:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"minimum number of swaps:"<<minimumswaps(arr,n);
	
}

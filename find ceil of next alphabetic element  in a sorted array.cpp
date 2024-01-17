//c++ code:
#include<iostream>
using namespace std;
//Search in almost sorted array
char BinarySearch(char arr[],int n,char target)
{
	int start=0;
	int end=n-1;
	int mid;
	char Nextele;
	while(start<=end)
	{
		mid = start + (end-start)/2;
		if(arr[mid]==target)
		start=mid+1;
		else if(arr[mid]>target)
		{
		end = mid-1;
		Nextele=arr[mid];
	    }
		else if(arr[mid]<target)
		start=mid+1;
    }
    return Nextele;
}
int main()
{
	
	
		int i,n;
		cin>>n;
		char arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		char key;
        cout<<"enter a key";
		cin>>key;
		char res=BinarySearch(arr,n,key);
		cout<<res<<endl;
	
}
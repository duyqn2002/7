#include<iostream>
using namespace std;
int main()
{
	int n,i,count1=0,count2=0,b;
	cin>>n;
	int arr[n];
	for(i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	};
	
	for(i=0;i<=n-1;i++)
	{
		for(int k=0;k<=n-1;k++)
		{
			if(k!= i)
			{
				if(arr[i]==arr[k])
				{
					arr[i]=0;
					arr[k]=0;
				};
				
			};
		};
	};
	
	for(i=0;i<=n-1;i++)
	{
		b=arr[i];
		if(b !=0)
		count1++;
	};
	count2=count1+1;
	cout<<count2;
	return 0;
}

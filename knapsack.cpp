#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int capacity,int n)
{
	if(n==0||capacity==0)
	{
		return 0;
	}

	if(wt[n-1]<=capacity)
	{
		return max(val[n-1]+knapsack(wt,val,capacity-wt[n-1],n-1),knapsack(wt,val,capacity,n-1));
	}
	else if(wt[n-1]>capacity)
	{
		return knapsack(wt,val,capacity,n-1);
	}
}
int main()
{
   #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout);
  #endif


	int n,capacity;
	cin>>n>>capacity;
	int wt[n],val[n];
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>val[j];
	}
	cout<<knapsack(wt,val,capacity,n);
}
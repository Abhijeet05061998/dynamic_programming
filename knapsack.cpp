#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int capacity,int n)
{
    //jo value change ho rha usi ko matrix ka size bnate hai memoization me
	int t[n+1][capacity+1];
	memset(t,-1,sizeof(t));
	if(n==0||capacity==0)
	{
		return 0;
	}
	if(t[n][capacity]!=-1)
	{
		return t[n][capacity];
	}

	if(wt[n-1]<=capacity)
	{
		return t[n][capacity]= max(val[n-1]+knapsack(wt,val,capacity-wt[n-1],n-1),knapsack(wt,val,capacity,n-1));
	}
	else if(wt[n-1]>capacity)
	{
		return t[n][capacity]= knapsack(wt,val,capacity,n-1);
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
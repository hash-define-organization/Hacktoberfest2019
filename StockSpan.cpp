/*
The stock span problem is a financial problem where we have a series of n daily price 
quotes for a stock and we need to calculate span of stock’s price for all n days.
*/

#include <bits/stdc++.h>
#include <stack>
#include <utility>

using namespace std;

void stockSpanProblem(int arr[], int n)
{
	stack<pair<int,int>> s;
	s.push(make_pair(arr[0],0));

	int ans[n];

	for(int i = 0 ; i < n ; i++)
	{
		int top = s.top().first;
		int topIndex = s.top().second;

		if(arr[i] < top)
		{
			s.push(make_pair(arr[i],i));
			ans[i] = i - topIndex;
		}

		else
		{
			while(s.top().first < arr[i])
				s.pop();
			
			ans[i] = i - s.top().second;
			s.push(make_pair(arr[i],i));
		}
	}

	cout<<"STOCK SPAN ANSWER\n";
	for(auto i : ans)
		cout<<i<<" ";
}

int main()
{
  int arr[] = {100,80,60,70,60,75,85};
  int n = sizeof(arr)/sizeof(int);

  stockSpanProblem(arr,n);
}

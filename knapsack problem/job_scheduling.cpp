#include<iostream>
#include<algorithm>

using namespace std;

struct job{
	char id;
	int dead;
	int profit;
	};

bool comp(job a , job b)
{
	return(a.profit > b.profit);
}

void print(job arr[], int n){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"["<<arr[i].id<<","<<arr[i].dead<<","<<arr[i].profit<<"]"<<endl;
	}
}

void pjs(job arr[] , int n )
{
	int  i = 0;
	sort (arr , arr+n , comp);
	print(arr,n);
	int result[n];
	bool slot[n];

	for (int i = 0; i < n ; i++)
		slot[i] = false;
	
	for (int i = 0; i < n ; i++){		
		for ( int j = min(n,arr[i].dead)-1; j >= 0;j--){
			if (slot[j] == false){
				result[j] = i;
				slot[j] = true;
 				break;
			}
		}

	}
	int totalProfit=0;
	for (int i = 0 ; i < n ; i++){
		if (slot[i]){
			totalProfit+=arr[result[i]].profit;
			cout<<"["<<arr[i].id<<","<<arr[i].dead<<","<<arr[i].profit<<"]"<<endl;
		}
	}
	cout<<endl;
	cout<<"total profit="<<totalProfit<<endl;
}

int main()
{
	job arr[] = {{'a',1,3},{'b',3,5},{'c',4,20} , {'d',3,18},{'e',2,1},{'f',1,6}, {'g',2,30}};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "max profit from js is ";
	pjs(arr,n);
	
}


#include<bits/stdc++.h>
using namespace std;
  //recursive approach
  //complexity is O(2^n) 
  /*bool subsetsum(int arr[],int n,int k){

	
	if(k==0){
		return true;
	
	}
	if(n==0 && k!=0){
	return false;
	}
	if(k>0 && n>0){
	
		return subsetsum(arr,n-1,k-arr[n]) || subsetsum(arr,n-1,k);
		
	}

	return 0;
	
}*/
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int key=0;cin>>key;
	/*bool t=subsetsum(arr,n,key);
	if(t){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}*/
		bool dp[n+1][key+1];
	for(int i=0;i<=n;i++){
		dp[i][0]=true;
	}
        
	for(int i=0;i<=n;i++){
		for(int j=1;j<=key;j++){
		
			if(a[i]>key){
				if(i==0){
					dp[i][j]=false;
				}
				else{
				
				dp[i][j]=dp[i-1][j];}
			}
			
			if(a[i]<key){
				if(i==0){
					if(a[i]==key){
						dp[i][j]=true;
					}
					else{
						dp[i][j]=false;
					}
				}
				else{
				
				dp[i][j]=dp[i-1][j] or dp[i-1][j-a[i]];}
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=key;j++){
			cout<<dp[i][j]<<" ";}cout<<endl;}
	
	if(dp[n][key]){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	
	system("pause");
}

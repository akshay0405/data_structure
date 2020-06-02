#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=9;
int arr[n]={1, 2, 3, 1, 4, 5, 2, 3, 6};
sort(arr,arr+n);
for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(j-i==3 || j-i==-3){
				
			}
			cout<<arr[j]<<endl;}}
			system("pause");}

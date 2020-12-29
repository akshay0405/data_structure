#include<bits/stdc++.h>
using namespace std;
class stack{
	public:
	int arr[100],top=-1;
	void pop(){
		if(top==-1){
			cout<<"EMPTY"<<endl;
			
		}
		else{
			top=top-1;
		}
	}
	int  top1(){
	return arr[top];
	}
	void push(int a){
		top++;
		arr[top]==a;
		
	}
	int size(){
		return top+1;
	}
	bool isempty(){
		if(top==-1){return true;
		}
		else{
		return false;}
	}
	void display(){
		for(int i=top;i>=0;i++){
			cout<<arr[i]<<endl;
		}
	}
};
int main(){
	string k;
	getline(cin,k);
	cout<<k.length();
	system("pause");
	
	
	
}

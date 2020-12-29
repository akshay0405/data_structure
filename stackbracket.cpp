#include<bits/stdc++.h>
using namespace std;
class stack{
	public:
	char arr[100000];
	int pos[100000];
	int top=-1;
	void pop(){
		if(top==-1){
			cout<<"EMPTY"<<endl;
			
		}
		else{
			top=top-1;
		}
	}
	char  top1(){
	return arr[top];
	}
	int topp(){
		return pos[top];
	}
	void push(char a,int b){
		top++;
		arr[top]=a;
		pos[top]=b;
		
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
}st;
int main(){
	string s;
	getline(cin,s);
	int t=0;
	
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			st.push(s[i],i+1);
		}
		else if(s[i]==')' || s[i]=='}'|| s[i]==']'){
			if(st.isempty()){
				cout<<i+1;
				t=1;
				break;
			}
		
			else if((s[i]=='}'&& st.top1()=='{') ||(s[i]==']'&& st.top1()=='[' )|| (s[i]==')'&& st.top1()=='(')  ){
				st.pop();
				
			}
			else{t=1;
				cout<<i+1;
				break;
			}
		}
		}
		if(t==0 && st.isempty()){
			cout<<"Success";
		}
		else if(t==0 && !st.isempty()){
			cout<<st.topp();
		}
			system("pause");
	
	return 0;

}

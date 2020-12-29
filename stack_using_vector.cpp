#include<bits/stdc++.h>
using namespace std;
int main(){
	// stack using array 
vector<int> a;
int top=-1;
int i=0;
while(i!=6){

cout<<"choose option \n";
cout<<"Enter 1 for push \n";
cout<<"Enter 2 for pop \n";
cout<<"Enter 3 for  top \n";
cout<<"Enter 4 for print \n";
cout<<"Enter 5 for size \n";
cout<<"Enter 6 to exit \n";
cin>>i;
if(i==1){
	cout<<"Enter element"<<endl;
	int n;
	cin>>n;
	a.push_back(n);
	top++;
}
else if(i==2){
	if(top>-1){
		cout<<"popped succesfully \n";
		top--;
			
	}
	else{
		cout<<"stack is empty \n";
	}
}
else if(i==3){
	if(top>-1){
		cout<<"top element is"<<a[top]<<"\n";
			
	}
	else{
		cout<<"stack is empty \n";
	}
}
else if(i==4){
	if(top>-1){
	for (int j=0;j<=top;j++){
		cout<<a[j]<<endl;
	}
			
	}
	else{
		cout<<"stack is empty \n";
	}
}
else if(i==5){
	if(top>-1){
		cout<<"size of stack is: "<<top<<"\n";
			
	}
	else{
		cout<<"stack is empty \n";
	}
}
else if(i==6){
cout<<"Thanks for using \n";
}
else{
	cout<<"please try again \n";
}

}

}

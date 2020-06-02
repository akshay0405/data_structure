#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int num;
		node *next;
		node* create_node();
	void insert_at_X(int n);
	void print();
	void delet_at_x(int n);
}*head=NULL,*tail=NULL;
node* node::create_node(){
			node *temp=new node();
			temp->next=NULL;
				int x;
					cin>>x;
				temp->num=x;
			
			return temp;
			
		}
void node::insert_at_X(int n){
	if(n==0 ){
		if(head==NULL){
		
		head=create_node();}
		else{
			node *temp1=head;
			head=create_node();
			head->next=temp1;
			temp1=NULL;
		}}
		else if(n>0 && head==NULL){
			cout<<"invalid position"<<endl;
		}
		else{
			int count=0;
				node *temp1=head;
			while(temp1->next!=NULL){
				count++;
				temp1=temp1->next;
			}
			count++;	
														
			if(n==count){
				
			temp1->next=create_node();
			}
		else if(n>count){
			cout<<"no such poisition"<<endl;			}
		else if(n<count){
				int c=0;
				node *temp1=head;
				while(c!=n-1){
					temp1=temp1->next;
					c++;
				}
				node *temp2=temp1->next;
				temp1->next=create_node();
				temp1->next->next=temp2;
				
			}
			
		}
	}



	

void node::print(){
	node *temp1=head;
	while(temp1->next!=NULL){
		cout<<temp1->num<<endl;
		temp1=temp1->next;
	}
cout<<temp1->num;
}
void node::delet_at_x(int n){
	if(head==NULL){
		cout<<"no node exist"<<endl;
	}
	else {
			int count=0;
				node *temp1=head;
			while(temp1->next!=NULL){
				count++;
				temp1=temp1->next;
			}
					
		
	
	if(count<n){
		cout<<"no such position exist"<<endl;
	}
	else if(n==0){
		node *temp1=head;
		head=head->next;
		temp1->next=NULL;
	}
	else{int count=0;
	node *temp1=head;
		while(count!=n-1){
			temp1=temp1->next;
			count++;
		
			
		}
		if(temp1->next->next==NULL){
			temp1->next=NULL;
		}
		else{
		
		node *temp2=temp1->next->next;
	node*temp3=temp1->next;
	temp3->next=NULL;
	temp1->next=temp2;
}
	
}
}
	
	
}
int main(){
int k=0;
while(true){

cout<<" ENTER 1 FOR  CREATION"<<endl<<"ENTER 2 FOR PRINT"<<endl<<"ENTER 3 TO END"<<endl<<"ENTER 4 FOR DELET"<<endl;
cin>>k;
if(k==1){
	int n=0;
	cout<<"enter position"<<endl;
	cin>>n;
	head->insert_at_X(n);
}
else if(k==2){
	head->print();
}

else if(k==3){
	break;
} 
else if(k==4){	int n=0;
	cout<<"enter position"<<endl;
	cin>>n;
	head->delet_at_x( n);
}
else{
	cout<<"Enter valid option"<<endl;
}
}

return 0;
}

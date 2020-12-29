#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;
class stack{
	public:
	int arr[100000],top=-1;
	void pop(){
		if(top==-1){
			
			
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
	int max(){
		int max=0;
		for(int i=top;i>=0;i++){
			if(arr[i]>max){
				max=i;
			}
		}
		return arr[max];
	}
		
	
}st;
int main(){
	
	
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
           
           int t=stoi(value );
            st.push();
        }
        else if (query == "pop") {
            st.pop();
        }
        else if (query == "max") {
            cout<<st.max()<< "\n";
        }
}
	
}

#include<bits/stdc++.h>
using namespace std;
class st{
	 public:
	 stack<int> s; 
    int max;
    void push(int a){
    	if(s.empty()){
    		max=a;
    		s.push(a);
		}
		else{
			if(a>max){
				s.push(2*a+max);
				max=a;
			}
			else{
				s.push(a);
			}
		}
    	
    	
	}
	void pop(){
		if(s.empty()){
			cout<<"no element"<<endl;
		}
		else{
			int k=s.top();
			if(k>max){
				s.pop();
				max=k-2*max;
			}
			else{
				s.pop();
			}
		}
	}
	int getmax(){
		return max;
	}
};
int main(){

int num_queries = 0;
    cin >> num_queries;

    string query;
    int  value;

   st stack;
vector<int> v;
    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
          
            stack.push(value);
        }
        else if (query == "pop") {
            stack.pop();
        }
        else if (query == "max") {
             v.push_back(stack.getmax());
        }}
        for(int i=0;i<v.size();i++){
        	cout<<v[i]<<endl;
		}
		
		system("pause");}

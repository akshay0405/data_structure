#include<bits/stdc++.h>
using namespace std;
int main(){
	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	cout<<s.top();
	
	cout<<s.empty();
	cout<<s.size();
	system("pause");
}

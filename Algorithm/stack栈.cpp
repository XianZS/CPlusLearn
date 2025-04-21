#include <bits/stdc++.h>
#define MAXSIZE 100;
using namespace std;

stack<double> stk;
int main(){
	// 往栈顶push元素 
	stk.push(1.1);
	stk.push(2.1);
	// 求栈的长度 
	int L=stk.size();
	cout<<"栈的长度:"<<L<<endl;
	// 弹出栈顶元素
	stk.pop();
	// 输出当前栈顶元素 
	cout<<"栈顶元素:"<<stk.top()<<endl; 
	// 栈判空
	stk.push(3.1);
	stk.push(4.1);
	while (stk.empty()!=1){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	return 0;
} 

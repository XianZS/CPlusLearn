#include <bits/stdc++.h>
#define MAXSIZE 100;
using namespace std;

stack<double> stk;
int main(){
	// ��ջ��pushԪ�� 
	stk.push(1.1);
	stk.push(2.1);
	// ��ջ�ĳ��� 
	int L=stk.size();
	cout<<"ջ�ĳ���:"<<L<<endl;
	// ����ջ��Ԫ��
	stk.pop();
	// �����ǰջ��Ԫ�� 
	cout<<"ջ��Ԫ��:"<<stk.top()<<endl; 
	// ջ�п�
	stk.push(3.1);
	stk.push(4.1);
	while (stk.empty()!=1){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	return 0;
} 

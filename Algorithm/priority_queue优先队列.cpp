#include <bits/stdc++.h>
#define MAXSIZE 100;
using namespace std;

/*
	�� 
	ע��������Ѷ��ɶ� 
*/ 

// ��������
// <��������>��Ĭ��Ϊ����� 
//priority_queue<int> pque; 

// <��������,�ײ㴢�����ݵ���������,greater<int>>��С���� 
priority_queue<int,vector<int>,greater<int>> pque; 


int main(){
	pque.push(10);
	cout<<pque.top()<<" ";
	pque.push(100);
	cout<<pque.top()<<" ";
	pque.push(-1);
	cout<<pque.top()<<" ";
	int elem=pque.top();
	cout<<elem<<endl;
	return 0;
}

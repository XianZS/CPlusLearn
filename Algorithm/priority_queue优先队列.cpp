#include <bits/stdc++.h>
#define MAXSIZE 100;
using namespace std;

/*
	堆 
	注意事项，仅堆顶可读 
*/ 

// 传参论述
// <数据类型>：默认为大根堆 
//priority_queue<int> pque; 

// <数据类型,底层储存数据的容器类型,greater<int>>：小根堆 
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

#include <bits/stdc++.h>
#define MAXSIZE 100;
using namespace std;

queue<int> que;

int main(){
	cout<<"请输入一个数字n:";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int elem;
		cin>>elem;
		que.push(elem); 
	} 
	cout<<"que长度为:"<<que.size()<<endl;
	cout<<"que队首元素为:"<<que.front()<<endl;
	cout<<"que队尾元素为:"<<que.back()<<endl; 
	// 队列首元素出队,使用.pop()方法 
	que.pop();
	cout<<"que长度为:"<<que.size()<<endl;
	cout<<"que队首元素为:"<<que.front()<<endl;
	cout<<"que队尾元素为:"<<que.back()<<endl; 
	return 0;
}

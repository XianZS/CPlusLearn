#include <bits/stdc++.h>
#define MAXSIZE 100;
using namespace std;

queue<int> que;

int main(){
	cout<<"������һ������n:";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int elem;
		cin>>elem;
		que.push(elem); 
	} 
	cout<<"que����Ϊ:"<<que.size()<<endl;
	cout<<"que����Ԫ��Ϊ:"<<que.front()<<endl;
	cout<<"que��βԪ��Ϊ:"<<que.back()<<endl; 
	// ������Ԫ�س���,ʹ��.pop()���� 
	que.pop();
	cout<<"que����Ϊ:"<<que.size()<<endl;
	cout<<"que����Ԫ��Ϊ:"<<que.front()<<endl;
	cout<<"que��βԪ��Ϊ:"<<que.back()<<endl; 
	return 0;
}

#include <bits/stdc++.h> 
#define MAXSIZE 100
using namespace std;

/*
	set:
		* ȷ���� : ÿ��Ԫ�س��ִ���ȷ�� 
		* ������ : ֻ�ܳ���һ�� 
		* ������ : �Զ����򣬴�С���� 
	������
		* insert(element)����element����set����
		* erase(element)����set�����е�elementԪ�ز���
		* .size()���󳤶�
		* find(element)����set�����в���elementԪ�أ�������ڣ�����Ԫ�أ���������ڷ���st.end 
		* count(element)����ѯset�д��ڶ��ٸ�elementԪ�� 
		* .clear()�����
		* empty()���п� 
	ע�����
		* �������±�
		* Ԫ��ֻ�� 
*/

set<int> st; 

int main(){
	st.insert(1);
	st.insert(6);
	st.insert(2);
	st.insert(-3);
	int x=st.erase(3); // 0
	cout<<x<<endl;
	int L=st.size(); // 4
	cout<<L<<endl;
	for(auto &elem:st){
		cout<<elem<<" ";
	}
	cout<<endl;
	// �鿴Ԫ��-333�Ƿ���� 
	if (st.find(-333)!=st.end()){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	// �鿴Ԫ��1�Ƿ����
	if(st.count(1)){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl;
	}
	return 0;
} 

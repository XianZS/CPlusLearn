#include <bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

/*
	mapӳ�����ͣ��൱��python��dict�ֵ����� 
	�ᰴ��key�Զ����� 
	��ɾ�Ĳ�ʱ�临�ӶȾ�Ϊlog(n)
*/ 

map<string,int> dict; 
int main(){
	dict["c"]=111;
	dict["b"]=222;
	dict["a"]=333;
	// ��������map��������
	for(auto &elem:dict){
		cout<<elem.first<<"+"<<elem.second<<endl;
	}
	// ������dict�в����ڵ�keyʱ���᷵��0
	cout<<dict["d"]<<endl; 
	dict["d"]=1;
	cout<<dict["d"]<<endl;
	// ����Ԫ��
	dict.erase("d");
	cout<<dict["d"]<<endl;
	// �ж�Ԫ���Ƿ����
	if(dict.count("a")) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	// �ж��Ƿ�Ϊ��
	cout<<dict.empty()<<endl; 
	// �������
	cout<<dict.size()<<endl;
	return 0;
}

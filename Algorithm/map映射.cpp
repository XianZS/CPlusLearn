#include <bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

/*
	mapӳ�����ͣ��൱��python��dict�ֵ����� 
	�ᰴ��key�Զ����� 
*/ 


map<string,int> dict; 
int main(){
	dict["c"]=111;
	dict["b"]=222;
	dict["a"]=333;
	for(auto &elem:dict){
		cout<<elem.first<<"+"<<elem.second<<endl;
	}
	// ������dict�в����ڵ�keyʱ���᷵��0
	cout<<dict["d"]<<endl; 
	return 0;
}

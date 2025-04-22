#include <bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

/*
	map映射类型，相当于python的dict字典类型 
	会按照key自动排序 
	增删改查时间复杂度均为log(n)
*/ 

map<string,int> dict; 
int main(){
	dict["c"]=111;
	dict["b"]=222;
	dict["a"]=333;
	// 遍历整个map对象类型
	for(auto &elem:dict){
		cout<<elem.first<<"+"<<elem.second<<endl;
	}
	// 当访问dict中不存在的key时，会返回0
	cout<<dict["d"]<<endl; 
	dict["d"]=1;
	cout<<dict["d"]<<endl;
	// 擦除元素
	dict.erase("d");
	cout<<dict["d"]<<endl;
	// 判断元素是否存在
	if(dict.count("a")) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	// 判断是否为空
	cout<<dict.empty()<<endl; 
	// 输出长度
	cout<<dict.size()<<endl;
	return 0;
}

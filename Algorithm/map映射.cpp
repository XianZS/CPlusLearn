#include <bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

/*
	map映射类型，相当于python的dict字典类型 
	会按照key自动排序 
*/ 


map<string,int> dict; 
int main(){
	dict["c"]=111;
	dict["b"]=222;
	dict["a"]=333;
	for(auto &elem:dict){
		cout<<elem.first<<"+"<<elem.second<<endl;
	}
	// 当访问dict中不存在的key时，会返回0
	cout<<dict["d"]<<endl; 
	return 0;
}

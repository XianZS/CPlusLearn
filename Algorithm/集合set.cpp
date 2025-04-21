#include <bits/stdc++.h> 
#define MAXSIZE 100
using namespace std;

/*
	set:
		* 确定性 : 每个元素出现次数确定 
		* 互异性 : 只能出现一次 
		* 无序性 : 自动排序，从小到达 
	方法：
		* insert(element)：将element插入set集合
		* erase(element)：将set集合中的element元素擦除
		* .size()：求长度
		* find(element)：在set集合中查找element元素，如果存在，返回元素，如果不存在返回st.end 
		* count(element)：查询set中存在多少个element元素 
		* .clear()：清空
		* empty()：判空 
	注意事项：
		* 不存在下标
		* 元素只读 
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
	// 查看元素-333是否存在 
	if (st.find(-333)!=st.end()){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	// 查看元素1是否存在
	if(st.count(1)){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl;
	}
	return 0;
} 

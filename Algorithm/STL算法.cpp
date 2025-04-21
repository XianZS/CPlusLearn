#include <bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

// vector数组根据输入数值可以动态生成
int n=110,m=110;
vector <vector<int>> xxx(n,vector<int>(m,-1)); 

// 创建一个一维数组 
vector<int> some(MAXSIZE);
// 创建一个5*6的二维数组 
vector<vector<int>> nums(5,vector<int> (6,100));
// 创建一个空数组 
vector<int> dnums;
// main 
int main(){
//	cout<<some[1]<<endl;
//	cout<<nums[1][1]<<endl;
	cout<<"Please inter a number[int]:"<<endl;
	int n;
	cin>>n;
	cout<<"Please inter "<<n<<"number[int]"<<endl;
	for(int i=0;i<n;i++){
		int number;
		cin>>number;
		dnums.push_back(number);
	}
	for (auto &elem:dnums){
		cout<<elem<<endl;
	}
	// 请空vector数组
	dnums.clear();
	// 更改vector数组的size，将长度改为10，初值设置为10 
	dnums.resize(10,10);  
	// 输出xxx:vector数组
	cout<<xxx[1][1]<<endl; 
	return 0;
}

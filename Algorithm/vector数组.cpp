#include <bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

// vector�������������ֵ���Զ�̬����
int n=110,m=110;
vector <vector<int>> xxx(n,vector<int>(m,-1)); 

// ����һ��һά���� 
vector<int> some(MAXSIZE);
// ����һ��5*6�Ķ�ά���� 
vector<vector<int>> nums(5,vector<int> (6,100));
// ����һ�������� 
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
	// ���vector����
	dnums.clear();
	// ����vector�����size�������ȸ�Ϊ10����ֵ����Ϊ10 
	dnums.resize(10,10);  
	// ���xxx:vector����
	cout<<xxx[1][1]<<endl; 
	return 0;
}

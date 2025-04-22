#include <bits/stdc++.h>
#define MaxSize 100
using namespace std;

int main(){
	/*
	（1）构建情况1
	初始化strs为空，size=0 
	*/ 
	string strs;
	// 遇到空格截至 
	cin>>strs;
	cout<<"strs:"<<strs<<endl;
	/*
	（2）构建情况2
	初始化strs1，size=10，child=1
	string string(size,child); 
	*/
	string strs1(10,'a');
	cout<<strs1<<endl;
	// （3）判断字符串是否相等
	cout<<"请输入两个字符串，使用空格隔开"<<endl;
	string s1,s2;
	cin>>s1>>s2;
	if(s1==s2){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl; 
	}
	// （4）拼接字符串
	cout<<"s1+s2="<<s1+s2<<endl;
	// （5）切割字符串
	// string.substr(起始下标,字串长度) 
	cout<<(s1+s2).substr(2,3)<<endl;
	// （6）判断某个字串是否存在
	if((s1+s2).find("312")!=string::npos){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl;
	}
	// 当字串不存在时，find()会返回string::npos 
	cout<<(s1+s2).find("34")<<endl; 
	// （7）字符串转换为数字
	// s+to+[i:int|ll:long long]
	int x1=stoi(s1+s2);
	long long x2=stoll(s1+s2);
	float x3=stof(s1+s2);
	double x4=stod(s1+s2);
	long double x5=stold(s1+s2);
	cout<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<x4<<"\t"<<x5<<endl;
	// （8）其他类型===>>>字符串
	int number=1001;
	string new_number=to_string(number);
	cout<<"new_number:"<<new_number<<endl;
	// （9）字符串累加
	s2+=s1;		// 推荐
	s2=s1+s2;	// 不推荐 
	cout<<s2<<endl; 
	return 0;
}

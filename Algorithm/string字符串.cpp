#include <bits/stdc++.h>
#define MaxSize 100
using namespace std;

int main(){
	/*
	��1���������1
	��ʼ��strsΪ�գ�size=0 
	*/ 
	string strs;
	// �����ո���� 
	cin>>strs;
	cout<<"strs:"<<strs<<endl;
	/*
	��2���������2
	��ʼ��strs1��size=10��child=1
	string string(size,child); 
	*/
	string strs1(10,'a');
	cout<<strs1<<endl;
	// ��3���ж��ַ����Ƿ����
	cout<<"�����������ַ�����ʹ�ÿո����"<<endl;
	string s1,s2;
	cin>>s1>>s2;
	if(s1==s2){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl; 
	}
	// ��4��ƴ���ַ���
	cout<<"s1+s2="<<s1+s2<<endl;
	// ��5���и��ַ���
	// string.substr(��ʼ�±�,�ִ�����) 
	cout<<(s1+s2).substr(2,3)<<endl;
	// ��6���ж�ĳ���ִ��Ƿ����
	if((s1+s2).find("312")!=string::npos){
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl;
	}
	// ���ִ�������ʱ��find()�᷵��string::npos 
	cout<<(s1+s2).find("34")<<endl; 
	// ��7���ַ���ת��Ϊ����
	// s+to+[i:int|ll:long long]
	int x1=stoi(s1+s2);
	long long x2=stoll(s1+s2);
	float x3=stof(s1+s2);
	double x4=stod(s1+s2);
	long double x5=stold(s1+s2);
	cout<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<x4<<"\t"<<x5<<endl;
	// ��8����������===>>>�ַ���
	int number=1001;
	string new_number=to_string(number);
	cout<<"new_number:"<<new_number<<endl;
	// ��9���ַ����ۼ�
	s2+=s1;		// �Ƽ�
	s2=s1+s2;	// ���Ƽ� 
	cout<<s2<<endl; 
	return 0;
}

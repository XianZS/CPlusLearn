#include <bits/stdc++.h>
#define MaxSize 100
using namespace std;

/*
	.end()��.rend()ָ���λ�����������
	
*/

vector<int> nums(10);

int main() {
    for(int i = 0; i < nums.size(); i++) {
        nums[i] = i + 1;
    }
    for(auto & elem : nums) {
        cout << elem << " ";
    }
    for(vector<int>::iterator elem = nums.begin(); elem != nums.end(); elem++) {
        cout << *elem << endl;
    }
    return 0;
}

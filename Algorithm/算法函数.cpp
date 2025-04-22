#include <bits/stdc++.h>
#define MaxSize 1010

using namespace std;

/*
	- swap(child1,child2):交换child1和child2的数值
	- sort(起始位置,结束位置,排序算法[返回值必须为bool])
*/

bool cmp(vector<int> a, vector<int> b) {
    // 第二位从大到小
    if(a[1] != b[1])
        return a[1] > b[1];
    else {
        // 第一位从小到大
        if(a[0] != b[0])
            return a[0] < b[0];
    }
    return false;
}

int main() {
    // (1)swap(child1,child2)交换元素
    int a = 1, b = 2;
    cout << a << ' ' << b << endl;
    swap(a, b);
    cout << a << ' ' << b << endl;
    // (2)sort(起始位置,结束位置,排序算法[返回值必须为bool])
    vector<int> nums {1, 3, 5, 7, 9, 8, 6, 4, 2, 0};
    sort(nums.begin(), nums.end());
    for(auto & elem : nums) {
        cout << elem << ' ';
    }
    cout << endl;
    // 自定义排序规则
    vector<vector<int>> arr {{1, 2}, {3, 4}, {2, 2}};
    sort(arr.begin(), arr.end(), cmp);
    for(auto & xxx : arr) {
        cout << xxx[0] << ',' << xxx[1] << ' ' <<endl;
    }
    return 0;
}

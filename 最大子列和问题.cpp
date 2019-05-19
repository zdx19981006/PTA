/*给定K个整数组成的序列{ N1, N​2​​ , ..., N​K​​  }，“连续子列”被定义为{ N​i​​ , N​i+1​​ , ..., N​j​​  }，
其中 1≤i≤j≤K。“最大子列和”则被定义为所有连续子列元素的和中最大者。
例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20。
现要求你编写程序，计算给定整数序列的最大子列和。*/

#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int temp = 0; temp < n; temp++) {
		cin >> a[temp];
	}
	int temper = 0;
	int answer = 0;
	for (int temp = 0; temp < n; temp++) {
		temper += a[temp];		
		if (temper < 0)
			temper = 0;
		if (temper > answer)
			answer = temper;
	}
	cout << answer;	
}

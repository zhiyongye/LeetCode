#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int times = 0;
vector<long> record;

// 记忆化搜索 
long fibonacci_1(int n) {
	
	times++;
	
	if(n == 0)  {
		return 1;
	}
	
	if (n == 1) {
		return 1;
	}
	
	if (record[n] == -1) {
		record[n] = fibonacci_1(n-1) + fibonacci_1(n-2);
	}

	
	return record[n];
} 

// 动态规划
long  fibonacci_2(int n) {
		
	vector<long> mem(n+1, 0);
	mem[0] = 1; 
	mem[1] = 1;
	for (int i=2; i<=n; ++i) {
		mem[i] = mem[i-1] + mem[i-2];
	}
	
	return mem[n];
}

int main() {
	
	long res = 0;
	int n = 40;
	record = vector<long>(n+1, -1);
	time_t start, end;
	
	start = clock();
	// res = fibonacci_1(n);
	res = fibonacci_2(n);
	end = clock();
	
	cout << "result:" << res << endl;
	cout << "times:" << times << endl;
	cout << "time:" << double(end-start) / CLOCKS_PER_SEC << "s" << endl;
	
	return 0; 
} 

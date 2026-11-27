#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
	Queue: 선입선출(FIFO) 구조라 중간에 나이를 기준으로 재배치하는 정렬에 부적합함.
	Map: Key를 나이로 잡으면 동갑일 때 기존 데이터가 덮어씌워지는 문제가 발생함.
	-> 해결: 단순 vector<member>에 입력 순서대로 담은 뒤 정렬 함수 한 번으로 해결.

	sort (불안정 정렬): 퀵 정렬 기반이라 나이가 같은 원소들끼리 기존 순서가 뒤섞일 수 있음.
	stable_sort (안정 정렬): 병합 정렬 기반으로, 정렬 기준(나이)이 같을 때 입력받은 기존 순서(가입 순)가 그대로 보장됨.
*/


struct member {
	int age;
	string name;
};

bool compare(const member& a, const member& b) {
	return a.age < b.age;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<member> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].age >> arr[i].name;
	}

	// 일반 sort는 불안정 정렬이라 동갑일 때 입력 순서가 섞일 수 있으므로 stable_sort 사용
	stable_sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i].age << " " << arr[i].name << "\n";
	}
	return 0;
}
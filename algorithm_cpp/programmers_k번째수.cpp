// programmers. 정렬. k번째 수
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (int i = 0; i < commands.size(); i++) {
		vector<int> v;
		for (int j = commands[i][0]-1; j < commands[i][1]; j++) {
			v.push_back(array[j]);
		}
		sort(v.begin(), v.end());  // 정렬

		int target = commands[i][2];

		for (int j = 0; j < v.size(); j++) {
			if (j == target - 1) {
				answer.push_back(v[j]);
			}
		}
	}
	return answer;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> array;
	array.push_back(1);
	array.push_back(5);
	array.push_back(2);
	array.push_back(6);
	array.push_back(3);
	array.push_back(7);
	array.push_back(4);

	vector<vector<int>> commands;
	vector<int> v1;
	v1.push_back(2);
	v1.push_back(5);
	v1.push_back(3);
	vector<int> v2;
	v2.push_back(4);
	v2.push_back(4);
	v2.push_back(1);
	vector<int> v3;
	v3.push_back(1);
	v3.push_back(7);
	v3.push_back(3);

	commands.push_back(v1);
	commands.push_back(v2);
	commands.push_back(v3);

	solution(array, commands);

	return 0;
}
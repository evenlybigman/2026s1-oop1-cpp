#include <iostream>
#include <cmath>
using namespace std;

class Schedule {
protected:
	int count;
	int* jobs;
	int curLoc;
public:
	Schedule(int curloc, int n[], int count);
	~Schedule();
	int run();
	int getJobs() { return count; }
	int getCurLoc() { return curLoc; }
};

Schedule::Schedule(int curloc, int n[], int count) {
	this->curLoc = curloc; //현재 동 위치
	this->count = count; // n[] 크기
	jobs = new int[count];

	cout << "현재 위치는 " << curLoc << "동: 배달 시작 ..." << curLoc;
	for (int i = 0; i < count; i++) {
		cout << " -> ";
		cout << n[i];
		jobs[i] = n[i];
	}
	cout << endl;
}

Schedule::~Schedule() {
	delete[] jobs;
}

int Schedule::run() {
	int sum = 0;
	for (int i = 0; i < count; i++) {
		if (curLoc > jobs[i]) {
			sum += curLoc - jobs[i];
		}
		else {
			sum += jobs[i] - curLoc;
		}
		curLoc = jobs[i];
	}
	return sum;
}

class ShortestFirst : public Schedule {
public:
	ShortestFirst(int curloc, int n[], int count);
	int run();
};

ShortestFirst::ShortestFirst(int curloc, int n[], int count) 
	:Schedule(curloc, n, count) {
	bool* visited = new bool[count];
	int tmpLoc = curLoc;
	for (int i = 0; i < count; i++) {
		visited[i] = false;
	}

	cout << "현재 위치는 " << tmpLoc << "동: 배달 시작 ..." << tmpLoc;
	for (int i = 0; i < count; i++) {
		cout << " -> ";
		
		//가장 가까운 값 구하기
		int minDistance = INT_MAX;
		int minIdx = 0;
		for (int j = 0; j < count; j++) {
			if (visited[j] == true) continue;
			if (tmpLoc > n[j]) {
				if (minDistance > tmpLoc - n[j]) {
					minIdx = j;
					minDistance = tmpLoc - n[j];
				}
			}
			else {
				if (minDistance > n[j] - tmpLoc) {
					minIdx = j;
					minDistance = n[j] - tmpLoc;
				}
			}
		}

		cout << n[minIdx];
		jobs[i] = n[minIdx];
		tmpLoc = n[minIdx];
		visited[minIdx] = true;
	}
	cout << endl;
	delete[] visited;
}

int ShortestFirst::run() {
	int sum = 0;
	for (int i = 0; i < count; i++) {
		if (curLoc > jobs[i]) {
			sum += curLoc - jobs[i];
		}
		else {
			sum += jobs[i] - curLoc;
		}
		curLoc = jobs[i];
	}
	return sum;
}

int main() {
	int jobs[6];
	cout << "택배를 픽업할 동을 요청 순서대로 6개 입력>>";
	for (int i = 0; i < 6; i++)
		cin >> jobs[i];

	Schedule fcfs(10, jobs, 6);
	cout << "전체 움직인 거리는 " << fcfs.run() << ", ";
	cout << "현재 위치는 " << fcfs.getCurLoc() << "동" << endl;

	ShortestFirst sf(10, jobs, 6);
	cout << "전체 움직인 거리는 " << sf.run() << ", ";
	cout << "현재 위치는 " << sf.getCurLoc() << "동" << endl;

}
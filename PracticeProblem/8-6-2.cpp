#include <iostream>
using namespace std;

class Schedule {
protected:
	int count;
	int* jobs = NULL;
	int curLoc;
	int totalDistance = 0;
public:
	Schedule(int curloc, int n[], int count);
	~Schedule();
	void run();
	int getDistance() { return totalDistance; }
	int getJobs() { return count; }
	int getCurLoc() { return curLoc; }
};

Schedule::Schedule(int curloc, int n[], int count) {
	this->curLoc = curloc;
	this->jobs = new int[count];
	this->count = count;

	for (int i = 0; i < count; i++) {
		jobs[i] = n[i];
	}
}

Schedule::~Schedule() {
	delete[] jobs;
}

void Schedule::run() {
	cout << "현재 위치는 " << curLoc << "동: 배달 시작 ..." << curLoc;
	for (int i = 0; i < count; i++) {
		cout << " -> " << jobs[i];
	}
	cout << endl;

	for (int i = 0; i < count; i++) {
		if (curLoc > jobs[i]) totalDistance += curLoc - jobs[i];
		else totalDistance += jobs[i] - curLoc;
		curLoc = jobs[i];
	}
}

class ShortestFirst : public Schedule {
public:
	ShortestFirst(int curloc, int n[], int count);
	void run();
};

ShortestFirst::ShortestFirst(int curloc, int n[], int count)
	: Schedule(curloc, n, count) {
}

void ShortestFirst::run() {
	cout << "현재 위치는 " << curLoc << "동: 배달 시작 ..." << curLoc;
	for (int i = 0; i < count; i++) {
		cout << " -> " << jobs[i];
	}
	cout << endl;

	for (int i = 0; i < count; i++) {
		for (int i = 0; jobs[i] != NULL; i++) { //10동 / [ 1 5 12 20 8 9 ] 
			int* distance = new int[count - i];
			if (curLoc > jobs[i]) distance[i] = 
		}
	}
}

int main() {
	int jobs[6];
	cout << "택배를 픽업할 동을 요청 순서대로 6개 입력>>";
	for (int i = 0; i < 6; i++)
		cin >> jobs[i];

	Schedule fcfs(10, jobs, 6);
	fcfs.run();
	cout << "전체 움직인 거리는 " << fcfs.getDistance() << ", ";
	cout << "현재 위치는 " << fcfs.getCurLoc() << "동" << endl;

	ShortestFirst sf(10, jobs, 6);
	sf.run();
	cout << "전체 움직인 거리는 " << sf.getDistance() << ", ";
	cout << "현재 위치는 " << sf.getCurLoc() << "동" << endl;
}
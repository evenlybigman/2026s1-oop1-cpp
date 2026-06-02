#include <iostream>
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

}

Schedule::~Schedule() {

}

int Schedule::run() {

}

int main() {
	int jobs[6];
	cout << "택배를 픽업할 동을 요청 순서대로 6개 입력>>";
	for (int i = 0; i < 6; i++)
		cin >> jobs[i];
	
	Schedule fcfs(10, jobs, 6);
	cout << "전체 움직인 거리는 " << fcfs.run() << ", ";
	cout << "현재 위치는 " << fcfs.getCurLoc() << "동" << endl;
}
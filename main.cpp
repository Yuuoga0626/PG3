#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

mutex mtx;
condition_variable cv;
int turn = 1;

void thread1() {
	unique_lock<mutex> lock(mtx);

	cv.wait(lock, [] { return turn == 1; });

	cout << "thread 1" << endl;

	turn = 2;
	cv.notify_all();
}

void thread2() {
	unique_lock<mutex> lock(mtx);

	cv.wait(lock, [] { return turn == 2; });

	cout << "thread 2" << endl;

	turn = 3;
	cv.notify_all();

}

void thread3() {
	unique_lock<mutex> lock(mtx);

	cv.wait(lock, [] { return turn == 3; });

	cout << "thread 3" << endl;
}

int main() {

	thread t1(thread1);
	thread t2(thread2);
	thread t3(thread3);

	t1.join();
	t2.join();
	t3.join();

	

	return 0;
}
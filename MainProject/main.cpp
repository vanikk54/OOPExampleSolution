#include "Initializer.h"
#include "Manager.h"
#include "Worker.h"

int main() {
	//Human human;
	//Student student;
	// 1)Worker worker;
	// 2)Worker* workers = new Worker;
	// 3)Human* human = new Worker;
	//   Human* human = new Worker;

	Human* human = new Worker;

	cout << human->toString() << endl;

	return 0;
	}
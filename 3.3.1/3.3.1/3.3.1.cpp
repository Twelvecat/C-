//根据分数求等级switch
#include <iostream>
using namespace std;
int main() {
	int verb;
	cout << "Please input the number" << endl;
	cin >> verb;
	switch (verb / 10) {
	case 9:case 10:
		cout << "gradeA" << endl;
		break;
	case 8:
		cout << "gradeB" << endl;
		break;
	case  7:
		cout << "gradeC" << endl;
		break;
	case 6:
		cout << "GradeD" << endl;
		break;
	default:
		cout << "Faled" << endl;
		break;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	double radius, volume, weight;
	cout << "please input the radius:" << endl;
	cin >> radius;
	volume = 4 / 3 * 3.14*radius*radius*radius;
	weight = 4 * 3.14 * radius*radius;
	cout << "The volume and weight is:" << volume << weight << endl;
	return 0;
}
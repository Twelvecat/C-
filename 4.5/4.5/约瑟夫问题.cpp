#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m, j, k, i = 1, a = 0;
	cout << "Please input two num :";
	cin >> n >> m;
	vector<bool>people(n, 1);
	k = n;
	do {
		if (people.at((i-1)%n)){
			if (k != 1) {
				a += 1;
				if (a%m == 0) {
					j = (i - 1) % n;
					people.at(j) = 0;
					cout << j +1<< "����̭" << endl;
					--k;
				}
			}
			else break;
		}
		i += 1;
	} while (1);
	if (i%n != 0) {
		cout << "��" << (i) % n << "�Ǵ����" << endl;
	}
	else cout << "��" << n << "�Ǵ����" << endl;
	return 0;
}
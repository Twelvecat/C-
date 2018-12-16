#include "5.4.1.h"
int main() {
	vector<vector<double> >num;
	char x;
	vector<char>y;
	string tar;
	int len1, len2;
	while (1) {
		int i = 0, j = 0;
		getline(cin, tar);
		do {
			x = tar[i];
			if (x >= '0'&&x <= '9') {
				if(j==y.size()){
					num.push_back(vector<double>());
					++j;
				}
				num[j-1].push_back(x-48);
			}
			else if (x == '+' || x == '-' || x == '*' || x == '/') {
				y.push_back(x);
			}
			else if (x == '#') {
				i = -1;
				break;
			}
			++i;
		} while (i != tar.length());
		if (i == -1) break;
		vector<double>ture_num;
		for (int a = 0; a < num.size();++a) {
			for (int b = 0; b < num[a].size(); ++b)
				ture_num.push_back(vector_turn_num(num[b], num[b].size()));
		}
/*		for()
		sum += value(y[a], ture_num[])
		num.clear();
		y.clear();
		tar.clear();*/
	}
	return 0;
}
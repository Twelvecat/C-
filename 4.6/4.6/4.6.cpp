//������Ϸ
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int len, guess;//���ʵĳ���
	char x;
	const int NUM = 26;
	const string wordlist[NUM] = { "progarm","cat","cereal","danger","good","florid","garage","heal","insult","joke","keeper","loander",
								"nonce","oneset","ok","quiet","remoet","stolen","train","useful","valid","where","xenon","cool","result"};
	srand(time(0));
	char play;
	cout << "��ʿ����һҹ������<y/n>";
	cin >> play;
	while (play == 'y' || play == 'Y') {
		string target = wordlist[rand() % NUM];
		len = target.length();
		string waitting(len,'*'),badchar;
		guess = 10;
		cout << "�õ�����" << len << "����ĸ:" << waitting << endl;
		do {
			cout << "�����뱾�β²����ĸ";
			cin >> x;
			if (badchar.find(x) != string::npos || waitting.find(x) != string::npos) {
				cout << "�Ѿ��¹�����ĸ��������" << endl;
				continue;
			}
			auto loc = target.find(x);
			if (loc == string::npos) {
				--guess;
				cout << "û�д���ĸ,�㻹��" << guess << "�β´����" << endl;
				badchar += x;
			}
			else {
				cout << "�������ĸ����������" << endl;
				do {
					waitting[loc] = x;
					loc = target.find(x, loc + 1);
				} while (loc != string::npos);
			}
			cout << "��²�ĵ����ǣ�" << waitting << endl;
			if (waitting != target)
				cout << "�㻹��" << guess << "�β´�Ļ���" << endl;
		} while (guess >0 && waitting != target);
		if (guess > 0)cout << "��������ŷ�ʣ��ⶼ�ܲ¶ԣ���ȥ���Ʊ�ɣ��������һҹ������" << endl;
		else cout << "�����´μ����ɣ���" <<target<<"���²��ԣ��㲻��һҹ����" << endl;
		cout << "��ʿ����������?<y/n>";
		cin >> play;
	}
	cout << "Bye." << endl;
	return 0;
}
//猜字游戏
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int len, guess;//单词的长度
	char x;
	const int NUM = 26;
	const string wordlist[NUM] = { "progarm","cat","cereal","danger","good","florid","garage","heal","insult","joke","keeper","loander",
								"nonce","oneset","ok","quiet","remoet","stolen","train","useful","valid","where","xenon","cool","result"};
	srand(time(0));
	char play;
	cout << "勇士你想一夜暴富吗？<y/n>";
	cin >> play;
	while (play == 'y' || play == 'Y') {
		string target = wordlist[rand() % NUM];
		len = target.length();
		string waitting(len,'*'),badchar;
		guess = 10;
		cout << "该单词有" << len << "个字母:" << waitting << endl;
		do {
			cout << "请输入本次猜测的字母";
			cin >> x;
			if (badchar.find(x) != string::npos || waitting.find(x) != string::npos) {
				cout << "已经猜过本字母，请重试" << endl;
				continue;
			}
			auto loc = target.find(x);
			if (loc == string::npos) {
				--guess;
				cout << "没有次字母,你还有" << guess << "次猜错机会" << endl;
				badchar += x;
			}
			else {
				cout << "有这个字母，你真厉害" << endl;
				do {
					waitting[loc] = x;
					loc = target.find(x, loc + 1);
				} while (loc != string::npos);
			}
			cout << "你猜测的单词是：" << waitting << endl;
			if (waitting != target)
				cout << "你还有" << guess << "次猜错的机会" << endl;
		} while (guess >0 && waitting != target);
		if (guess > 0)cout << "厉害啊，欧皇，这都能猜对，快去买彩票吧，相信你会一夜暴富的" << endl;
		else cout << "非酋下次继续吧，连" <<target<<"都猜不对，你不配一夜暴富" << endl;
		cout << "勇士你想再来吗?<y/n>";
		cin >> play;
	}
	cout << "Bye." << endl;
	return 0;
}
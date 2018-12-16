#include"5.3.1.h"
vector<int>key;
string secret(string *data,const int&m) {
	for (int i=0;i<(*data).size();++i){
	key.push_back(((*data)[i] + m) / 128);
	(*data)[i]=((*data)[i] +m )%128;
	}
	return *data;
}
string desecret(string data, const int&m){
	for (int i = 0; i < data.length(); ++i) {
		data[i] = (128 * key[data.length()-i-1] + data[i] - m);
	}
	key.clear();
	return data;
}
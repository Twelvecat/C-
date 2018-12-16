#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Set;
ostream& operator<<(ostream &os, const Set &s);
class Set {
	vector<char>m_elems;
public:
	Set() = default;
	Set(const vector<char> &elem); //����
	bool is_elem(char); //�Ƿ��Ǽ���Ԫ��
	void insert(char); //����һ��Ԫ��
	void erase(char); //ɾ��һ��Ԫ��
	Set common(const Set &s); //�������ϵĽ���
	Set sum(const Set &s); //�������ϵĲ���
	Set &operator =(const Set &s); //��ֵ�����
	Set(const Set &s);//���ƹ��캯��
	friend ostream& operator<<(ostream &os, const Set &s);
	
};
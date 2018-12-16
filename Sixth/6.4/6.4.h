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
	Set(const vector<char> &elem); //构造
	bool is_elem(char); //是否是集合元素
	void insert(char); //插入一个元素
	void erase(char); //删除一个元素
	Set common(const Set &s); //两个集合的交集
	Set sum(const Set &s); //两个集合的并集
	Set &operator =(const Set &s); //赋值运算符
	Set(const Set &s);//复制构造函数
	friend ostream& operator<<(ostream &os, const Set &s);
	
};
#include"6.4.h"
class Set;
Set::Set(const vector<char> &elem) :m_elems(elem){} //构造
bool Set::is_elem(char a) {
	for (int i = 0; i < m_elems.size();++i) {
		if ( a == m_elems.at(i)) return true;
	}
	return false;
} //是否是集合元素
void Set::insert(char a) {
	m_elems.push_back(a);
} //插入一个元素
void Set::erase(char a) {
	for (int i = 0; i < m_elems.size(); ++i) {
		if (a == m_elems.at(i)) {
			for (int j = i + 1; j < m_elems.size(); ++j, ++i) {
				m_elems.at(i) = m_elems.at(j);
			}
			m_elems.pop_back();
		}
	}
} //删除一个元素
Set Set::common(const Set &s){
	Set result;
	for (int i = 0; i < s.m_elems.size(); i++){
		if (this->is_elem(s.m_elems.at(i))) result.insert(s.m_elems.at(i));
	}
return result;
	} //两个集合的交集
Set Set::sum(const Set &s) {
	Set result;
	for (int i = 0; i < s.m_elems.size(); i++) {
		result.insert(s.m_elems.at(i));
	}
	for (int j = 0; j < m_elems.size(); j++) {
		if (result.is_elem(m_elems.at(j)));
		else result.insert(m_elems.at(j));
	}
	return result;
}//两个集合的并集
Set &Set::operator =(const Set &s) {
	m_elems.clear();
	for (int i = 0; i < s.m_elems.size(); ++i) m_elems.push_back(s.m_elems.at(i));
	return *this;
}//赋值运算符
Set::Set(const Set &s) :m_elems(s.m_elems){}//复制构造函数
ostream& operator<<(ostream &os, const Set &s) {
	for (auto i : s.m_elems) {
		os << i << ",";
	}
	return os;
}
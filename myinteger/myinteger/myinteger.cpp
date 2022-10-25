#include "MyInteger.h";
#include <iostream>;
using namespace std;

MyInteger::MyInteger(int value) {
	this->value = value;
}

void MyInteger::SetValue(int v) {
	value = v;
}
int MyInteger::GetValue() const {
	return value;
}

MyInteger MyInteger::operator+(const MyInteger& r) const {
	MyInteger tempInt;
	tempInt.SetValue(this->GetValue() + r.GetValue());

	return tempInt;
}
MyInteger MyInteger::operator-(const MyInteger& r) const {
	MyInteger tempInt;
	tempInt.SetValue(this->GetValue() - r.GetValue());

	return tempInt;
}
MyInteger MyInteger::operator*(const MyInteger& r) const {
	MyInteger tempInt;
	tempInt.SetValue(this->GetValue() * r.GetValue());

	return tempInt;
};
MyInteger MyInteger::operator/(const MyInteger& r) const {
	MyInteger tempInt;
	tempInt.SetValue(this->GetValue() / r.GetValue());

	return tempInt;
}
bool MyInteger::operator==(const MyInteger& r) const {
	return this->GetValue() == r.GetValue();
}
bool MyInteger::operator!=(const MyInteger& r) const {
	return this->GetValue() != r.GetValue();
}

ostream& operator<<(ostream& out, const MyInteger& r){
	out << r.GetValue();
	return out;
}
istream& operator>>(istream& in, MyInteger& r) {
	in >> r.value;
	return in;
}

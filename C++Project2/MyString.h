#pragma once
#include <iostream>
using namespace std;
class MyString {
public:
	MyString(const char* s);
	MyString(const MyString& s);
	~MyString();

	int size();
	int length();
	int capacity();

	MyString &assign(const MyString &str);
	MyString &assign(const char *s);
	MyString &assign(const char *s, int n);

	MyString &operator=(const MyString &str);
	MyString &operator=(const char * s);

	MyString &operator+=(const MyString& str);
	MyString &operator+=(const char *s);

	friend ostream& operator<<(ostream& os, const MyString& str);
	friend istream& operator>>(istream& is, MyString& str);
	friend MyString operator+(const MyString& lhs, const MyString& rhs);

	void shrink_to_fit();

	void space();

protected:
	char *s_;
	int len_;
};

ostream& operator<<(ostream& os, const MyString& str);
istream& operator>>(istream& is, MyString& str);

MyString operator+(const MyString& lhs, const MyString& rhs);

class MyText : public MyString
{
public:
	MyText();
	MyText(const char* str);
	MyText(const MyString& str);
	MyText(const MyText& txt);
	~MyText();

	void space();
};
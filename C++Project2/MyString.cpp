#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

MyString::MyString(const char * s)
{
	this->len_ = strlen(s);
	this->s_ = new char[len_ + 1];
	strcpy(s_, s);
}

MyString::MyString(const MyString & s)
{
	this->len_ = s.len_;
	this->s_ = new char[len_ + 1];
	strcpy(s_, s.s_);
}

MyString::~MyString()
{
	delete[] s_;
}

int MyString::size()
{
	return len_;
}

int MyString::length()
{
	return len_;
}

int MyString::capacity()
{
	return len_ + 1;
}

MyString & MyString::assign(const MyString & str)
{
	delete[]this->s_;
	this->len_ = str.len_;
	this->s_ = new char[len_ + 1];
	strcpy(this->s_, str.s_);
	return (*this);
}

MyString & MyString::assign(const char * s)
{
	delete[]this->s_;
	this->len_ = strlen(s);
	this->s_ = new char[len_ + 1];
	strcpy(this->s_, s);
	return (*this);
}

MyString & MyString::assign(const char * s, int n)
{
	delete[]this->s_;
	this->len_ = n;
	this->s_ = new char[len_ + 1];
	for (int i = 0; i < n; i++)
		s_[i] = s[i];
	this->s_[len_] = '\0';
	return (*this);
}


MyString & MyString::operator=(const MyString & str)
{
	int len = strlen(str.s_);
	char *temp = new char[len+ 1];
	strcpy(temp, str.s_);

	delete[]this->s_;
	this->len_ = len;
	this->s_ = new char[this->len_ + 1];
	strcpy(this->s_, temp);
	return (*this);
}

MyString & MyString::operator=(const char * s)
{
	delete[]this->s_;
	len_ = strlen(s);
	s_ = new char[len_ + 1];
	strcpy(s_, s);
	return (*this);
}

MyString & MyString::operator+=(const MyString & str)
{
	char *string = new char[len_ + str.len_ + 1];
	strcpy(string, s_);
	strcat(string, str.s_);

	if (s_ != NULL)
		delete[]s_;
	s_ = string;
	return (*this);
}

MyString & MyString::operator+=(const char * s)
{
	char *string;
	int len;
	len = strlen(s);
	string = new char[len_ + len + 1];

	strcpy(string, s_);
	strcat(string, s);

	delete[]s_;
	this->len_ = len_ + len;
	s_ = new char[len_ + 1];
	strcpy(this->s_, string);
	return (*this);
}

void MyString::shrink_to_fit()
{
	this->len_ = strlen(this->s_);
	char *temp = new char[this->len_ + 1];
	strcpy(temp, this->s_);

	delete[]this->s_;
	this->s_ = new char[this->len_ + 1];
	strcpy(this->s_, temp);
}

void MyString::space()
{
	int i, j;

	if (s_[0] == '\0')
		return;

	while (s_[0] == ' ')
	{
		for (i = 0; s_[i + 1] != '\0'; i++)
			s_[i] = s_[i + 1];
		s_[strlen(s_) - 1] = '\0';
	}

	for (i = 1; s_[i + 1] != '\0';)
	{
		if (s_[i] == ' ' && s_[i + 1] == ' ')
		{
			for (j = i; s_[j + 1] != '\0'; j++)
				s_[j] = s_[j + 1];
			s_[strlen(s_) - 1] = '\0';
		}
		else
			i++;
	}

	for (i = strlen(s_) - 1; s_[i] == '\0' || s_[i] == ' '; i--)
	{
		if (s_[i] == ' ')
			s_[i] = '\0';
	}
	return;
}

ostream & operator<<(ostream & os, const MyString & str)
{
	os << str.s_;
	return os;
}

istream & operator>>(istream & is, MyString & str)
{
	char *string = new char[100];
	is >> string;
	str.len_ = strlen(string) + 1;
	str.s_ = new char[str.len_];

	strcpy(str.s_, string);

	return is;
}

MyString operator+(const MyString & lhs, const MyString & rhs)
{
	MyString sum("");
	sum.len_ = lhs.len_ + rhs.len_;

	sum += lhs;
	sum += rhs;

	return sum;
}

MyText::MyText() :MyString("") {}
MyText::MyText(const char* str):MyString(str)
{
	if (strchr(str,'\n')==NULL) //str에 '\n'이 존재하지 않는다면 NULL반환
	{
		MyString::operator+=("\n");
	}
}
MyText::MyText(const MyString& str) :MyString(str)
{
	if (strchr(s_, '\n') == NULL)
		MyString::operator+=("\n");
}

MyText::MyText(const MyText& txt) :MyString(txt)
{
	if (strchr(txt.s_, '\n') == NULL)
	{
		MyString::operator+=("\n");
	}
}
MyText::~MyText() {}

void MyText::space()
{
	int i, j;

	if (s_[0] == '\0')
		return;

	while(s_[0]==' ')
	{
		for (i = 0; s_[i + 1] != '\0'; i++)
			s_[i] = s_[i + 1];
			s_[strlen(s_) - 1] = '\0';
	}

	for (i = 1; s_[i + 1] != '\0';)
	{
		if (s_[i] == ' ' && s_[i + 1] == ' ')
		{
			for (j = i; s_[j + 1] != '\0'; j++)
				s_[j] = s_[j + 1];
				s_[strlen(s_) - 1] = '\0';
		}
		else
			i++;
	}

	for (i = strlen(s_) - 1; s_[i] == '\0' || s_[i] == ' '; i--)
	{
		if (s_[i] == ' ')
			s_[i] = '\0';
	}
	return;
}

ostream & operator<<(ostream & out, MyText & txt)
{
	out << (MyString)txt;
	return out;
}


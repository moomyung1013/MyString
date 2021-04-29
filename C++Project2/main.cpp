#include <iostream>
#include <cstdio>
#include "MyString.h"
using namespace std;

int main(void)
{
	cout << "[ MyString Test ]\n" << endl;
	MyString myS1 = "CHEN";
	MyString myS2 = myS1;

	cout << "<< myS1�� ���� >>\nmyS1 : " << myS1 << endl;
	cout << "myS1�� size : " << myS1.size() << endl;
	cout << "myS1�� length : " << myS1.length() << endl;
	cout<<"myS1�� capacity : " << myS1.capacity() << endl;

	cout << "\n<< myS2�� ���� >>\nmyS2 : " << myS2 << endl;
	cout << "myS2�� size : " << myS2.size() << endl;
	cout << "myS2�� length : " << myS2.length() << endl;
	cout << "myS2�� capacity : " << myS2.capacity() << endl;

	MyString myS3="";
	cout << "\n>>myS3�� �� ���ڿ��� �Է��ϼ��� : ";
	cin >> myS3;

	cout << "\n<< assign�Լ� �׽�Ʈ >>"<<endl;
	cout << "myS1.assign(myS3) : " << myS1.assign(myS3) << endl;
	cout << "myS1.assign(\"ChanYeol\") : " << myS1.assign("ChanYeol") << endl;
	cout << "myS1.assign(\"Hello D.O\",5) : " << myS1.assign("Hello D.O", 5) << endl;

	cout << "\n<< operator�Լ� �׽�Ʈ >>" << endl;
	cout << "myS1=myS3 : " << (myS1 = myS3) << endl;
	cout << "myS1=\"BaekHyun\" : " << (myS1 = "BaekHyun") << endl;
	cout << "myS1+=myS3 : " << (myS1 += myS3) << endl;
	cout << "myS3+=\"Yolo~\" : " << (myS3 += "Yolo~") << endl;
	cout << "myS2+myS3 : " << (myS2 + myS3) << endl;

	cout << "\n<< ���� ���ڿ� Ȯ�� >>" << endl;
	cout << "myS1 : " << myS1 << endl;
	cout << "myS2 : " << myS2 << endl;
	cout << "myS3 : " << myS3 << endl;

	cout << "\n<< shrink_to_fit�Լ� �׽�Ʈ >>" << endl;
	cout << "myS2.shrink_to_fit() ����" << endl;
	myS2.shrink_to_fit();
	cout << "myS2 : " << myS2 << endl;
	cout << "myS2�� size : " << myS2.size() << endl;
	cout << "myS2�� length : " << myS2.length() << endl;
	cout << "myS2�� capacity : " << myS2.capacity() << endl;

	cout << "\n<< �߰��Լ� space �׽�Ʈ >>"<<endl;
	MyString myS4 = "Hi  !  C++   !";
	cout << "�Լ� ���� �� : " << myS4 << endl;
	myS4.space();
	cout << "�Լ� ���� �� : " << myS4 << endl;
	/*
	//ũ�⿡ �°� �Ҵ� ������ ũ�⸦ ����
	cout << "shrink_to_fit()���� �� myS4�� size : " << myS4.size() << endl;
	cout << "shrink_to_fit()���� �� myS4�� length : " << myS4.length() << endl;
	cout << "shrink_to_fit()���� �� myS4�� capacity : " << myS4.capacity() << endl;
	myS4.shrink_to_fit();
	cout << "shrink_to_fit()���� �� myS4�� size : " << myS4.size() << endl;
	cout << "shrink_to_fit()���� �� myS4�� length : " << myS4.length() << endl;
	cout << "shrink_to_fit()���� �� myS4�� capacity : " << myS4.capacity() << endl;
	*/

	cout << "\n\n[ MyText Test ]\n" << endl;
	MyText myT1;
	MyText myT2 = "SUHO";
	MyText myT3 = myS2;
	MyText myT4 = myT2;

	cout << "\n<< ���� ���ڿ� Ȯ�� >>" << endl;
	cout << "myT1 : " << myT1 << endl;
	cout << "myT2 : " << myT2 << endl;
	cout << "myT3 : " << myT3 << endl;
	cout << "myT4 : " << myT4 << endl;

	cout << "\n<< �߰��Լ� space �׽�Ʈ >>" << endl;
	MyText myT5 = "Hi    Everyone!";
	cout << "�Լ� ���� �� : " << myT5 << endl;
	myT5.space();
	cout << "�Լ� ���� �� : "<<myT5 << endl;
}
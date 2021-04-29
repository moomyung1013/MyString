#include <iostream>
#include <cstdio>
#include "MyString.h"
using namespace std;

int main(void)
{
	cout << "[ MyString Test ]\n" << endl;
	MyString myS1 = "CHEN";
	MyString myS2 = myS1;

	cout << "<< myS1의 정보 >>\nmyS1 : " << myS1 << endl;
	cout << "myS1의 size : " << myS1.size() << endl;
	cout << "myS1의 length : " << myS1.length() << endl;
	cout<<"myS1의 capacity : " << myS1.capacity() << endl;

	cout << "\n<< myS2의 정보 >>\nmyS2 : " << myS2 << endl;
	cout << "myS2의 size : " << myS2.size() << endl;
	cout << "myS2의 length : " << myS2.length() << endl;
	cout << "myS2의 capacity : " << myS2.capacity() << endl;

	MyString myS3="";
	cout << "\n>>myS3에 들어갈 문자열을 입력하세요 : ";
	cin >> myS3;

	cout << "\n<< assign함수 테스트 >>"<<endl;
	cout << "myS1.assign(myS3) : " << myS1.assign(myS3) << endl;
	cout << "myS1.assign(\"ChanYeol\") : " << myS1.assign("ChanYeol") << endl;
	cout << "myS1.assign(\"Hello D.O\",5) : " << myS1.assign("Hello D.O", 5) << endl;

	cout << "\n<< operator함수 테스트 >>" << endl;
	cout << "myS1=myS3 : " << (myS1 = myS3) << endl;
	cout << "myS1=\"BaekHyun\" : " << (myS1 = "BaekHyun") << endl;
	cout << "myS1+=myS3 : " << (myS1 += myS3) << endl;
	cout << "myS3+=\"Yolo~\" : " << (myS3 += "Yolo~") << endl;
	cout << "myS2+myS3 : " << (myS2 + myS3) << endl;

	cout << "\n<< 현재 문자열 확인 >>" << endl;
	cout << "myS1 : " << myS1 << endl;
	cout << "myS2 : " << myS2 << endl;
	cout << "myS3 : " << myS3 << endl;

	cout << "\n<< shrink_to_fit함수 테스트 >>" << endl;
	cout << "myS2.shrink_to_fit() 실행" << endl;
	myS2.shrink_to_fit();
	cout << "myS2 : " << myS2 << endl;
	cout << "myS2의 size : " << myS2.size() << endl;
	cout << "myS2의 length : " << myS2.length() << endl;
	cout << "myS2의 capacity : " << myS2.capacity() << endl;

	cout << "\n<< 추가함수 space 테스트 >>"<<endl;
	MyString myS4 = "Hi  !  C++   !";
	cout << "함수 실행 전 : " << myS4 << endl;
	myS4.space();
	cout << "함수 실행 후 : " << myS4 << endl;
	/*
	//크기에 맞게 할당 공간의 크기를 조정
	cout << "shrink_to_fit()실행 전 myS4의 size : " << myS4.size() << endl;
	cout << "shrink_to_fit()실행 전 myS4의 length : " << myS4.length() << endl;
	cout << "shrink_to_fit()실행 전 myS4의 capacity : " << myS4.capacity() << endl;
	myS4.shrink_to_fit();
	cout << "shrink_to_fit()실행 후 myS4의 size : " << myS4.size() << endl;
	cout << "shrink_to_fit()실행 후 myS4의 length : " << myS4.length() << endl;
	cout << "shrink_to_fit()실행 후 myS4의 capacity : " << myS4.capacity() << endl;
	*/

	cout << "\n\n[ MyText Test ]\n" << endl;
	MyText myT1;
	MyText myT2 = "SUHO";
	MyText myT3 = myS2;
	MyText myT4 = myT2;

	cout << "\n<< 현재 문자열 확인 >>" << endl;
	cout << "myT1 : " << myT1 << endl;
	cout << "myT2 : " << myT2 << endl;
	cout << "myT3 : " << myT3 << endl;
	cout << "myT4 : " << myT4 << endl;

	cout << "\n<< 추가함수 space 테스트 >>" << endl;
	MyText myT5 = "Hi    Everyone!";
	cout << "함수 실행 전 : " << myT5 << endl;
	myT5.space();
	cout << "함수 실행 후 : "<<myT5 << endl;
}
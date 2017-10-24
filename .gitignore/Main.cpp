#include <C:\Users\Lay Di\Documents\Visual Studio 2013\Giaithua\Project1\Project1\Header.h>
using namespace std;
void main()
{
	Stack s;
	Data x;
	Stack s1;

	CreateStack(s);
	do
	{
		cout << "Nhập phần tử muốn dựa vào stack";
		cin >> x;
		Addtopstack(s, x);
	} while (x != 0 && !CheckstackF(s));

	cout << endl << "Stack nhập vào là:";
	ExportStack(s);
	CreateStack(s1);
	while (!CheckstackE(s))
	{
		Data x = TakeVTopStack(s);
		if (x % 2 == 0)
			Addtopstack(s1, x);
		DeleteTopStack(s);
	}
	while (!CheckstackE(s1))
	{
		Data x = TakeVTopStack(s1);
		Addtopstack(s, x);
		DeleteTopStack(s1);
	}
	cout << endl << "Stack nhập vào dạng số nguyên là:";
	ExportStack(s);
	cout << "Nhập số cần đổi";
	cin >> x;
	ThaptoNhi(x);
}

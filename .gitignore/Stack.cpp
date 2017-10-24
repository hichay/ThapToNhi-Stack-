#include <C:\Users\Lay Di\Documents\Visual Studio 2013\Giaithua\Project1\Project1\Header.h>

void CreateStack(Stack &s)
{ 
	s.top = 0;
}
int CheckstackE(Stack s)
{
	return (s.top == 0);
}
int CheckstackF(Stack s)
{ 
	return (s.top >= N);

}
int Addtopstack(Stack &s, Data x)
{
	if (CheckstackF(s))
	{
		cout << "Stack Day";
		return 0;
	}
	else
	s.a[s.top++] = x;
	return 1;
}
int DeleteTopStack(Stack &s)
{
	if (CheckstackE(s))
		return 1;
	else
		s.top--;
	    return s.top;
}
Data TakeVTopStack(Stack s)
{
	return s.a[s.top - 1];

}
void ExportStack(Stack s)
{
	Stack s1;
	CreateStack(s1);
	while (!CheckstackE(s))
	{ 
		Data x = TakeVTopStack(s);
		cout << x << "";
		Addtopstack(s1, x);
		DeleteTopStack(s);
	}
	while(!CheckstackE(s1))
	{
		Data x = TakeVTopStack(s1);
		Addtopstack(s, x);
		DeleteTopStack(s1);
	}
	cout << endl;
}

void ThaptoNhi(int x)
{
	Stack s;
	CreateStack(s);
	while (x > 0)
	{
		Addtopstack(s, x % 2);
		x = x / 2;
	}
	ExportStack(s);	
}

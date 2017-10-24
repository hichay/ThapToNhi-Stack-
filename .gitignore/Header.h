#include <iostream>
using namespace std;
#define N 20
typedef int Data;
struct Stack
{
	Data a[N];
	int top;

};


void CreateStack(Stack &s); //tạo stack
int CheckstackF(Stack s); //kiểm tra stack đầy
int CheckstackE(Stack s); //kiểm tra stack rỗng
int Addtopstack(Stack &s, Data x); //thêm vào đỉnh của stack
Data DeleteTopStack(Stack &s); //xóa đỉnh của stack
Data TakeVTopStack(Stack s); //lấy giá trị đầu của stack
void ExportStack(Stack s); //xuất stack
void ThaptoNhi(int x);//chuyển thập phân sang nhị phân

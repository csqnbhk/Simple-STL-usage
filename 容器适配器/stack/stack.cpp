/******************************************
   STL容器适配器 stack(不能使用迭代器，只有几个成员函数）
   2017/6/6
   作者：小菜
   没有做容错处理
*******************************************/
#include<iostream>
#include<stack>
using namespace std;

void Insert(stack<int>&);
void DelPop(stack<int>&);
void ReturnPop(stack<int>);
void Size(stack<int>);

int main()
{
	stack<int> qu;

	int i=0;
	cout<<"1.插入  2.删除 3.返回栈顶元素 4.求大小"<<endl;
	while(1)
    {
         
		cout<<"Please Input your choose:";
		cin>>i;
		switch(i)
		{
		 case 1:
		 Insert(qu);
		 break;
		 case 2:
		 DelPop(qu);
		 break;
		 case 3:
		 ReturnPop(qu);
		 break;
		 case 4:
		 Size(qu);
		 break;
		 default:
		 cout<<"输入有误!"<<endl;
		}
	}
	return 0;
}
	
void Insert(stack<int>&qu)
{
	int temp=0;
	cout<<"请你输入要插入的元素:";
	cin>>temp;
	qu.push(temp);
}
void DelPop(stack<int>&qu)
{
	if(qu.empty()==true)
    return;
	qu.pop();
	cout<<"删除栈顶元素成功!"<<endl;
}
void ReturnPop(stack<int> qu)
{
	if(qu.empty()==true)
	return;
	cout<<"栈顶元素为:"<<qu.top()<<endl;
}
void Size(stack<int> qu)
{
	cout<<"栈大小:"<<qu.size()<<endl;
}
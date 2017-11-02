/***********************************
   STL 容器适配器priority_queue
   2017/6/6
   作者:小菜
   没有做容错判断
**************************************/
#include<iostream>
#include<queue>
using namespace std;

void Insert(priority_queue<int>&);
void Del(priority_queue<int>&);
void ReturnQueue(priority_queue<int>);
void Size(priority_queue<int>);

int main()
{
	priority_queue<int> qu;
	int i=0;
	cout<<"1.队尾插入 2.队头删除 3.返回优先级最高元素 4.求大小"<<endl;
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
        Del(qu);
		break;
		case 3:
		ReturnQueue(qu);
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

void Insert(priority_queue<int>&qu)
{
	int i=0;
	cout<<"请你输入要插入的元素:";
	cin>>i;
	qu.push(i);
	cout<<"插入成功"<<endl;
}
void Del(priority_queue<int>&qu)
{
	if(qu.empty()==true)
	return;
	qu.pop();
	cout<<"删除成功"<<endl;
}
void ReturnQueue(priority_queue<int> qu)
{
	if(qu.empty()==true)
	return;
	cout<<"优先级最高元素为:"<<qu.top()<<endl;
}
void Size(priority_queue<int> qu)
{  
	cout<<"队列元素个数为:"<<qu.size()<<endl;
}
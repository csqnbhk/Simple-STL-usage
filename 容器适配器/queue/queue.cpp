/***********************************
   STL 容器适配器queue
   2017/6/6
   作者:小菜
   没有做容错判断
**************************************/
#include<iostream>
#include<queue>
using namespace std;

void Insert(queue<int>&);
void Del(queue<int>&);
void ReturnQueue(queue<int>);
void Size(queue<int>);

int main()
{
	queue<int> qu;
	int i=0;
	cout<<"1.队尾插入 2.队头删除 3.返回队尾和队头元素 4.求大小"<<endl;
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

void Insert(queue<int>&qu)
{
	int i=0;
	cout<<"请你输入要插入的元素:";
	cin>>i;
	qu.push(i);
	cout<<"插入成功"<<endl;
}
void Del(queue<int>&qu)
{
	if(qu.empty()==true)
	return;
	qu.pop();
	cout<<"删除成功"<<endl;
}
void ReturnQueue(queue<int> qu)
{
	if(qu.empty()==true)
	return;
	cout<<"队尾元素为:"<<qu.back()<<endl;
	cout<<"队头元素为:"<<qu.front()<<endl;
}
void Size(queue<int> qu)
{  
	cout<<"队列元素个数为:"<<qu.size()<<endl;
}

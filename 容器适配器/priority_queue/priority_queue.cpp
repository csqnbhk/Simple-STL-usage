/***********************************
   STL ����������priority_queue
   2017/6/6
   ����:С��
   û�����ݴ��ж�
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
	cout<<"1.��β���� 2.��ͷɾ�� 3.�������ȼ����Ԫ�� 4.���С"<<endl;
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
		cout<<"��������!"<<endl;
		}
	}
	return 0;
}

void Insert(priority_queue<int>&qu)
{
	int i=0;
	cout<<"��������Ҫ�����Ԫ��:";
	cin>>i;
	qu.push(i);
	cout<<"����ɹ�"<<endl;
}
void Del(priority_queue<int>&qu)
{
	if(qu.empty()==true)
	return;
	qu.pop();
	cout<<"ɾ���ɹ�"<<endl;
}
void ReturnQueue(priority_queue<int> qu)
{
	if(qu.empty()==true)
	return;
	cout<<"���ȼ����Ԫ��Ϊ:"<<qu.top()<<endl;
}
void Size(priority_queue<int> qu)
{  
	cout<<"����Ԫ�ظ���Ϊ:"<<qu.size()<<endl;
}
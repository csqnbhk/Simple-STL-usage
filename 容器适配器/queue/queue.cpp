/***********************************
   STL ����������queue
   2017/6/6
   ����:С��
   û�����ݴ��ж�
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
	cout<<"1.��β���� 2.��ͷɾ�� 3.���ض�β�Ͷ�ͷԪ�� 4.���С"<<endl;
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

void Insert(queue<int>&qu)
{
	int i=0;
	cout<<"��������Ҫ�����Ԫ��:";
	cin>>i;
	qu.push(i);
	cout<<"����ɹ�"<<endl;
}
void Del(queue<int>&qu)
{
	if(qu.empty()==true)
	return;
	qu.pop();
	cout<<"ɾ���ɹ�"<<endl;
}
void ReturnQueue(queue<int> qu)
{
	if(qu.empty()==true)
	return;
	cout<<"��βԪ��Ϊ:"<<qu.back()<<endl;
	cout<<"��ͷԪ��Ϊ:"<<qu.front()<<endl;
}
void Size(queue<int> qu)
{  
	cout<<"����Ԫ�ظ���Ϊ:"<<qu.size()<<endl;
}
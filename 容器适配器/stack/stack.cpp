/******************************************
   STL���������� stack(����ʹ�õ�������ֻ�м�����Ա������
   2017/6/6
   ���ߣ�С��
   û�����ݴ���
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
	cout<<"1.����  2.ɾ�� 3.����ջ��Ԫ�� 4.���С"<<endl;
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
		 cout<<"��������!"<<endl;
		}
	}
	return 0;
}
	
void Insert(stack<int>&qu)
{
	int temp=0;
	cout<<"��������Ҫ�����Ԫ��:";
	cin>>temp;
	qu.push(temp);
}
void DelPop(stack<int>&qu)
{
	if(qu.empty()==true)
    return;
	qu.pop();
	cout<<"ɾ��ջ��Ԫ�سɹ�!"<<endl;
}
void ReturnPop(stack<int> qu)
{
	if(qu.empty()==true)
	return;
	cout<<"ջ��Ԫ��Ϊ:"<<qu.top()<<endl;
}
void Size(stack<int> qu)
{
	cout<<"ջ��С:"<<qu.size()<<endl;
}
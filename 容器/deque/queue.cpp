/**********************************************
   ��ʾSTL������˫����� queue
   2017/6/4
   ���ߣ�С��
   û�����ݴ��ж�
************************************************/
#include<iostream>
#include<deque>
using namespace std;
deque<int> CreateQueue();//1.����queue
void Push(deque<int>&qu);//2.����Ԫ��
void pop(deque<int>&qu);//3.ɾ��Ԫ�أ��Ӷ�ͷɾ��
void Show(deque<int> qu);//4.����
void Enpty(deque<int> qu);//5.�ж�Ϊ��
void Size(deque<int> qu);//6.�󳤶�
void Clear(deque<int>&qu);//7.��ն���
static int Once=1;
int main()
{
     static deque<int> qu;
     int Flag=0;
	 cout<<"\n\n1.�������� 2.����Ԫ��  3.ɾ��Ԫ��  4.���� 5.�ж�Ϊ�� 6.����г��� 7.��ն���\n\n "<<endl;
	 while(1)
	 {
		 cout<<"��������Ҫ����:";
		 cin>>Flag;
		switch(Flag)
		{
		case 1:
		if(Once==1)
		{
		qu=CreateQueue();
		Once=0;
		}
		else
		cout<<"�Ѿ���������,�ò�����ֹ!"<<endl;
		break;
		case 2:
		Push(qu);
		break;
		case 3:
        pop(qu);
		break;
		case 4:
	    Show(qu);
		break;
		case 5:
        Enpty(qu);
		break;
		case 6:
	    Size(qu);
		break;
		case 7:
        Clear(qu);
		break;
		default:
	     cout<<"��������������������!"<<endl;
		}
	 }
  
	return 0;
}

//1.����queue
deque<int> CreateQueue()
{
	
     deque<int> qu;
     cout<<"�����ɹ�!"<<endl;
     return qu;
}
//2.����Ԫ��
void Push(deque<int>&qu)
{

	int temp=0;
	cout<<"��������Ҫ�����Ԫ��:";
	cin>>temp;
	qu.push_back(temp);
	cout<<"����ɹ�"<<endl;
}
//3.ɾ��Ԫ�أ��Ӷ�ͷɾ��
void pop(deque<int>&qu)
{
	qu.pop_front();
	cout<<"ɾ���ɹ�"<<endl;
}
//4.��������
void  Show(deque<int> qu)
{
	deque<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<"  ";
		it++;
	}
}
//5.�ж�Ϊ��
void Enpty(deque<int> qu)
{
	if(qu.empty()==true)
	{
		cout<<"����Ϊ��!"<<endl;
		return;
	}
   cout<<"���в�Ϊ��!"<<endl;
}
//6.�󳤶�
void Size(deque<int> qu)
{
	cout<<"���г���Ϊ:"<<qu.size()<<endl;
}
//7.��ն���
void Clear(deque<int>&qu)
{
   qu.clear();
   cout<<"��ն��гɹ�!"<<endl;
}
/**********************************************
   ��ʾSTL������˫������ list
   2017/6/4
   ����:С��
   û�����ݴ��ж�
************************************************/
#include<iostream>
#include<list>
using namespace std;
list<int> CreateList(list<int>&);//1.����list
void Push(list<int>&qu);//2.����Ԫ��
void pop(list<int>&qu);//3.ɾ��Ԫ�أ��Ӷ�ͷɾ��
void Show(list<int> qu);//4.����
void Enpty(list<int> qu);//5.�ж�Ϊ��
void Size(list<int> qu);//6.�󳤶�
void Clear(list<int>&qu);//7.�������
void FirstEnd(list<int> qu);//8.����ͷβ�ڵ�
void DelSpecial(list<int> &qu);//9.ɾ��ָ���ڵ�
void Sort(list<int>&qu);//����sort(),��С��������
static int Once=1;
int main()
{
     static list<int> qu;
     int Flag=0;
	 cout<<"\n\n1.�������� 2.����Ԫ��  3.ɾ��Ԫ��  4.���� 5.�ж�Ϊ�� 6.�������� 7.������� 8.����ͷβ�ڵ� 9.ɾ��ָ��Ԫ�� 10.����\n\n "<<endl;
	 while(1)
	 {
		 cout<<"��������Ҫ����:";
		 cin>>Flag;
		switch(Flag)
		{
		case 1:
		if(Once==1)
		{
		qu=CreateList(qu);
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
		case 8:
		FirstEnd(qu);
		break;
		case 9:
		DelSpecial(qu);
		break;
		case 10:
		Sort(qu);
		break;
		default:
	     cout<<"��������������������!"<<endl;
		}
	 }
  
	return 0;
}

//1.����queue
list<int> CreateList(list<int>&qu)
{
	
     cout<<"�����ɹ�!"<<endl;
     return qu;
}
//2.����Ԫ��
void Push(list<int>&qu)
{

	int temp=0;
	cout<<"��������Ҫ�����Ԫ��:";
	cin>>temp;
	qu.push_back(temp);
	cout<<"����ɹ�"<<endl;
}
//3.ɾ��Ԫ�أ��Ӷ�ͷɾ��
void pop(list<int>&qu)
{
	qu.pop_front();
	cout<<"ɾ���ɹ�"<<endl;
}
//4.��������
void  Show(list<int> qu)
{
	list<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<"  ";
		it++;
	}
}
//5.�ж�Ϊ��
void Enpty(list<int> qu)
{
	if(qu.empty()==true)
	{
		cout<<"����Ϊ��!"<<endl;
		return;
	}
   cout<<"����Ϊ��!"<<endl;
}
//6.�󳤶�
void Size(list<int> qu)
{
	cout<<"������Ϊ:"<<qu.size()<<endl;
}
//7.��ն���
void Clear(list<int>&qu)
{
   qu.clear();
   cout<<"�������ɹ�!"<<endl;
}
//8.����ͷβ
void FirstEnd(list<int> qu)
{
	cout<<"ͷ���Ϊ:"<<qu.front()<<" "<<"β�ڵ�Ϊ:"<<qu.back()<<endl;
}
//9.ɾ��ָ���ڵ�
void DelSpecial(list<int> &qu)
{
	int temp=0;
	list<int>::iterator it=qu.begin();
	cout<<"ɾ��ǰ��Ԫ��Ϊ:"<<endl;
	while(it!=qu.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<"��������Ҫɾ����Ԫ��:";
	cin>>temp;
    it=qu.begin();
	while(it!=qu.end())
	{
		if(*it==temp)
		{
		qu.erase(it);
		it=qu.begin();
		}
		else
		it++;

	}
	cout<<"ɾ�������Ϊ:"<<endl;
	it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<" ";
		it++;
	}

}
//����
void Sort(list<int>&qu)
{
	qu.sort();
	cout<<"����ɹ�!"<<endl;

}





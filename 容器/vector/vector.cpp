/**********************************************
   ��ʾSTL��������̬���� vector
   2017/6/5
   ����:С��
   û�����ݴ��ж�
************************************************/
#include<iostream>
#include<vector>
using namespace std;
vector<int> CreateList();//1.����vector
void Push(vector<int>&qu);//2.����Ԫ�أ�β������
void pop(vector<int>&qu);//3.ɾ��Ԫ�أ�β��ɾ��
void Show(vector<int> qu);//4.����
void Enpty(vector<int> qu);//5.�ж�Ϊ��
void Size(vector<int> qu);//6.�󳤶�
void Clear(vector<int>&qu);//7.���
void FirstEnd(vector<int> qu);//8.����ͷβ
void DelSpecial(vector<int> &qu);//9.ɾ��ָ��Ԫ��

static int Once=1;
int main()
{
     static vector<int> qu;
     int Flag=0;
	 cout<<"\n\n1.���� 2.����Ԫ��  3.ɾ��Ԫ��  4.���� 5.�ж�Ϊ�� 6.�󳤶� 7.��� 8.����ͷβ 9.ɾ��ָ��Ԫ�� 10.����\n\n "<<endl;
	 while(1)
	 {
		 cout<<"��������Ҫ����:";
		 cin>>Flag;
		switch(Flag)
		{
		case 1:
		if(Once==1)
		{
		qu=CreateList();
		Once=0;
		}
		else
		cout<<"�Ѿ�����,�ò�����ֹ!"<<endl;
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
		default:
	     cout<<"��������������������!"<<endl;
		}
	 }
  
	return 0;
}

//1.����queue
vector<int> CreateList()
{
	
     vector<int> qu;
     cout<<"�����ɹ�!"<<endl;
     return qu;
}
//2.����Ԫ��
void Push(vector<int>&qu)
{

	int temp=0;
	cout<<"��������Ҫ�����Ԫ��:";
	cin>>temp;
	qu.push_back(temp);
	cout<<"����ɹ�"<<endl;
}
//3.ɾ��Ԫ�أ���βɾ��
void pop(vector<int>&qu)
{
	
	qu.pop_back();
	cout<<"ɾ���ɹ�"<<endl;
}
//4.��������
void  Show(vector<int> qu)
{
	vector<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<"  ";
		it++;
	}
}
//5.�ж�Ϊ��
void Enpty(vector<int> qu)
{
	if(qu.empty()==true)
	{
		cout<<"Ϊ��!"<<endl;
		return;
	}
   cout<<"��Ϊ��!"<<endl;
}
//6.�󳤶�
void Size(vector<int> qu)
{
	cout<<"����Ϊ:"<<qu.size()<<endl;
}
//7.���
void Clear(vector<int>&qu)
{
   qu.clear();
   cout<<"��ճɹ�!"<<endl;
}
//8.����ͷβ
void FirstEnd(vector<int> qu)
{
	cout<<"ͷΪ:"<<qu.front()<<" "<<"βΪ:"<<qu.back()<<endl;
}
//9.ɾ��ָ��Ԫ��
void DelSpecial(vector<int> &qu)
{
	int temp=0;
	vector<int>::iterator it=qu.begin();
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

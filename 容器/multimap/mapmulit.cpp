/**********************************************
   ��ʾSTL������ӳ�� mapmulit  һ��keyֵ���ԶԶ��valueֵ
   2017/6/6
   ����:С��
   û�����ݴ��ж�
**********************************************/
#include<windows.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

void Insert(multimap<int,string>&);//����Ԫ��
void Delete(multimap<int,string>&);//ɾ��Ԫ��
void Show(multimap<int,string>);  //����Ԫ��
void Enpty(multimap<int,string>);  //�ж�Ϊ��
void Size(multimap<int,string>);   //�󳤶�
void Clear(multimap<int,string>&);  //���mapmulit
void Search(multimap<int,string>);  //����ָ��Ԫ��

static int Once=1;
int main()
{
     multimap<int,string> qu;
     int Flag=0;
	 cout<<"\n\n 1.����Ԫ��  2.�ɼ�ɾ��Ԫ��  3.���� 4.�ж�Ϊ�� 5.�󳤶� 6.��� 7.�ɼ�����ָ��Ԫ�� \n\n "<<endl;
	 while(1)
	 {
		 cout<<"��������Ҫ����:";
		 cin>>Flag;
		switch(Flag)
		{
		
		case 1:
		Insert(qu);
		break;
		case 2:
        Delete(qu);
		break;
		case 3:
	    Show(qu);
		break;
		case 4:
        Enpty(qu);
		break;
		case 5:
	    Size(qu);
		break;
		case 6:
        Clear(qu);
		break;
		case 7:
	    Search(qu);
	    break;
		default:
	     cout<<"��������������������!"<<endl;
		}
	 }
  
	return 0;
}

void Insert(multimap<int,string>&qu)//����Ԫ��
{
	int i=0;
	string str;
	char buffer[256]={0};
	cout<<"Please Input the int and string :";
	cin>>i;
	cin>>buffer;
	cout<<endl;
	str=buffer;
    pair<int,string> p1(i,str);
	qu.insert(p1);

}

void Delete(multimap<int,string>&qu)//ɾ��Ԫ��
{
	int i=0;
	multimap<int,string>::iterator it=qu.begin();
	
	while(it!=qu.end())
	{
		cout<<it->first<<" "<<it->second<<endl;
        it++;
	}
	cout<<"��������Ҫɾ���ļ�:";
	cin>>i;
	qu.erase(i);
	cout<<"ɾ���ɹ�!"<<endl;
}
void Show(multimap<int,string> qu)  //����Ԫ��
{
	cout<<"������ʼ!"<<endl;
	multimap<int,string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
        cout<<it->first<<" "<<it->second<<endl;
        it++;
	}
	cout<<"��������!"<<endl;
}
void Enpty(multimap<int,string> qu) //�ж�Ϊ��
{
	if(qu.empty()==true)
	{
		cout<<"multimapΪ��"<<endl;
		return;
	}
    cout<<"��Ϊ��"<<endl;
}
void Size(multimap<int,string> qu)  //�󳤶�
{
	cout<<"multimap�ĳ���Ϊ:"<<qu.size()<<endl;
}
void Clear(multimap<int,string>&qu) //���map
{
	qu.clear();
	cout<<"��ճɹ�!"<<endl;
}
void Search(multimap<int,string> qu)  //����ָ��Ԫ��

{	
	multimap<int,string>::const_iterator it=qu.begin();
    /*int i=0;
	cout<<"Please Input the search key:";
	cin>>i;
	while(it!=qu.end())
	{
	   if(it->first==i)
       cout<<i<<"����Ӧ��ֵΪ"<<it->second<<endl;
	   it++;

	}*/
	string str;
	cout<<"Please Input the search val:";
	cin>>str;
	while(it!=qu.end())
	{
		if(it->second==str)
		cout<<str<<"ֵ��Ӧ�ļ�Ϊ:"<<it->first<<endl;
		it++;
	}

}
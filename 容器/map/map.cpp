/**********************************************
   ��ʾSTL������ӳ�� map һ��keyֵֻ�ܶ�һ��valueֵ
   2017/6/5
   ����:С��
   û�����ݴ��ж�
**********************************************/
#include<windows.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

void Insert(map<int,string>&);//����Ԫ��
void Delete(map<int,string>&);//ɾ��Ԫ��
void Show(map<int,string>);  //����Ԫ��
void Enpty(map<int,string>);  //�ж�Ϊ��
void Size(map<int,string>);   //�󳤶�
void Clear(map<int,string>&);  //���map
void Search(map<int,string>);  //����ָ��Ԫ��

static int Once=1;
int main()
{
     map<int,string> qu;
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

void Insert(map<int,string>&qu)//����Ԫ��
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

void Delete(map<int,string>&qu)//ɾ��Ԫ��
{
	int i=0;
	map<int,string>::iterator it=qu.begin();
	
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
void Show(map<int,string> qu)  //����Ԫ��
{
	cout<<"������ʼ!"<<endl;
	map<int,string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
        cout<<it->first<<" "<<it->second<<endl;
        it++;
	}
	cout<<"��������!"<<endl;
}
void Enpty(map<int,string> qu) //�ж�Ϊ��
{
	if(qu.empty()==true)
	{
		cout<<"mapΪ��"<<endl;
		return;
	}
    cout<<"��Ϊ��"<<endl;
}
void Size(map<int,string> qu)  //�󳤶�
{
	cout<<"map�ĳ���Ϊ:"<<qu.size()<<endl;
}
void Clear(map<int,string>&qu) //���map
{
	qu.clear();
	cout<<"��ճɹ�!"<<endl;
}
void Search(map<int,string> qu)  //����ָ��Ԫ��

{	
     int i=0;
	cout<<"Please Input the search key:";
	cin>>i;
    cout<<i<<"����Ӧ��ֵΪ"<<(qu.find(i))->second<<endl;
}
/******************************************
   STL��set��������
   2017/6/5
   ����:С��
   û�����ݴ��ж�
******************************************/
#include<iostream>
#include<set>
#include<string>
using namespace std;

void Insert(set<string>&);
void Del(set<string>&);
void Show(set<string>);
void Search(set<string>);
void Enpty(set<string>);
void Size(set<string>);
void Clear(set<string>&);


int main()
{
	set<string> qu;
    int Select=0;
	cout<<"\n1.���� 2.ɾ�� 3.���� 4.���� 5.�ж�Ϊ�� 6.���С 7.���\n"<<endl;
	while(1)
	{
         cout<<"Please Input you choose:";
	     cin>>Select;
         switch(Select)
		 {
		   case 1:
		   Insert(qu);
           break;
		   case 2:
		   Del(qu);
		   break;
		   case 3:
           Show(qu);
		   break;
		   case 4:
		   Search(qu);
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
		   cout<<"��������!"<<endl;
		   
		 }


	}
	return 0;
}
void Insert(set<string>&qu)
{
	string buffer;
	cout<<"��������Ҫ�����ַ���:";
	cin>>buffer;
	qu.insert(buffer);
}
void Del(set<string>&qu)
{
    string buffer;
	set<string>::iterator it=qu.begin();
	while(it!=qu.end())
	{
      cout<<*it<<endl;
	  it++;
	}
	cout<<"��������Ҫɾ��Ԫ��:";
	cin>>buffer;
    it=qu.find(buffer);
    qu.erase(it);
	cout<<"ɾ���ɹ�!"<<endl;

}
void Show(set<string> qu)
{
	set<string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<endl;
		it++;
	}
	cout<<"�������!"<<endl;
}
void Search(set<string> qu)
{
	string buffer;
	cout<<"��������Ҫ���ҵ�Ԫ��:";
	cin>>buffer;
	set<string>::const_iterator it;
	it=qu.find(buffer);
	if(it!=qu.end())
    cout<<"�����д��ڸ�Ԫ��!"<<endl;
	else
	cout<<"�����в����ڸ�Ԫ��!"<<endl;
}
void Enpty(set<string> qu)
{
	if(qu.empty()!=true)
	cout<<"���ϲ�Ϊ��!"<<endl;
	else
	cout<<"����Ϊ��!"<<endl;
}
void Size(set<string> qu)
{
	cout<<"���ϴ�СΪ:"<<qu.size()<<endl;
}
void Clear(set<string>&qu)
{
	qu.clear();
	cout<<"��ռ��ϳɹ�!"<<endl;
}

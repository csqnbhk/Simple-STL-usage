/******************************************
   STL��multiset��������
   2017/6/6
   ����:С��
   û�����ݴ��ж�
******************************************/
#include<iostream>
#include<set>
#include<string>
using namespace std;

void Insert(multiset<string>&);
void Del(multiset<string>&);
void Show(multiset<string>);
void Search(multiset<string>);
void Enpty(multiset<string>);
void Size(multiset<string>);
void Clear(multiset<string>&);


int main()
{
	multiset<string> qu;
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
void Insert(multiset<string>&qu)
{
	string buffer;
	cout<<"��������Ҫ�����ַ���:";
	cin>>buffer;
	qu.insert(buffer);
}
void Del(multiset<string>&qu)
{
    string buffer;
	multiset<string>::iterator it=qu.begin();
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
void Show(multiset<string> qu)
{
	multiset<string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<endl;
		it++;
	}
	cout<<"�������!"<<endl;
}
void Search(multiset<string> qu)
{
	string buffer;
	cout<<"��������Ҫ���ҵ�Ԫ��:";
	cin>>buffer;
	multiset<string>::const_iterator it;
	it=qu.find(buffer);
	if(it!=qu.end())
    cout<<"�����д��ڸ�Ԫ��!"<<endl;
	else
	cout<<"�����в����ڸ�Ԫ��!"<<endl;
}
void Enpty(multiset<string> qu)
{
	if(qu.empty()!=true)
	cout<<"���ϲ�Ϊ��!"<<endl;
	else
	cout<<"����Ϊ��!"<<endl;
}
void Size(multiset<string> qu)
{
	cout<<"���ϴ�СΪ:"<<qu.size()<<endl;
}
void Clear(multiset<string>&qu)
{
	qu.clear();
	cout<<"��ռ��ϳɹ�!"<<endl;
}

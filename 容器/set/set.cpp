/******************************************
   STL的set集合容器
   2017/6/5
   作者:小菜
   没有做容错判断
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
	cout<<"\n1.插入 2.删除 3.遍历 4.查找 5.判断为空 6.求大小 7.清空\n"<<endl;
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
		   cout<<"输入有误!"<<endl;
		   
		 }


	}
	return 0;
}
void Insert(set<string>&qu)
{
	string buffer;
	cout<<"请你输入要插入字符串:";
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
	cout<<"请你输入要删除元素:";
	cin>>buffer;
    it=qu.find(buffer);
    qu.erase(it);
	cout<<"删除成功!"<<endl;

}
void Show(set<string> qu)
{
	set<string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<endl;
		it++;
	}
	cout<<"遍历完成!"<<endl;
}
void Search(set<string> qu)
{
	string buffer;
	cout<<"请你输入要查找的元素:";
	cin>>buffer;
	set<string>::const_iterator it;
	it=qu.find(buffer);
	if(it!=qu.end())
    cout<<"集合中存在该元素!"<<endl;
	else
	cout<<"集合中不存在该元素!"<<endl;
}
void Enpty(set<string> qu)
{
	if(qu.empty()!=true)
	cout<<"集合不为空!"<<endl;
	else
	cout<<"集合为空!"<<endl;
}
void Size(set<string> qu)
{
	cout<<"集合大小为:"<<qu.size()<<endl;
}
void Clear(set<string>&qu)
{
	qu.clear();
	cout<<"清空集合成功!"<<endl;
}

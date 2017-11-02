/******************************************
   STL的multiset集合容器
   2017/6/6
   作者:小菜
   没有做容错判断
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
void Insert(multiset<string>&qu)
{
	string buffer;
	cout<<"请你输入要插入字符串:";
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
	cout<<"请你输入要删除元素:";
	cin>>buffer;
    it=qu.find(buffer);
    qu.erase(it);
	cout<<"删除成功!"<<endl;

}
void Show(multiset<string> qu)
{
	multiset<string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<endl;
		it++;
	}
	cout<<"遍历完成!"<<endl;
}
void Search(multiset<string> qu)
{
	string buffer;
	cout<<"请你输入要查找的元素:";
	cin>>buffer;
	multiset<string>::const_iterator it;
	it=qu.find(buffer);
	if(it!=qu.end())
    cout<<"集合中存在该元素!"<<endl;
	else
	cout<<"集合中不存在该元素!"<<endl;
}
void Enpty(multiset<string> qu)
{
	if(qu.empty()!=true)
	cout<<"集合不为空!"<<endl;
	else
	cout<<"集合为空!"<<endl;
}
void Size(multiset<string> qu)
{
	cout<<"集合大小为:"<<qu.size()<<endl;
}
void Clear(multiset<string>&qu)
{
	qu.clear();
	cout<<"清空集合成功!"<<endl;
}

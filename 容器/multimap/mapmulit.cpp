/**********************************************
   演示STL中容器映射 mapmulit  一个key值可以对多个value值
   2017/6/6
   作者:小菜
   没有做容错判断
**********************************************/
#include<windows.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

void Insert(multimap<int,string>&);//插入元素
void Delete(multimap<int,string>&);//删除元素
void Show(multimap<int,string>);  //遍历元素
void Enpty(multimap<int,string>);  //判断为空
void Size(multimap<int,string>);   //求长度
void Clear(multimap<int,string>&);  //清空mapmulit
void Search(multimap<int,string>);  //访问指定元素

static int Once=1;
int main()
{
     multimap<int,string> qu;
     int Flag=0;
	 cout<<"\n\n 1.插入元素  2.由键删除元素  3.遍历 4.判断为空 5.求长队 6.清空 7.由键访问指定元素 \n\n "<<endl;
	 while(1)
	 {
		 cout<<"请你输入要操作:";
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
	     cout<<"输入有误，请你重新输入!"<<endl;
		}
	 }
  
	return 0;
}

void Insert(multimap<int,string>&qu)//插入元素
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

void Delete(multimap<int,string>&qu)//删除元素
{
	int i=0;
	multimap<int,string>::iterator it=qu.begin();
	
	while(it!=qu.end())
	{
		cout<<it->first<<" "<<it->second<<endl;
        it++;
	}
	cout<<"请你输入要删除的键:";
	cin>>i;
	qu.erase(i);
	cout<<"删除成功!"<<endl;
}
void Show(multimap<int,string> qu)  //遍历元素
{
	cout<<"遍历开始!"<<endl;
	multimap<int,string>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
        cout<<it->first<<" "<<it->second<<endl;
        it++;
	}
	cout<<"遍历结束!"<<endl;
}
void Enpty(multimap<int,string> qu) //判断为空
{
	if(qu.empty()==true)
	{
		cout<<"multimap为空"<<endl;
		return;
	}
    cout<<"不为空"<<endl;
}
void Size(multimap<int,string> qu)  //求长度
{
	cout<<"multimap的长度为:"<<qu.size()<<endl;
}
void Clear(multimap<int,string>&qu) //清空map
{
	qu.clear();
	cout<<"清空成功!"<<endl;
}
void Search(multimap<int,string> qu)  //访问指定元素

{	
	multimap<int,string>::const_iterator it=qu.begin();
    /*int i=0;
	cout<<"Please Input the search key:";
	cin>>i;
	while(it!=qu.end())
	{
	   if(it->first==i)
       cout<<i<<"键对应的值为"<<it->second<<endl;
	   it++;

	}*/
	string str;
	cout<<"Please Input the search val:";
	cin>>str;
	while(it!=qu.end())
	{
		if(it->second==str)
		cout<<str<<"值对应的键为:"<<it->first<<endl;
		it++;
	}

}
/**********************************************
   演示STL中容器双向链表 list
   2017/6/4
   作者:小菜
   没有做容错判断
************************************************/
#include<iostream>
#include<list>
using namespace std;
list<int> CreateList(list<int>&);//1.创建list
void Push(list<int>&qu);//2.插入元素
void pop(list<int>&qu);//3.删除元素，从队头删除
void Show(list<int> qu);//4.遍历
void Enpty(list<int> qu);//5.判断为空
void Size(list<int> qu);//6.求长度
void Clear(list<int>&qu);//7.清空链表
void FirstEnd(list<int> qu);//8.返回头尾节点
void DelSpecial(list<int> &qu);//9.删除指定节点
void Sort(list<int>&qu);//排序，sort(),从小到大排序
static int Once=1;
int main()
{
     static list<int> qu;
     int Flag=0;
	 cout<<"\n\n1.创建链表 2.插入元素  3.删除元素  4.遍历 5.判断为空 6.求链表长队 7.清空链表 8.访问头尾节点 9.删除指定元素 10.排序\n\n "<<endl;
	 while(1)
	 {
		 cout<<"请你输入要操作:";
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
		cout<<"已经创建链表,该操作禁止!"<<endl;
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
	     cout<<"输入有误，请你重新输入!"<<endl;
		}
	 }
  
	return 0;
}

//1.创建queue
list<int> CreateList(list<int>&qu)
{
	
     cout<<"创建成功!"<<endl;
     return qu;
}
//2.插入元素
void Push(list<int>&qu)
{

	int temp=0;
	cout<<"请你输入要插入的元素:";
	cin>>temp;
	qu.push_back(temp);
	cout<<"插入成功"<<endl;
}
//3.删除元素，从队头删除
void pop(list<int>&qu)
{
	qu.pop_front();
	cout<<"删除成功"<<endl;
}
//4.遍历队列
void  Show(list<int> qu)
{
	list<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<"  ";
		it++;
	}
}
//5.判断为空
void Enpty(list<int> qu)
{
	if(qu.empty()==true)
	{
		cout<<"链表为空!"<<endl;
		return;
	}
   cout<<"链表不为空!"<<endl;
}
//6.求长度
void Size(list<int> qu)
{
	cout<<"链表长度为:"<<qu.size()<<endl;
}
//7.清空队列
void Clear(list<int>&qu)
{
   qu.clear();
   cout<<"清空链表成功!"<<endl;
}
//8.访问头尾
void FirstEnd(list<int> qu)
{
	cout<<"头结点为:"<<qu.front()<<" "<<"尾节点为:"<<qu.back()<<endl;
}
//9.删除指定节点
void DelSpecial(list<int> &qu)
{
	int temp=0;
	list<int>::iterator it=qu.begin();
	cout<<"删除前的元素为:"<<endl;
	while(it!=qu.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<"请你输入要删除的元素:";
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
	cout<<"删后的链表为:"<<endl;
	it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<" ";
		it++;
	}

}
//排序
void Sort(list<int>&qu)
{
	qu.sort();
	cout<<"排序成功!"<<endl;

}





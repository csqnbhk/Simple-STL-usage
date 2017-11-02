/**********************************************
   演示STL中容器双向队列 queue
   2017/6/4
   作者：小菜
   没有做容错判断
************************************************/
#include<iostream>
#include<deque>
using namespace std;
deque<int> CreateQueue();//1.创建queue
void Push(deque<int>&qu);//2.插入元素
void pop(deque<int>&qu);//3.删除元素，从队头删除
void Show(deque<int> qu);//4.遍历
void Enpty(deque<int> qu);//5.判断为空
void Size(deque<int> qu);//6.求长度
void Clear(deque<int>&qu);//7.清空队列
static int Once=1;
int main()
{
     static deque<int> qu;
     int Flag=0;
	 cout<<"\n\n1.创建队列 2.插入元素  3.删除元素  4.遍历 5.判断为空 6.求队列长队 7.清空队列\n\n "<<endl;
	 while(1)
	 {
		 cout<<"请你输入要操作:";
		 cin>>Flag;
		switch(Flag)
		{
		case 1:
		if(Once==1)
		{
		qu=CreateQueue();
		Once=0;
		}
		else
		cout<<"已经创建队列,该操作禁止!"<<endl;
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
		default:
	     cout<<"输入有误，请你重新输入!"<<endl;
		}
	 }
  
	return 0;
}

//1.创建queue
deque<int> CreateQueue()
{
	
     deque<int> qu;
     cout<<"创建成功!"<<endl;
     return qu;
}
//2.插入元素
void Push(deque<int>&qu)
{

	int temp=0;
	cout<<"请你输入要插入的元素:";
	cin>>temp;
	qu.push_back(temp);
	cout<<"插入成功"<<endl;
}
//3.删除元素，从队头删除
void pop(deque<int>&qu)
{
	qu.pop_front();
	cout<<"删除成功"<<endl;
}
//4.遍历队列
void  Show(deque<int> qu)
{
	deque<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<"  ";
		it++;
	}
}
//5.判断为空
void Enpty(deque<int> qu)
{
	if(qu.empty()==true)
	{
		cout<<"队列为空!"<<endl;
		return;
	}
   cout<<"队列不为空!"<<endl;
}
//6.求长度
void Size(deque<int> qu)
{
	cout<<"队列长度为:"<<qu.size()<<endl;
}
//7.清空队列
void Clear(deque<int>&qu)
{
   qu.clear();
   cout<<"清空队列成功!"<<endl;
}
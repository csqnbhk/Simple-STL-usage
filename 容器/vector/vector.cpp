/**********************************************
   演示STL中容器动态数组 vector
   2017/6/5
   作者:小菜
   没有做容错判断
************************************************/
#include<iostream>
#include<vector>
using namespace std;
vector<int> CreateList();//1.创建vector
void Push(vector<int>&qu);//2.插入元素，尾部插入
void pop(vector<int>&qu);//3.删除元素，尾部删除
void Show(vector<int> qu);//4.遍历
void Enpty(vector<int> qu);//5.判断为空
void Size(vector<int> qu);//6.求长度
void Clear(vector<int>&qu);//7.清空
void FirstEnd(vector<int> qu);//8.返回头尾
void DelSpecial(vector<int> &qu);//9.删除指定元素

static int Once=1;
int main()
{
     static vector<int> qu;
     int Flag=0;
	 cout<<"\n\n1.创建 2.插入元素  3.删除元素  4.遍历 5.判断为空 6.求长队 7.清空 8.访问头尾 9.删除指定元素 10.排序\n\n "<<endl;
	 while(1)
	 {
		 cout<<"请你输入要操作:";
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
		cout<<"已经创建,该操作禁止!"<<endl;
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
	     cout<<"输入有误，请你重新输入!"<<endl;
		}
	 }
  
	return 0;
}

//1.创建queue
vector<int> CreateList()
{
	
     vector<int> qu;
     cout<<"创建成功!"<<endl;
     return qu;
}
//2.插入元素
void Push(vector<int>&qu)
{

	int temp=0;
	cout<<"请你输入要插入的元素:";
	cin>>temp;
	qu.push_back(temp);
	cout<<"插入成功"<<endl;
}
//3.删除元素，从尾删除
void pop(vector<int>&qu)
{
	
	qu.pop_back();
	cout<<"删除成功"<<endl;
}
//4.遍历队列
void  Show(vector<int> qu)
{
	vector<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it<<"  ";
		it++;
	}
}
//5.判断为空
void Enpty(vector<int> qu)
{
	if(qu.empty()==true)
	{
		cout<<"为空!"<<endl;
		return;
	}
   cout<<"不为空!"<<endl;
}
//6.求长度
void Size(vector<int> qu)
{
	cout<<"长度为:"<<qu.size()<<endl;
}
//7.清空
void Clear(vector<int>&qu)
{
   qu.clear();
   cout<<"清空成功!"<<endl;
}
//8.访问头尾
void FirstEnd(vector<int> qu)
{
	cout<<"头为:"<<qu.front()<<" "<<"尾为:"<<qu.back()<<endl;
}
//9.删除指定元素
void DelSpecial(vector<int> &qu)
{
	int temp=0;
	vector<int>::iterator it=qu.begin();
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

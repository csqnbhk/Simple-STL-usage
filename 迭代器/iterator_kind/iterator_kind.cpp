/**************************************
   STL的迭代器 1.iterator  2.const_iterator
   2017/6/6
   作者：小菜
***************************************/
#include<iostream>
#include<vector>
using namespace std;


void Witerator(vector<int>&);
void Wconst_iterator(vector<int>);

int main()
{
	vector<int> qu;
	qu.push_back(1);
	qu.push_back(3);
	qu.push_back(5);

    cout<<"1.iterator访问(可修改元素值）  2.const_iterator访问（不可修改元素值） "<<endl;
	while(1)
	{
		int i=0;
		cout<<"Please Input your choose:";
		cin>>i;
		switch(i)
		{
		   case 1:
		   Witerator(qu);
		   break;
		   case 2:
		   Wconst_iterator(qu);
		   break;
		   default:
		   cout<<"输入有误!"<<endl;
		}
	}
	return 0;
}
void Witerator(vector<int>&qu)
{
	vector<int>::iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it++<<" ";
	}
	cout<<endl;
}
void Wconst_iterator(vector<int> qu)
{
     vector<int>::const_iterator it=qu.begin();
	while(it!=qu.end())
	{
		cout<<*it++<<" ";
	}
	cout<<endl;

}
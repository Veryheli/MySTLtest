#include<iostream>
#include<string>
#include<vector>
#include<deque>
using namespace std;
class Person
{
public :
	int age;
	string name;
	Person(string name,int age)
	{
		this->name=name;
		this->age=age;
	}
	void ShowName()
	{
		cout<<"name: "<<this->name<<endl;

		cout<<"age: "<<this->name<<endl;
	}
};
void printLine(string s){
    cout<<"------------------------"<<s<<"-----------------------"<<endl;
}
//vector存放用户自定义数据类型
void test1()
{
	vector<Person*>v;
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	Person p5("eee",50);
	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	//遍历容器中的数据
	for(vector<Person*>::iterator it = v.begin();it != v.end();it++)
	{
		cout<<"name:"<<(*it)->name<<"  age:"<<(*it)->age<<endl;

	}


}
//容器的嵌套
void test2()
{
	vector< vector<int>>v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	//向小容器中添加数据
	for(int i = 0;i < 4;i++)
	{
		v1.push_back(i + 2);
		v2.push_back(i + 3);
		v3.push_back(i + 4);
		v4.push_back(i + 5);

	}
	//向大容器中添加数据
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	for(vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
	{
		for(vector<int>::iterator i = (*it).begin();i != (*it).end();i++)
		{
			cout<< " "<<*i;
		}
		cout<<endl;
	}

}
void printVector(vector<int>&v)
{
	for(vector<int>::iterator it = v.begin();it != v.end();it++)
	cout<<(*it)<<" ";
    cout<<endl;
}
//vector的容量和大小
void test3()
{
	vector<int>v;
	for(int i = 0;i < 10;i++)
		v.push_back(i);
	printVector(v);
	cout<<"v的容量为："<<v.capacity()<<endl;
	cout<<"v的大小为："<<v.size()<<endl;
	cout<<"改变v后"<<endl;
	for(int i = 10;i < 24;i++)
		v.push_back(i);
	printVector(v);
	cout<<"v的容量为："<<v.capacity()<<endl;
	cout<<"v的大小为："<<v.size()<<endl;
			
}
//vector容器的互换
void test4()
{
	vector<int>v;
	for(int i = 0;i < 10;i++)
		v.push_back(i);
	vector<int>v2;
	for(int i = 11;i > 1;i--)
		v2.push_back(i);
	printVector(v);
	printVector(v2);
	cout<<"after swap"<<endl;
    v.swap(v2);
	printVector(v);
	printVector(v2);
}

int main()
{
    printLine("vector存放用户自定义数据类型");
	test1();//vector存放用户自定义数据类型
    printLine("vector容器的嵌套");
	test2();//vector容器的嵌套
    printLine("vector容器的容量和大小");
	test3();//vector的容量和大小
    printLine("vector容器的交换");
    test4();//vector容器的互换
}

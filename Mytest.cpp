/* 2021年 07月 28日 星期三 19:46:39 CST */

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
void testt()
{
	vector<int>v;
	
}
//函数模板
template<typename T>
void myswap(T &a,T &b)//交换数据函数模板
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template<typename T>
void sortArry(T arry[],int len)//数组排序函数模板
{
	int i;
	for(i = 0;i < len;i++)
	{
		int max = i;//默认下标为i的元素为最大值
		for(int j = i + 1;j < len;j++)
		{
			if(arry[j] > arry[max])
			{
				max = j;//遍历出最大元素的下标
			}
		}
		if(max != i)myswap(arry[i],arry[max]);

	}
}

template<typename T>
void printArry(T arry[],int len)//数组输出函数模板
{
	for(int i = 0;i < len;i++)
	{
		cout<<arry[i]<<" ";
	}
	cout<<endl;
}
void test3()//案例一,字符型数组使用上述函数模板
{

	char a[] = "abcdefghijklmn";
	int len;
	len = sizeof(a)/sizeof(a[0]);
	sortArry(a,len);
	printArry(a,len);
}
void test4()//案例二,整形数组使用上述函数模板
{
	int a[] = {1,2,87,7,8,748,454,784,65,22};
	int len;
	len = sizeof(a)/sizeof(a[0]);
	sortArry<int>(a,len);
	printArry(a,len);
}
//string容器
//字符串的查找
void test5()
{
	string str="abcdefghijklmn";
	int pos1=str.find("efg");//find从左往右查. rfind从右往左查
	int pos2=str.find("kill");
	if(pos1 == -1)
	{
		cout<<"can't find this string: efg"<<endl;

	}
	else
	{
		cout<<"efg is in the string:"<<str<<" with the position:"<<pos1<<endl;
	}
	if(pos2 == -1)
	{
		cout<<"can't find this string: kill"<<endl;

	}
	else
	{
		cout<<"efg is in the string:"<<str<<" with the position:"<<pos2<<endl;
	}

}
//字符串的替换
void test6()
{
	string str;
	cout<<"plase input a sentence...."<<endl;
	cin>>str;
	int s1 = -1;
	do
	{
		s1 = str.find("?");
		if(s1 != -1)
			str.replace(s1,1,"!");
	}while(s1 != -1);
	int s2 = -1;
	do
	{
		s2 = str.find("你");
		if(s2 != -1)
			str.replace(s2,1,"我");
	}while(s2 != -1);
	int s3 = -1;
	do
	{
		s3 = str.find("吗");
		if(s3 != -1)
			str.replace(s3,1," ");
	}while(s3 != -1);
	cout<<str<<endl;
}
//string容器访问容器中的内容
void test7()
{
	string str;
	str="hello";
	//通过[]来访问和修改
        for(int i=0;i < str.size();i++)
	{
		cout<<str[i];
	}
	cout<<endl;
	str[0]='x';
	cout<<str<<endl;
	//通过at来访问和修改
	for(int i = 0;i < str.size();i++)
	{
		cout<<str.at(i);
	}
	cout<<endl;
	str.at(0)='h';
	cout<<str<<endl;
}
void showtest()
{
	cout<<"YouCompleteMesuccess"<<endl;
	vector<int>v;
	for(int i = 0;i<10;i++)
	v.push_back(i);
	for(vector<int>::iterator it = v.begin();it != v.end();it++)
	cout<<(*it)<<" ";
	cout<<endl;	
}
void printVector(vector<int>&v)
{
	for(vector<int>::iterator it = v.begin();it != v.end();it++)
	cout<<(*it)<<" ";
	cout<<endl;
}
//vector的容量和大小
void test8()
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
void test9()
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

void printdeque(deque<int>&d)
{
    for(deque<int>::iterator it = d.begin();it != d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//deque容器的构造函数
void test10()
{
    deque<int>d;
    //尾插
    for(int i = 0;i < 10;i++)
    {
        d.push_back(i);
    }
    cout<<"尾插后 。。。"<<endl;
    printdeque(d);
    //头插
    for(int i = 0;i < 10;i++)
    {
        d.push_front(i);
    }
    cout<<"头插后。。。"<<endl;
    printdeque(d);

}
int main()
{
//	test1();//vector存放用户自定义数据类型
//	test2();//vector容器的嵌套
//	test3();//字符数组使用函数模板
//	test4();//整形数组使用函数模板
//	test5();//string容器字符串的查找
//	test6();//string容器字符串的替换
//	showtest();
	//test7();//访问string容器中的内容
//	test8();//vector的容量和大小
	/* test9();//vector容器的互换 */
    test10();
}

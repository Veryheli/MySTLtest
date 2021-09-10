#include <iostream>
#include<set>
#include<string>
using namespace std;
void printSet(const set<int>&s)
{
    for(set<int>::const_iterator it = s.begin();it != s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01(){
    set<int>s;
    //set can only insert data by insert()
    s.insert(15);
    s.insert(12);
    s.insert(13);
    s.insert(10);
    s.insert(11);
    //set will  be sorted automaticly
    printSet(s);
    cout<<"set中有"<<s.size()<<"个元素"<<endl;
    s.insert(40);
    s.insert(50);
    s.insert(20);
    printSet(s);
    cout<<"set中有"<<s.size()<<"个元素"<<endl;
}
class Person{
public:
    int age;
    string name;
    Person(string name,int age)
    {
        this->age = age;
        this->name = name;
    }
};
class myCompare{
public:
    bool operator()(const Person& p1,const Person& p2)const{
        return p1.age > p2.age;
    }
        
};
void test02()
{
    set<Person,myCompare>s;
    Person p1("a",100);
    Person p2("b",80);
    Person p3("u",14);
    Person p4("o",40);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    for(set<Person,myCompare>::iterator it = s.begin();it != s.end();it++)
    {
        cout<<"name:"<<it->name<<"  age:"<<it->age<<endl;
    }
}
int main()
{
    cout<<"-------------------set容器存放默认数据类型---------------------"<<endl;
    test01();
    cout<<"-------------------set容器存放自定数据类型---------------------"<<endl;
    test02();
    return 0;
}


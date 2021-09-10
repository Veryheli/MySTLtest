#include<iostream>
#include<list>
#include<string>
using namespace std;
class Person
{
public:
   string name;
   int age;
   Person(string name,int age)
   {
       this->name = name;
       this->age = age;
   }
   Person(const Person &p)
   {
       this->name = p.name;
       this->age = p.age;
   }

};
bool myCompare(Person a,Person b)
{
    return a.age < b.age;
}
void printList(const list<Person>&l)
{
    for(list<Person>::const_iterator it = l.begin();it != l.end();it++)
    {
        cout<<"name:"<<it->name<<endl;
        cout<<"age:"<<it->age<<endl;

    }
}void test02(list<Person>&p)
{
    Person p1("a",10);
    Person p2("b",40);
    Person p3("c",30);
    list<Person>l;
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    p.swap(l);
}
void test01()
{
    list<Person>l;
    Person p1("孙悟空",1000);
    Person p4("唐僧",40);
    Person p3("沙和尚",700);
    Person p2("猪八戒",800);
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.sort(myCompare);
    printList(l);
    cout<<"before swap..."<<endl;
    printList(l);
    cout<<"after swap...."<<endl;
    test02(l);
    l.sort(myCompare);

    printList(l);

}


int main()
{
    test01();
    return 0;
}


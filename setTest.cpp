#include <iostream>
#include <set>
#include <string>

using namespace std;

class Person{
public:
    int age;
    string name;
    Person(int age,string name)
    {
        this->age = age;
        this->name = name;
    }
};
class MyCompare
{
public:
    bool operator()(const Person& p1,const Person& p2)const
    {
        return  p1.age > p2.age;
    }
};
int main(void)
{
    set<Person,MyCompare>s;
    Person p1(10,"a");
    Person p2(13,"b");
    Person p3(14,"c");
    Person p4(11,"d");
    /* s.insert(p1); */
    /* s.insert(p2); */
    /* s.insert(p3); */
    /* s.insert(p4); */
    /* for(set<Person,MyCompare>::iterator it = s.begin();it != s.end();it++) */
    /* { */
    /*     cout<<"name:"<<it->name<<" age:"<<it->age<<endl; */
    /* } */
    return 0;
}


#include <iostream>
#include<map>
using namespace std;
void printMap(map<int,int>&m){
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout<<"key:"<<(*it).first<<"    data:"<<(*it).second<<endl;
    }
}
void test01()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,48));
    m.insert(pair<int,int>(2,85));
    m.insert(pair<int,int>(3,45));
    m.insert(pair<int,int>(4,65));
    m.insert(pair<int,int>(5,75));
    printMap(m);
}
int main()
{
    test01();
    return 0;
}


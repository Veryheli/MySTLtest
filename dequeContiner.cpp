/* deque容器是一个双向容器，可以向两头插入数据 */

/* 2021年 08月 02日 星期一 12:20:16 CST */
#include <iostream>
#include<deque>
using namespace std;
void printDeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    deque<int>d;
    for(int i = 0;i < 10;i++)
    {
        d.push_back(i+1);
    }
    printDeque(d);
    for(int i = 20;i > 10;i--)
    {
        d.push_front(i);
    }
    printDeque(d);
}
int main()
{
    test01();
    cout << "Hello world" << endl;
    return 0;
}


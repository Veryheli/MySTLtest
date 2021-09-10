/* stack容器测试 */
/* 2021年 08月 02日 星期一 11:24:25 CST */

#include <iostream>
#include<stack>
using namespace std;
void printStack(stack<int>&s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void test01()
{
    stack<int>s;
    for(int i = 0;i < 10;i++)
    {
        s.push(i);
    }
    cout<<"---------------遍历前----------------"<<endl;
    if(s.empty())
    {
        cout<<"stack容器为空"<<endl;
    }else{
        cout<<"stack容器不空"<<endl;
    }

    printStack(s);
    cout<<"---------------遍历后----------------"<<endl;
    if(s.empty())
    {
        cout<<"stack容器为空"<<endl;
    }else{
        cout<<"stack容器不空"<<endl;
    }
}
int main()
{
    std::cout << "Hello world" << std::endl;
    test01();
    return 0;
}


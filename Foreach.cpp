/*************************************************************************
    > File Name: Foreach.cpp
# Author: chen
# mail: 1771391789@qq.com
    > Created Time: 2021年08月03日 星期二 22时00分04秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class print01
{
public:
    void operator()(int val)
    {
        cout<<val<<" ";
    }
};
void print02(int val)
{
    cout<<val<<" ";
}
 void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(80);
    v.push_back(60);
    v.push_back(30);
    v.push_back(50);
    print01 p;
    for_each(v.begin(),v.end(),p);
    cout<<endl;
    for_each(v.begin(),v.end(),print02);
    cout<<endl;
    cout<<"-----------------------"<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),p);
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}


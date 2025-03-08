#include<iostream>
#include<cstdio>
using namespace std;
#define LOG(x) cout<<x<<endl;//类可以包含函数
class Player//默认情况下类是私有的，然而结构体是共有的。
{
public:
    int x,y;
    int speed;
    void Move(int xa,int ya)
    {
        x+=xa*speed;
        y+=ya*speed;
    }
};
struct hhh
{
private:
    //此时这个就相当于private；
};
struct Vec2
{
    float x,y;
};
int main()
{
    Player player;
    player.Move(1,-1);
    cin.get();
    return 0;
}
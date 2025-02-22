#include<iostream>
#include<cstdio>
using namespace std;
class Log
{
public:
    const int LoglevelError=0;
    const int Loglevelwarning=1;
    const int Loglevelinfo=2;
private:
    int m_Loglevel;
public:
    void Setlevel(int level)
    {
        m_Loglevel=level;
    }
    void warn(const char* message)
    {
        cout<<"[warning]"<<message<<endl;
    }
    void Error(const char* message)
    {
        if(m_Loglevel>=LoglevelError)
            cout<<"[Error]"<<message<<endl;
    }
};
int main()
{
    Log log;
    log.Setlevel(2);
    log.warn("Hello!");
    cin.get();
    return 0;
}
#include <iostream>
using namespace std;
class parent
{
    public:
    void setstring()
    {
        cout<<"this is the parent class";
    }
    private:
    string s;
    protected:

};
class child:public parent
{
    public:
    void setstring()
    [
        cout<<"this is the child class";

    ]
    private:
    string str;
    protected:

;}
int main()
{
parent obj;
child obj1;
obj.setstring;
obj1.setstring;
obj.setstring;
}
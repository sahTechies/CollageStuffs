#include<iosteam>

class add
{
    int a,b,c;
    public:
    void getdata()
    {
        std::cout<<"Enter two numbers: ";
        std::cin>>a>>b;
    }

    void add::getdata()
    {
        c=a+b;
        std::cout<<"Sum is: "<<c;
    }
}

int main()
{
    add obj;
    obj.getdata();
    obj.add::getdata();
    return 0;
}
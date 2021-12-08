#include <iostream>

using namespace std;


class test
{
private:
    const int a;
    int b;
public:
    test():a(0){ b = 100;};
    test(int x):a(x){b = 100;};
    ~test();

public:
    // int getValue();
    int getValue() const;
};

// int test::getValue()
// {
//     return this->a;
// }

int test::getValue( ) const
{
    return this->b;
}

test::~test()
{
}


int main()
{
    test *p = new test(4);
    cout << p->getValue() << endl;
    cout << "Hello world"<<endl;
    // system("pause");
    return 0;
}
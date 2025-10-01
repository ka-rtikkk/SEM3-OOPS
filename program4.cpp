#include <iostream>
using namespace std;

class ABC
{
    int x, y;
public:
    void get()
    {
        cout << "enter two numbers" << endl;
        cin >> x >> y;
    }
    void show()
    {
        cout << "the numbers are " << x << " and " << y << endl;
    }
};

int main()
{
    ABC obj;
    obj.get();
    obj.show();

    return 0;
}
#include <iostream>
using namespace std;
class stud
{
    public:
    stud()
    {
        cout<<"constructor used"<<endl;
    }
    ~stud()
    {
        cout<<"destructor used"<<endl;
    }
};
int main()
{
    stud *s=new stud[4];
    delete[]s;
    return 0;
}

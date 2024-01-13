// how to define method outside of the class

#include <iostream>
using namespace std;
class Book
{
    private:
            int bid,bprice;
            string bname;

    public:
    void accept();
    void display();

};
void Book :: accept()
{
    cout << "Enter bid, bnamae, and bprice";
    cin>> bid>>bname>>bprice;
}
void Book :: display()
{
    cout<< "\tbid"<<bid<<"\tbname"<<bname<<"\tbprice"<<bprice;
}
int main ()
{
    Book b1;
    b1.accept();
    b1.display();
    return 0;
}

#include <iostream>
using namespace std;

class siswa;

class orang {
private:
    string name;
public:
    void setName(string pName);
    friend class siswa;
};
class siswa {
private:
    int id;
public:
    void setId(int pId);
    void displayAll(orang& a);

};

void siswa::displayAll(orang& a) {
    cout << id << endl << a.name;
}

void siswa::setId(int pId) {
    id = pId;
}

void orang::setName(string pName) {
    name = pName;

}
int main()
{
    orang o;
    o.setName("Joko Kumat");
    siswa s;
    s.setId(1);
    s.displayAll(o);
    cout << endl;
    system("pause");
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

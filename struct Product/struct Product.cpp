#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct Product
{
    char description[32];
    int partNum;
    double cost;
};

int main()
{
    Product p1 = {"screw-driver", 456, 5.50},
            p2 = {"hammer", 324, 8.20};
    cout << p1.description << " " <<  p1.partNum << " " << p1.cost << endl;
    cout << p2.description << " " <<  p2.partNum << " " << p2.cost << endl;
    cout << endl;

    Product P[10];
    for(int i = 0; i < 10; i++)
    {
        strcpy(P[i].description, " ");
        P[i].partNum = 0;
        P[i].cost = 0.0;
    }

    Product P1[5] = {{"screw-driver", 456, 5.50}, {"hammer", 324, 8.20}, {"socket", 458, 5.75}, {"plier", 929, 10.50}, {"hand-saw", 536, 7.45}};
    for(int i = 0; i < 5; i++)
    {
        cout << P1[i].description << setw(15) << P1[i].partNum << setw(20) << P1[i].cost << endl;
    }

    return 0;
}

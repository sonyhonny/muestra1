#include
using namespace std;

int main()
{
    int num,fact=1;
    cout << "::FACTORIAL::" << endl;
    cout <> num;
    for(int i=2; i<=num; i++)
    {
        fact = fact * i;
    }
    cout << "Su factorial es: " << fact;
    cin.get();cin.get();
    return 0;
}
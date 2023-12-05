#include <iostream>
using namespace std;
int main()
{
    int number;
    for (int i = 0; i < 26; i++)
    {
        cin>>number;
        cout<<(char)((number-1)+'a');
    }
    cout<<endl;
    return 0;
}
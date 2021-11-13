#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 0, 7, 2};
    int current = 0;
    for (int i = 0; i < 5; i++)
    {

        for (int j = i; j < 5; j++)
        {
            current += arr[j];
            cout << arr[j] << "";
            //cout<<endl;
            // cout<<"sum is:"<<current;
        }
        cout << "\t";
    }

    return 0;
}

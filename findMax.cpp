#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int input,mx=-888888888;
    //cout << "Enter a number:" << endl;
    //cin >> input;
    int arr[5]={0,-9,1,-4,5};
    for (int i = 0; i < 5; i++)
    { 
       mx=max(mx,arr[i]);
        cout<<mx;
    }
    
    return 0;
}

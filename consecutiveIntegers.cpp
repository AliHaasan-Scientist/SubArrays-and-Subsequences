#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d = arr[1] - arr[0];
    int current = 2;
    int ans = 2;
    int j = 2;
    while (j < n)
    {
        if (arr[j] - arr[j - 1] ==d)
        {
            current++;
        }
        else
        {
            d=arr[j]-arr[j-1];
current=2;
        }
        ans =max(ans,current);
        j++;
    }
    cout<<ans<<endl;
}

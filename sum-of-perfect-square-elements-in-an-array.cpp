#include<iostream>
#include<math.h>
using namespace std;

int isPerfectSquare(int number)
{
    int iVar;
    float fVar;

    fVar=sqrt((double)number);
    iVar=fVar;

    if(iVar==fVar)
        return number;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + isPerfectSquare(arr[i]);
    }
    cout << sum;
    return 0;
}
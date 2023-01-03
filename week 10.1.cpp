#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    std::cout << "Enter N value:" << std::endl;
    cin>>n;
    int arr[n];
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=arr[i/2]+i%2;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}   

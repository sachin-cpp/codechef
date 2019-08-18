#include <iostream>
using namespace std;

int main()
{   
    int n=0,i=0;
    
    cin>>n;
    int row[n]={0},column[n]={0},boxes[n]={0};
    for(i=0;i<n;i++)
    {
        cin>>row[i]>>column[i];
        boxes[i]=(row[i]-1)*(column[i]-1);
    }
    for(i=0;i<n;i++)
    {
        cout<<boxes[i]<<endl;
    }
    return 0;
}


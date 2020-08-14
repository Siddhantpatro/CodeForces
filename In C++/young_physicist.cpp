#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int n, x, y, z;
    int x_sum = 0;
    int y_sum = 0;
    int z_sum = 0;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }
    if(x_sum == 0 && y_sum == 0 && z_sum == 0){
        cout<<"YES"<<"\n";
        return 0;
        
    }else{
    cout<<"NO"<<"\n";
    return 0;
    }
}
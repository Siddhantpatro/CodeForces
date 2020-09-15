#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int testcase;
    cin>>testcase;

    for(int i=0; i<testcase; i++)
    {
        long x, y, n;
        cin >> x >> y >> n;

        long count;
        long answer;

        count = n / x;
        answer = x * count + y;

        if(answer > n)
        {
            answer -= x;

        }cout << answer << "\n";
    }

}

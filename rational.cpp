#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n,k;
    unsigned long long int result[t];
    int w;

    int x = 0;
    int y = 0;
    int z = 0;
    while (t > x)
    {
        cin >> n ;
        cin >> k;
        unsigned long long int gifts[n];
        unsigned long long sum=0;
        int dists[k];
        while(n > y){
            cin >> gifts[y];
            sum += gifts[y];
            y++;
        }
        while( k > z){
            cin >> dists[z];
            z++;
        }
        result[x] = sum;

        y = 0;
        z = 0;
        x++;
    }
    while(t > y){
        cout << result[y] << "\n";
        y++;
    }
}

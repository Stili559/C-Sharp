#include<iostream>

using namespace std;

int main(){

    int N, result = 1;

    cout<<"Please, enter a number below 20: "<<endl;
    cin>>N;

    for(int i=1; i<=N; i++)
        {
        if(i % 4 == 0)
        {
        result *= i;
        }

        }

    cout<<"1* 4* 8 * ... * (4n – 8) * (4n – 4) * 4n: "<<result;

    return 0;
}

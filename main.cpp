#include <iostream>
#include <cmath>

int main()
{
    int p=0;
    float res = 1;
    float num=365;
    float n=365;
// it`s important to set res,num,n to float data type
    while(res>0.5)
    {
        res *=(n/num);
        n--;
        p++;
    }
    std::cout<<"When # of people equals "<<p<<", the probability that there exists two people born at the same day is no less than 0.5."<<std::endl;

    return 0;
}

// computes pi with monte carlo simulation

#include <iostream>
#include <cstdlib>
#include <random>
static long randn_1 = 100;
static long randn_2 = 1000;
static long randn_3 = 10000;

int main()
{
    int i;
    double x, y;
    double lower_bound = -1;
    double upper_bound = 1;
    double incirc = 0;
    double pi, sum1, sum2, sum3 = 0.0;
    using namespace std;
    uniform_real_distribution<double> unif(lower_bound, upper_bound);
    default_random_engine re;
    for(i=0; i< randn_1; i++)
    {
        x = unif(re);
        y = unif(re);
        if(x*x + y*y <= 1){
            incirc += 1;
        }
    
    }
    pi = 4.0 * (incirc/randn_1);
    cout << "Estimated value of pi for " << randn_1 << " points is: " << pi << endl;
    pi = 0;
    incirc = 0;
    for(i=0; i< randn_2; i++)
    {
        x = unif(re);
        y = unif(re);
        if(x*x + y*y < 1){
            incirc += 1;
        }
        
    }
    pi = 4.0 * (incirc/randn_2);
    cout << "Estimated value of pi for " << randn_2 << " points is: " << pi << endl;
    pi = 0;
    incirc = 0;
    for(i=0; i< randn_3; i++)
    {
        x = unif(re);
        y = unif(re);
        if(x*x + y*y < 1){
            incirc += 1;
        }
        
    }
    pi = 4.0 * (incirc/randn_3);
    cout << "Estimated value of pi for " << randn_3 << " points is: " << pi << endl;
}

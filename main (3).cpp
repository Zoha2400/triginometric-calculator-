#include <iostream>
#include <math.h>

using namespace std;

int fact(int arg){
    if(arg == 1) return arg;
    else return arg * fact(arg - 1);
}

int main()
{
    double eps = 0.0001, rad, pi = M_PI, answer = 1, step;
    int x, n = 2;
    
    cout << "cos(x). x = ";
    cin >> x;
    
    rad = x * pi / 180;
    
    for(int i = 1; i < n; i++){
        
        step = (pow(-1, i) * pow(rad, 2*i) / fact(2 * i));
        
        if(step < eps){
            answer += step;
        }else{
            answer += step;
            n++;
        }
    }
    
    cout << answer;
    
    return 0;
}

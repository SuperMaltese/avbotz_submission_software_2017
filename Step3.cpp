#include <fstream>
#include <iostream>
#import <math.h>
double a, b, c;
int num;

int main() {
    
    std::ifstream input;
    std::ofstream output;
    input.open("test.in");
    output.open("test.out");
    
    for(int x = 0; x<10; x++){
        input>>a>>b>>c;
        if((a*a + b*b + c*c)>200*200)
          num++;
        output<<(int)sqrt(a*a+b*b+c*c)<<std::endl;
    }
    
    output<<num<<std::endl;
    input.close();
    output.close();
}

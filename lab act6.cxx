#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    
    cout<<"Enter your word:";
    cin>>a;
    
    if(a=="DERIVATIVE"){
        cout<<"Measures the rate of change of a function.";
    }else if (a=="INTEGRAL"){
        cout<<"Represent the area under a curve, used for accumulation.";
    }else if (a=="LIMIT"){
        cout<<"The value a function approaches as input approaches a point.";
    }else if (a=="CONTINUITY"){
        cout<<"A function is continuous if there are no breaks or jumps.";
    }else if (a=="DIFFERENTIATION"){
        cout<<"The process of finding a derivative.";
    }else{
        cout<<"No word is found";
    }
    
    return 0;
}
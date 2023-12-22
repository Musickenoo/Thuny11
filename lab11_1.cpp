#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    int x=0;
    srand(time(0));
    string grade[9]={"A", "B+", "B", "C+","C", "D+", "D", "F","W"};
    cout << "Press Enter 3 times to reveal your future.\n";
    while(x < 3 ){
        cin.get() ;
        x++;
    }
    cout << "You will get "<<grade[rand()%9]<<" in this 261102.";
    return 0;
}


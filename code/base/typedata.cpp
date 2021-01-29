#include<iostream>
#include<limits>

using namespace std;

int main()
{
    cout << "type: \t\t" << "*************************size*********************"<< endl;
    cout << "bool: \t\t" << "所占字节: "<< sizeof(bool);
    cout << "\t最大值:" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值:" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节:"<< sizeof(char); 
    cout << "\t最大值:" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值:" << (numeric_limits<char>::min)() << endl;

    return 0;
}
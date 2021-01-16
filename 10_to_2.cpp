#include <iostream>
#include <math.h>

using namespace std;

int Dec2Bin(int n) 
{
    int binaryNumber = 0;
    int p = 0;
    while (n > 0)
    {
        binaryNumber += (n % 2) * pow(10, p);
        ++p;
        n /= 2;
    }
    return binaryNumber;
}
 
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int b = pow(2,n);
    for(int i = 0; i < b; i++)
    {
    	cout << Dec2Bin(i) << endl;
	}
    
}

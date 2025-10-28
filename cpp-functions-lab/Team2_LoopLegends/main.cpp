#include <iostream>
using namespace std;

int calc(int arr[],int size)
{
int evenCount = 0;
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 == 0) evenCount++;
return evenCount;
}


int main() {
    int arr[5];
    cout << "Введіть 5 чисел: ";
    for (int i = 0; i < 5; i++) cin >>
     arr[i];
    
    cout << "Парних чисел: " << evenCount;
}



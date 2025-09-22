#include <iostream>
using namespace std;

void analyze_pointer(int *ptr){
    cout << "memory location: " << ptr << endl;
    cout << "integer at this memory: " << *(ptr) << endl;
}

int main(){

    int num = 6;
    analyze_pointer(&num);

    int* num2 = new int;
    *(num2) = 7;
    analyze_pointer(num2);
	delete num2;
}


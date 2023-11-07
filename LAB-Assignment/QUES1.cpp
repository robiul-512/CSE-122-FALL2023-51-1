#include <iostream>
using namespace std;

class Array {
private:
    int intArray[100];
    char charArray[100];
    double fltArray[100];
    int intIndex = 0;
    int charIndex = 0;
    int fltIndex = 0;

public:

    void insert(int index, int value) {
        if (index >= 0 && index <= intIndex){
            intArray[index] = value;
            intIndex++;
        }
    }

    void insert(int index, char value) {
        if (index >= 0 && index <= charIndex){
            charArray[index] = value;
            charIndex++;
        }
    }


    void insert(int index, double value) {
        if (index >= 0 && index <= fltIndex){
            fltArray[index] = value;
            fltIndex++;
        }
    }


    void display() {

        for (int i = 0; i < intIndex; i++) {
            cout << intArray[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < charIndex; i++) {
            cout << charArray[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < fltIndex; i++) {
            cout << fltArray[i] << " ";
        }
        cout<<endl<<endl;
    }
};

int main() {
    Array arr1;

    arr1.insert(0, 10);
    arr1.insert(1, 20);
    arr1.insert(2, 30);

    arr1.insert(0, 'a');
    arr1.insert(1, 'b');
    arr1.insert(2, 'c');

    arr1.insert(0, 1.1);
    arr1.insert(1, 1.2);

    arr1.display();

    return 0;
}

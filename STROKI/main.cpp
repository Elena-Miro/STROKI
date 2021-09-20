#include <iostream>
using namespace std;
size_t strlen(const char* string)
{
    if (string==nullptr || *string=='\0')
        return 0;
    return 1 + strlen(string + 1);
    //return !string||!*string?0:1+strlen(string+1);
}
int main()
{
   /* size_t size;
    cout << "Enter size of array: ";
    cin >> size;
    int* array = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element of array: ";
        cin >> array[i];
    }
    cout << "Your array: ";
    for (size_t i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
    unsigned int count = 0;
    for (size_t i = 0; i < size; i++)
        if (!array[i])
            count++;
    cout << "Amount of zeros: " << count;
    delete[] array;
    return 0;
    */
    char* string = new char[255];
    cout << "Enter a string: ";
    cin.getline(string,255);
    cout << "Your string was: " << string<<endl;
    cout << "Lenght of your string: " << strlen(string) << endl;
    delete[] string;
    return 0;
}
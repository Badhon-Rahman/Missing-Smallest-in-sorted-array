#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 0, 1, 2, 4, 7, 10};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << arrSize << " ";
    int checker, i = 0;

    while(i < arrSize){
       checker = arr[i] + 1;
       if(arr[i + 1] != checker){
          cout << "Missing smallest element: " << checker << endl;
          break;
       }
       else if(arr[i + 1] == checker){
          i++;
       }
    }
    return 0;
}

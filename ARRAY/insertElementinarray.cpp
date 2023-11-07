#include<iostream> 
using namespace std;

int main()
{
//     int arr[30], size, i, insElem, count = 0;
 
//   cout << "Enter the size of an array (Max size: 30): ";
//   cin >> size;
 
//   cout << "Enter array elements:\n";
//   for (i = 0; i < size; i++)
//     cin >> arr[i];
 
//   cout << "\nEnter element to be inserted: ";
//   cin >> insElem;
  
//   arr[i] = insElem;
  
//   //Display new array
//   cout << "New Array after Insertion:\n";
//   for (i = 0; i < (size+1); i++)
//       cout << arr[i] << " ";
 
int arr[30], size, pos, i, insElem;
 
  cout << "Enter the size of an array (Max size: 30): ";
  cin >> size;
 
  cout << "Enter array elements:\n";
  for (i = 0; i < size; i++)
    cin >> arr[i];
 
  cout << "\nEnter element to be inserted: ";
  cin >> insElem;
 
  cout << "Enter the position: "; //position specified
  cin >> pos;
 
  for (i = size; i >= pos; i--)
    arr[i] = arr[i - 1];
 
  arr[i] = insElem;
 
  //Display new array
  cout << "New Array after Insertion:\n";
  for (i = 0; i < (size + 1); i++)
    cout << arr[i] << " ";

  return 0;

}
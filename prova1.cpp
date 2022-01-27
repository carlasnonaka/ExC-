#include <iostream>

using namespace std;

 

int mystery(int[], int);

 

int main() {

      int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 

      int result = mystery(a, 10);

 

      cout << "Result is: " << result << endl;

 

      return 0;

}

 

int mystery (int array[], int size) {

if (size == 1) {
	return array[0];
}

cout << "ARRAY: " << array [size- 1] << endl;
cout << "MYSTERY: " << mystery(array, size - 1) << endl;

return array[size - 1] + mystery(array, size - 1);
}

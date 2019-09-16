
/*37. Write a program using STL vector. The program should read in ten integers from the standard input and store each value in the vector. Now perform below operations.
a. Insert two more values into the vector at the end of the vector.
b. Print the vector using subscript notation.
c. Remove two elements of vector from end.
d. Print the vector using iterator.

*/

#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
    vector<int> v1; 
    v1.push_back(20);
	v1.push_back(25);
	v1.push_back(60);
	v1.push_back(120);
	v1.push_back(90);  

    vector<int>::iterator i1; 
  
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
        cout << (*i1) << " "; 
    } 
    /*	v1.pop_back(90);  /*/
    v1.pop_back(120);

    for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
        cout << (*i1) << " "; 
    } 
    return 0; 
} 

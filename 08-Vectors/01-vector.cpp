
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void explainVector()
{
    // Declaring a Vector:
    vector<int> v; // i.e. vector<datatype of elements to be stored in vector> name of the vector ; creates an empty container :{}

    // Methods to add elements:
    v.push_back(1);    // add 1 to the empty container: {1}
    v.emplace_back(2); // dynamically increases the size of the vector and pushes 2 at the back: {1,2}

    // Why is emplace_back() is faster than push_back() ??
    /*
    => push_back() works as:
     It takes an already - constructed object and copies or moves it into the container.
     This means : An object must be constructed before calling push_back().If a copy is required(e.g., when passing by value), it involves an additional overhead of copying or moving the object.

    =>emplace_back() works as:
        It constructs the object directly in place within the container using the provided arguments.
        This avoids:
        The need to create a temporary object.
        The overhead of copying or moving the object.
     */

    vector<pair<int, int>> v1;
    v1.push_back({2, 3});  // This first creates a temporary pair {2,3} copies it to the vector and or moves it to the vector
    v1.emplace_back(4, 5); // This directly creates the pair inside the vector at the back.

    // Initializing a vector:
    vector<int> v2(5, 100); // creates a vector of size 5 and initializes each element to 100 as {100,100,100,100,100}

    vector<int> v3(5); // creates a vector of size 5 and initializes each element to 0 or some garbage value depending upon the compiler as {0,0,0,0,0}

    vector<int> v4(v2); // creates a new vector v4 of the same size as v2 and copies v2 into v4 so v4={100,100,100,100,100}

    // Accessing the elements of the vector:
    cout << v2[1];
    cout << v2.at(1);
    cout << v.back(); // gives us the last element of the vector

    // Using Iterator to access the elements of the vector:
    vector<int>::iterator i = v.begin(); // lets say we have v={1,2,3,4,5,6}
    // i.e the container or data structure u want to iterate over to::keyword iterator name of the iterator
    // the iterator i since we used v.begin() it is pointing to the memory address of the first elemnet of the vector v and to access that first element we use * operator
    i++; // i++ increments the iterator to point to the next element in the vector, and it does so by advancing the memory address by the size of the data type of the elements in the vector
    // now iterator has the memory address of the second element of the vector
    cout << *(i) << endl; // this will prnit 2.

    vector<int>::iterator i = v.end(); // v.end() and hence i will point to the memory location right after the end of the last element of the vector and hence to access the last element of the vector we need to do i-- first and then use * operator

    // reverse-end:
    vector<int>::reverse_iterator i = v.rend(); // v.rend() and hence i will be pointing to the memory locating right before the first element of the vector

    // reverse-begin:
    vector<int>::reverse_iterator i = v.rbegin(); // v.rbegin() returns a reverse iterator pointing to the last element of the vector
    cout << *(i) << endl;                         // this will print the last element of the vector
    i++;                                          // move to the second last element
    cout << *(i) << endl;                         // this will print the second last element of the vector

    // Printing the vector:

    // The basic way:
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }

    // using iterator:
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << endl;
    }

    // The auto determines the dataType of the variable at the compile time on the basis of the type of the value we have assigned to that variable
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << endl;
    }

    // using forEach loop:
    for (auto i : v)
    {
        cout << i << endl; // here the dataType of i will be int since it is iterating over each int element of the vector v
    }

    // Deletion in a vector:
    // Suppose we have a vector llike v={10,20,30,40}
    v.erase(v.begin() + 1); // v.erase(location of the element u want to delete)  {10,30,40}

    // To delete multiple elements of the vector we provide the staring and ending address after the element we want to delete:
    v.erase(v.begin() + 1, v.begin() + 3); // {10,40}  [start,end)

    // Insert Functions:
    vector<int> v(2, 100);    //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}

    // Insert Multiple Elements :
    v.insert(v.begin() + 1, 3, 10); //{300,10,10,10,100,100}  v.insert(insert_where,how_many_insert,what_to_insert)

    // Insert one vector into another:
    vector<int> copy(3, 200);                            //{200,200,200}
    v.insert(v.begin(), copy.begin(), copy.end());       //{200,200,200,300,10,10,10,100,100}
    v.insert(v.begin(), copy.begin(), copy.begin() + 1); //{200,200,300,10,10,10,100,100}

    // Get the size of the vector :
    // v={1,2,3}
    cout << v.size() << endl; //  v.size()=3
    v.pop_back();             // v={1,2}

    v.swap(v2); // v={1,2,3} and v2={5,6,7} then v={5,6,7} and v2={1,2,3}

    v.clear(); // clears the vector v={}

    cout << v.empty() << endl; // v.empty() returns true if v is empty else false
}

int main()
{
    explainVector();
    return 0;
}

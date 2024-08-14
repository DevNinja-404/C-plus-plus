#include <iostream> // Anything written after # in the C++ Program is called directive and these directives are processed by a preprocessor.Preprocessor is basically a program which a compiler runs.This #include is a preprocessor directive which is telling the preprocessor to include the iostream headerFile.This iostream headerFile includes the basic input/output functions.

using namespace std; // It tells to use the standard(std) namespace in our code.The cout belongs to the standard namespace,if we hadn't written this statement we would have to use cout as : std::cout<<"xyz";. So to use every name in std without having to prefix them with std:: we write down this statement

// The compiler starts the execution of our code from the int main() function no matter wherever it is written.
int main()
{
    // the cout is used to print to the screen and endl includes a next line to the screen
    cout << "Hello World\n"
         << endl; // we have to add semicolon(;) at the end to specify the compiler that the statement has ended.
    return 0;
    // The return statement specifies the end of the function so in the main function the return statement specifies the end of the program.And we are returning a integer(0) so the return type of our main function is integer(int)
}
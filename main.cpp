#include "stack.h"
#include "arifmetic.h"
using namespace std;

int main() {
   
    TVectorStack<int> stack;
    std::cout << "Empty? " << (stack.IsEmpty() ? "yes" : "no") << std::endl;
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    std::cout << "size: " << stack.size() << std::endl;
    while (!stack.IsEmpty()) {
        int value = stack.Pop();
        std::cout << "get value: " << value << std::endl;
        }
    std::cout << "Empty? " << (stack.IsEmpty() ? "Yes" : "No") << std::endl;


    Lexema j;
    j.SetType(1);
    std::cout << j.GetType();

    return 0;
}
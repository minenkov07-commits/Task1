include <iostream>
include <string>
 
int main()
{
    std::string message {"Hello METANIT.COM!"};
    std::cout << "Message: " << message << std::endl; 
}



//
include <iostream>
include <stack>
 
int main()
{
    std::stack<std::string> stack;
    if(stack.empty())
    {
        std::cout << "stack is empty" << std::endl;
    }
    std::cout << "stack size: " << stack.size() << std::endl; 
}

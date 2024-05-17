#include <iostream>
#include "Queue.hpp"

int main()
{
    Queue que;

    std::cout << "Length: " << que.len() << std::endl;
    std::cout << "Empty: " << que.isEmpty() << std::endl;

    que.push(10);
    que.push(20);
    que.push(30);

    std::cout << "Length: " << que.len() << std::endl;
    std::cout << "Empty: " << que.isEmpty() << std::endl;

    std::cout << que.pop() << std::endl;
    std::cout << que.pop() << std::endl;
    std::cout << que.pop() << std::endl;

    std::cout << "Length: " << que.len() << std::endl;
    std::cout << "Empty: " << que.isEmpty() << std::endl;

    // std::cout << que.pop() << std::endl;

    return 0;
}

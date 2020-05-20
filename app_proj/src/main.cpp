#include <iostream>

#include <vector>

#include <app/Hello.h>

#include <lib/Vec3.h>
#include <lib2/World.h>

int main(int, char **)
{
    std::cout << "Hello, world!\n";

    std::vector<int> v = {5, 2, 10, 89};

    for (auto x : v)
    {
        std::cout << x << "\n";
    }

    Hello hello;
    hello.SayHello();

    Vec3 a;
    a.x = 2;
    a.y = 1;
    a.z = 3;

    std::cout << a.x << ", " << a.y << ", " << a.z << "\n";

    World::say_world();

    return 0;
}

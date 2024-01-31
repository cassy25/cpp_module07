#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename Func>
void iter(T* array, size_t length, Func function)
{
    size_t i = 0;
    while (i < length)
    {
        function(array[i]);
        i++;
    }
}

template <typename T>
void printValue(T const& value)
{
    std::cout << value << std::endl;
}

#endif
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
    public:
        Array() : elements(NULL), arraySize(0){}
        Array(unsigned int n) : arraySize(n)
        {
            elements = new T[arraySize];
            size_t i = 0;
            while (i <arraySize)
            {
                elements[i] = T();
                i++;
            }
        }
        ~Array()
        {
            delete[] elements;
        }
        Array(const Array<T>& copy) : arraySize(copy.arraySize)
        {
            elements = new T[arraySize];
            size_t i = 0;
            while (i < arraySize)
            {
                elements[i] = copy.elements[i];
                i++;
            }
        }
        Array& operator=(const Array<T>& copy)
        {
            delete[] elements;
            arraySize = copy.arraySize;
            elements = new T[arraySize];
            size_t i = 0;
            while (i < arraySize)
            {
                elements[i] = copy.elements[i];
                i++;
            }
            return (*this);
        }
        size_t size() const
        {
            return (arraySize);
        }
        T& operator[](size_t index)
        {
            if (index >= arraySize)
            {
                throw indexOut();
            }
            return elements[index];
        }
        class indexOut : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Index out of bounds";
            }
        };
    private:
        T* elements;
        size_t arraySize;
};

#endif
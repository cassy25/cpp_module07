#include "Array.hpp"


int main()
{
    try
    {
        Array<int> intArray(5);
        size_t i = 0;
        while (i < intArray.size())
        {
            intArray[i] = i * 2;
            i++;
        }
        i = 0;
        while (i < intArray.size() + 1)
        {
            std::cout << "Array elements : ";
            try
            {
                std::cout << intArray[i] << std::endl;
            }
            catch (const std::exception& e)
            {
               std::cerr << "Exception caught: " << e.what() << std::endl;
            }
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
                                                                           
    return 0;
}

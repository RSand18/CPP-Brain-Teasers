#include <iostream>

int main()
{
    int i;
    int rev = 0;
    int pnum;

    std::cout << "Please Enter a Positive Number: ";
    std::cin >> pnum;

    i = pnum;

    do
    {
        rev = (rev * 10) + (pnum % 10);
        pnum = pnum / 10;
    }
    while (pnum > 0);

    std::cout << "The reverse of the number is: " << rev << std::endl;

        if (i == rev)
        {
            std::cout << "Therefore, it is a palindrome." << std::endl;
        }
        else
        {
            std::cout << "Therefore, it is not a palindrome." << std::endl;
        }  
    return 0;
}



#include <iostream>

#define WINTER

#if defined (SPRING)
    #define SEASON "Spring"
#elif defined (AUTUMN)
    #define SEASON "Autumn"
#elif defined (WINTER)
    #define SEASON "Winter"
#else
    #define SEASON "Summer"
#endif

#if defined (SEASON)
int main()
{
    std::cout << SEASON;
}
#endif
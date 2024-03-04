
#include <iostream>
#include <set>



int main()
{
    std::set<int> s1{80,40,90,30,45,87,110,20,35,42,80,85,88,100,120};
    for (const auto& el : s1)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    //s1.erase(s1.begin(), s1.lower_bound(45));
    s1.erase(s1.begin(), s1.lower_bound(90));
    for (const auto& el : s1)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    

}


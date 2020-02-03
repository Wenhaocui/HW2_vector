#include "src/lib/solution.h"
#include <iostream>
#include <vector>
#include <set>


int main()
{
    Solution solution;
    std::vector<int> vec1 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
    std::vector<int> vec2 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
    solution.Unique(vec1);
    std::copy(vec1.begin(),vec1.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;
    solution.UniqueSet(vec2);
    std::copy(vec2.begin(),vec2.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;


    std::vector<int> vec3 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
    solution.Reverse(vec3);
    std::copy(vec3.begin(),vec3.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

    std::vector<int> vec4 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
    solution.DeleteOdd(vec4);
    std::copy(vec4.begin(),vec4.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

    std::vector<int> vec5 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
    std::vector<int> vec6 = {1 ,3 ,2 ,2 ,3 , 4, 5};
    std::vector<int> v1 =solution.Combine(vec5,vec6);
    std::copy(v1.begin(),v1.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout <<std::endl;

    std::vector<int> vec7 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
    std::vector<int> vec8 = {1 ,3 ,2 ,2 ,3 , 4, 5};
	std::vector<int> v2 = solution.Intersection(vec7,vec8);
    std::copy(v2.begin(),v2.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout <<std::endl;
     return 0;
}

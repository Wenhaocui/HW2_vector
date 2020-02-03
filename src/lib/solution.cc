#include "solution.h"
#include <iostream>
#include <set>



void Solution::Unique(std::vector<int> &inputs) {
    if (inputs.size()==0) {
        std::cout<<"null"<<std::endl;
    }
    std::sort(inputs.begin(), inputs.end());
    inputs.erase(unique(inputs.begin(), inputs.end()), inputs.end());
    std::vector<int>::iterator it;
    // for (it = inputs.begin(); it != inputs.end(); ++it) {
    //   int n = *it;
    //   std::cout << n << " ";
    // }
    // std::cout << std::endl;
}

void Solution::UniqueSet(std::vector<int> &inputs) {    
    if (inputs.size()==0) {
        std::cout<<"null"<<std::endl;
    }
    std::set<int> s(inputs.begin(), inputs.end());
    inputs.assign(s.begin(), s.end());
    std::vector<int>::iterator it;
    // for (it = inputs.begin(); it != inputs.end(); ++it) {
    //   int n = *it;
    //   std::cout << n << " ";
    // }
    // std::cout << std::endl;

}
void Solution::Reverse(std::vector<int> &inputs){
    if (inputs.size()==0) {
        std::cout<<"null"<<std::endl;
    }
    std::reverse(inputs.begin(),inputs.end());
    std::vector<int>::iterator it;
    // for (it = inputs.begin(); it != inputs.end(); ++it)
    //     std::cout << ' ' << *it;
    // std::cout << std::endl;
}

void Solution::DeleteOdd(std::vector<int> &inputs){
    if (inputs.size()==0) {
        std::cout<<"null"<<std::endl;
    }
    std::vector<int>::iterator it;
    it=inputs.begin();
    while(it != inputs.end())
    {
        if(!(*it%2))
            ++it;
        else
            it=inputs.erase(it);
    }
    // for(auto n:inputs)
    //     std::cout<< n <<" ";
    // std::cout<< std::endl;
}

std::vector<int> Solution::Combine(const std::vector<int> &inputs1,const std::vector<int> &inputs2){
    if (inputs1.size() == 0 || inputs2.size() == 0){
        std::cout<<"Null"<<std::endl;
    }
    else{
    std::vector<int> v;
    for (auto n:inputs1){
      v.push_back(n);
    }
    for(auto m:inputs2){
      v.push_back(m);
    }
    return v;
  }
}



std::vector<int> Solution::Intersection(std::vector<int> &inputs1, std::vector<int> &inputs2){
	if (inputs1.size() == 0 || inputs2.size() == 0){
        std::cout<<"Null"<<std::endl;
    }
    std::vector<int> v;
    std::sort(inputs1.begin(),inputs1.end());   
    std::sort(inputs2.begin(),inputs2.end());   
	std::set_intersection(inputs1.begin(),inputs1.end(),inputs2.begin(),inputs2.end(), std::back_inserter(v));
	return v;
}

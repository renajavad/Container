#include <iostream>
#include <vector>
#include <list>

template <typename T>
void Print(const T& c , const std::string& separate) {
	auto iter = c.begin(); 
	std::cout << *iter ;
	iter++;
	while(iter != c.end()) {
		std::cout << separate << *iter ;
			iter++;
	}
}
	
int main() {
	std::list<int> l = {5,10,15,20,25};
	Print(l,",");
	return 0;
} 

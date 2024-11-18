#include <iostream>

int main(){
	int size;
	std::cin >> size;
	long long sumN1 = 0 ;
	long long sumN = static_cast<long long>(size) * (size + 1)/2;
	for(int i = 0 ; i < size - 1 ; i++){
		int num ;
		std::cin >> num;
		sumN1 +=num; 
	}
	std::cout << sumN - sumN1 ;
	return 0;
}

#include <iostream>
#include <math.h>

int main(){
	std::cout.precision(50);
	long double log_10 = log(10L);
	long double A;
	long double B;
	std::cout<<"Use: give A and B for get exp(Ax10^B):"<<std::endl;
	std::cout<<"Value of A:";
	std::cin>>A;
	std::cout<<"Value of B:";
	std::cin>>B;

	std::cout<<"Number: exp("<<A<<"x10^"<<B<<")"<<std::endl;

	long double _A=2.6881171418161354484126255515800135873611118773741922L;
	long double _B=43L;

	int _A_factors;


	for(int i =2; i<B;i++){
		_A=pow(_A,10);
		_B=_B*10;
		_A_factors = (int)(log(_A)/log_10);
		_B+=_A_factors;
		_A=_A/pow(10L,_A_factors);
		std::cout<<"[i]Number: exp("<<_A<<"x10^"<<_B<<")"<<std::endl;
	}

	int A_int = (int)A;
	long double A_remainder = (long)(A-A_int);
	_B = _B*(long)A_int;

	std::cout<<"[i1]Number: exp("<<_A<<"x10^"<<_B<<")"<<std::endl;

	_A=pow(_A,A);
	_A_factors = (int)(log(_A)/log_10);
	_B+=_A_factors;
	_A=_A/pow(10L,_A_factors);

	std::cout<<"[i2]Number: exp("<<_A<<"x10^"<<_B<<")"<<std::endl;

	_A=_A*pow(10L,A_remainder);
	_A_factors = (int)(log(_A)/log_10);
	_B+=_A_factors;
	_A=_A/pow(10L,_A_factors);

	std::cout<<"[O]Number: exp("<<_A<<"x10^"<<_B<<")"<<std::endl;
	


	//std::cout<<"Output = "<<mantisa<<"x10^"<<power<<std::endl;
}
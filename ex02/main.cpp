#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str address: " << &str <<std::endl;
	std::cout << "what is stored in stringPTR: " << stringPTR <<std::endl;
	std::cout << "what is stored in stringREF: " << &stringREF <<std::endl;
	std::cout << "str value: " << str <<std::endl;
	std::cout << "str stringPTR points to: " << *stringPTR <<std::endl;
	std::cout << "str stringREF points to: " << stringREF <<std::endl;
	return (0);
}

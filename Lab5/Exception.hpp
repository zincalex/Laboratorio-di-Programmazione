#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

class Exception{
	private:
		std::string description_{"[Exception::Generic] Generic error"};
		
	public :
		Exception() {}
		Exception(const std::string& _description) {
			this->description_ = _description;
		}
		
		//function member to get error description
		const std::string what() const {
			return this->description_;
		}
};
#endif
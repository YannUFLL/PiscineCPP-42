#ifndef VALUE_HPP
# define VALUE_HPP

# include <iostream>
# include <string>

class Value
{
	public:
		// Constructors
		Value(std::string &value);
		
		// Destructor
		~Value();
		
		// Operators
		Value & operator=(const Value &assign);
		std::string getType();
		void 	ft_detect_type();
		void	ft_convert_type();
		void	ft_print_type();
		
	private:
		Value(const Value &copy);
		Value();
		std::string _type; 
		std::string _value;
		int _intValue;
		float _floatValue;
		char _charValue;
		double _doubleValue;
		bool _nan;
		bool _inf;
	public : 
		class Overflow: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mFailed, value overflow\e[0m ");
				}
		};
		
};

#endif
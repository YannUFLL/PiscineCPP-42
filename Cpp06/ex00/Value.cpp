#include "Value.hpp"

// Constructors
Value::Value()
{
}

Value::Value(std::string &value)
{
	_type = "";
	_value = value;
	_nan = false;
	_inf = false;
	try
	{
		ft_detect_type();
	}
	catch (std::exception &e)
	{
		std::cout << "The input is not a valid char, int, float or double, please retry by relaunching the program" << std::endl;
		return;
	}
	try
	{
		ft_convert_type();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
	ft_print_type();
}

Value::Value(const Value &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Value\e[0m" << std::endl;
}


// Destructor
Value::~Value()
{
}


// Operators
Value & Value::operator=(const Value &assign)
{
	(void) assign;
	return *this;
}

std::string Value::getType()
{
	return _type;
}

void	Value::ft_detect_type()
{
	if (_value == "nan" && _value.size() == 3)
	{
		_type = "double";
		_nan = true;
		return ;

	}
	if (_value == "nanf" && _value.size() == 4)
	{
		_type = "float";
		_nan = true;
		return;
	}
		if ((_value == "+inff" && _value.size() == 5) or (_value == "-inff" && _value.size()== 5))
	{
		_inf = true;
		_type = "float";
		return;
	}
			if ((_value == "+inf" && _value.size() == 4) or (_value == "-inf" && _value.size()== 4))
	{
		_inf = true;
		_type = "double";
		return;
	}
	if ((_value[0] < '0' || _value[0] > '9') && _value[0] >= 32 && _value[1] == '\0')
	{
		_type = "char";
		if (_value[1] != '\0')
			throw std::exception();
		return ;
	}
	int i = 0;
	if (_value[i] == '-')
		i++;
	while (_value[i] >= '0' && _value[i] <= '9')
		i++;
	if (_value[i] == '.')
	{
		if (_value[i + 1] == '\0')
		{
			_type = "double";
			return ;
		}
		i++;
		while ((_value[i] >= '0' && _value[i] <= '9'))
			i++;
		if (_value[i] == 'f')
			_type = "float";
		else if (_value[i] == '\0')
			_type = "double";
		else if (_value[i] != 0)
		{
			throw std::exception();
		}
	}
	else if (_value[i] == '\0')
		_type = "int";
	else
		throw std::exception();

}


void	Value::ft_convert_type()
{
	if (_type == "float")
	{
		if (_inf)
		_floatValue = std::numeric_limits<float>::infinity();
		else 
		{
			try
			{
			_floatValue = std::stof(_value);
			}
			catch(std::out_of_range& e)
			{
				throw Value::Overflow();
			}
		}
		_charValue = static_cast<char>(_floatValue); 
		_intValue = static_cast<int>(_floatValue); 
		_doubleValue = static_cast<double>(_floatValue); 
	}
	else if (_type == "double")
	{
		if (_inf)
		_doubleValue = std::numeric_limits<double>::infinity();
		else 
		{
			try
			{
			_doubleValue = std::stod(_value);
			}
			catch(std::out_of_range& e)
			{
				throw Value::Overflow();
			}
		}
		_charValue = static_cast<char>(_doubleValue); 
		_intValue = static_cast<int>(_doubleValue); 
		_floatValue = static_cast<float>(_doubleValue); 
	}
	else if (_type == "int")
	{
			try
			{
				_intValue = std::stoi(_value);
			}
			catch(std::out_of_range& e)
			{
				throw Value::Overflow();
			}
		_charValue = static_cast<char>(_intValue); 
		_doubleValue = static_cast<double>(_intValue); 
		_floatValue = static_cast<float>(_intValue); 
	}
	else if (_type == "char")
	{
		_charValue = _value[0]; 
		_intValue = static_cast<int>(_charValue); 
		_doubleValue = static_cast<double>(_charValue); 
		_floatValue = static_cast<float>(_charValue); 
	}
}

void	Value::ft_print_type()
{
	if (_nan)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		
	}
	else
	{
			if (_intValue > 256 || _intValue < -256)
				std::cout << "char : impossible" << std::endl;
			else if (_charValue <= 32)
				std::cout << "char : not displayable" << std::endl;
			else
				std::cout << "char : " << _charValue << std::endl;
		if (_floatValue > 2147483520.f)
			std::cout << "int : impossible " << std::endl;
		else
			std::cout << "int : " << _intValue << std::endl;
		if ((_doubleValue > 340282346638528859811704183484516925440.0000000000000000 || _doubleValue < -340282346638528859811704183484516925440.0000000000000000)&& ((_value != "+inff") && (_value != "-inff")))
		std::cout << "float : impossible " << std::endl;
		else
		std::cout << "float : " << _floatValue << std::fixed << std::endl;
		std::cout << "double : " << _doubleValue <<  std::fixed << std::endl;
	}
}

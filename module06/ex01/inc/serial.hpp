#ifndef SERIAL_HPP
# define SERIAL_HPP

# include "Data.hpp"
# include <iostream>
# include <stdint.h>

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif

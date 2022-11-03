#ifndef BASE_UTILS_HPP
# define BASE_UTILS_HPP

# include <exception>
# include <cstdlib>

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif

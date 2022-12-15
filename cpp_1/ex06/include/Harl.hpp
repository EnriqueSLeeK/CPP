#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
    private:
        void    debug ( void );
        void    info ( void );
        void    warning ( void );
        void    error ( void );
    public:
        void    complain ( std::string );
};

enum levels {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

typedef void (Harl::*speak_method) ();

#endif

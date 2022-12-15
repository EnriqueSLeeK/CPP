#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie ( void );
        Zombie ( std::string nameZ );
        ~Zombie ( void );
        void    setName( std::string nameZ );
        void    announce( void );
};

Zombie  *zombieHorde( int n, std::string name );

#endif

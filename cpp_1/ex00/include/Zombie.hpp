#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
    private:
        std::string name;
        Zombie ( void );
    public:
        Zombie ( std::string name );
        ~Zombie ( void );
        void    announce( void );
};

Zombie  *newZombie ( std::string nameZ );
void    randomChump ( std::string nameZ );

#endif

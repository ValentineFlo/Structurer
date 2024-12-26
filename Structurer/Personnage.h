#pragma once
#include <iostream>

class Personnage
{
public:

    Personnage(unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL);
    ~Personnage(){}

    virtual void attack(Personnage& other);
    virtual void DisplayAttribute();
    virtual void setPDV(unsigned int pdv);

protected:
    unsigned int m_pdv, m_vitessedep, m_level;
    unsigned int m_x, m_y;

};


class Guerrier : public Personnage
{
public:
    Guerrier(unsigned int FORCE, unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL);
   virtual void attack(Personnage& other) override;
   virtual void DisplayAttribute()override;
   virtual void setPDV(unsigned int pdv);

protected:
    unsigned int m_force;
};

class GuerrierDef : public Guerrier
{
public:
    GuerrierDef(unsigned int ARMOR, unsigned int FORCE, unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL);
    virtual void attack(Personnage& other) override;
    virtual void DisplayAttribute()override;
    virtual void setPDV(unsigned int pdv);

private:
    unsigned int m_armor;

};

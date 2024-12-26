#include "Personnage.h"

Personnage::Personnage(unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL) : m_pdv(PDV), m_vitessedep(VITESSE), m_level(LEVEL) {}

void Personnage::attack(Personnage& other)
{
	other.m_pdv -= 10;
}

void Personnage::DisplayAttribute()
{
	std::cout << this-> m_level << " | " << this->m_pdv << " | " << this->m_vitessedep << " | " << std::endl;
}

void Personnage::setPDV(unsigned int pdv)
{
	this->m_pdv -= pdv;
}

Guerrier::Guerrier(unsigned int FORCE, unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL) : Personnage(PDV, VITESSE, LEVEL), m_force(FORCE) {}

void Guerrier::attack(Personnage& other)
{
	other.setPDV(this->m_force * 10);
}

void Guerrier::DisplayAttribute()
{
	std::cout << this->m_level << " | " << this->m_pdv << " | " << this->m_vitessedep << " | " << std::endl;
}

void Guerrier::setPDV(unsigned int pdv)
{
	this->m_pdv -= pdv;
}

GuerrierDef::GuerrierDef(unsigned int ARMOR, unsigned int FORCE, unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL) : Guerrier(FORCE, PDV, VITESSE, LEVEL), m_armor(ARMOR) {}

void GuerrierDef::attack(Personnage & other) 
{
	other.setPDV(this->m_force * 10);
}
void GuerrierDef::DisplayAttribute() 
{ 
	std::cout << this->m_level << " | " << this->m_pdv << " | " << this->m_vitessedep << " | " << std::endl; 
}
void GuerrierDef::setPDV(unsigned int pdv) 
{
	this->m_pdv -= pdv/ m_armor; 
}
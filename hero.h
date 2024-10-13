// hero.h
#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>

class HeroFather {
public:
    virtual void displayInfo() = 0;
    virtual std::string getName() =0;
    virtual std::string getWeapon() =0;
    virtual std::string getSkills() =0;
};

class Hero: public HeroFather {
public:
    Hero(); // ����������� ��� ����������
    Hero(const std::string& name, const std::string& weapon, const std::string& skills); // ����������� � �����������
    Hero(const Hero& other); // ����������� �����������
    virtual ~Hero(); // ����������

    // ������ get � set
    std::string getName() override;
    std::string getWeapon() override;
    std::string getSkills() override;

    void setName(const std::string& name);
    void setWeapon(const std::string& weapon);
    void setSkills(const std::string& skills);

    // ������ ������
    virtual void displayInfo() override;

private:
    std::string name;
    std::string weapon;
    std::string skills;
};

#endif
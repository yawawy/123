// goodhero.h
#ifndef GOODHERO_H
#define GOODHERO_H

#include "hero.h"

class GoodHero : public Hero {
public:
    GoodHero(); // ����������� ��� ����������
    GoodHero(const std::string& name, const std::string& weapon, const std::string& skills); // ����������� � �����������
    GoodHero(const GoodHero& other); // ����������� �����������
    ~GoodHero(); // ����������

    // ������ get � set ��� ����� �������������
    std::string getVirtue() const;
    void setVirtue(const std::string& virtue);

    // ���������������� �����
    void displayInfo() override;
};

#endif

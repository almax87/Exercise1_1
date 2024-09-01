#include "transport.h"

void Transport::setParticipate(Transport_type race_type)
{
    if (this->participate == true)
        throw std::runtime_error("������ ��� ������������� �������� ��� ���������������!");
    else if ((race_type != this->transport_type) && (race_type != Transport_type::mixed))
        throw std::runtime_error("������� ����������������� ������������ ��� ������������� ��������!");
    else
    {
        this->participate = true;
        std::cout << this->getName() << " ������� ���������������!" << std::endl;
    }
};
std::string Transport::getName()
{
    return name;
};

bool Transport::getParticipate()
{
    return this->participate;
};

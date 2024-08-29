#include "transport.h"

void Transport::setParticipate(Transport_type race_type)
{
    if (this->participate == true)
        throw std::runtime_error("Данный вид транспортного средства уже зарегистрирован!");
    else if ((race_type != this->transport_type) && (race_type != Transport_type::mixed))
        throw std::runtime_error("Попытка зарегистирировать неправильный вид транспортного средства!");
    else
    {
        this->participate = true;
        std::cout << this->getName() << " успешно зарегистрирован!" << std::endl;
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

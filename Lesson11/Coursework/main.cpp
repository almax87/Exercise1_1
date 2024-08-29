#include <iostream>
#include "race.h"
#include "transport.h"
#include "terrain/boots_all_terrain.h"
#include "terrain/camel_quick_run.h"
#include "terrain/camel.h"
#include "terrain/centaur.h"
#include "terrain/terrain.h"
#include "air/air.h"
#include "air/broom.h"
#include "air/eagle.h"
#include "air/magic_carpet.h"

void print_race_type(int i);
void try_type(Race* race);
void try_distance(Race* race);
void try_registration_menu(Race* race);
void print_participants (Race* race, Transport** transport);
void print_transport_menu(Race* race, Transport** transport);
int choose_transport_menu(Race* race, Transport** transport);
void race_result(Race* race, Transport** transport);
int race_start_menu();

void print_race_menu()
{

  for (int i = 1; i <= 3; i++)
  {
    std::cout << i << ". ";
    print_race_type(i);
    std::cout << std::endl;
  }
  std::cout << "Выберите тип гонки: ";
}

void print_race_type(int i)
{
  switch(i)
  {
    case 1: std::cout << "Гонка для наземного транспорта."; break;
    case 2: std::cout << "Гонка для воздушного транспорта."; break;
    default: std::cout << "Гонка для наземного и воздушного транспорта."; break;
  }
}

void try_type(Race* race)
{
  while(true)
  {
    int type{};
    
    try
    { 
      std::cin >> type;  
      race->setType(type);
      break;
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
    }
  };
}

void try_distance(Race* race)
{
  double distance{};
  while(true)
  {
    try
    {
      std::cout << "Укажите длину дистанции (должна быть положительна): ";
      std::cin >> distance;
      race->setDistance(distance);
      break;
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
    }
  };
}

void try_registration_menu(Race* race)
{
  int choice{};
  while(true)
  {
    try
    {
      std::cout << "Должно быть зарегистировано хотя бы 2 транспортных средства: " << std::endl;
      std::cout << "1. Зарегистировать транспорт" << std::endl;
      if (race->getParticipants() >= 2)
        std::cout << "2. Начать гонку" << std::endl;
      std::cout << "Выберите действие: ";
      std::cin >> choice;
      if ((choice == 1)||((choice == 2)&&(race->getParticipants() >= 2)))
        break;
      else throw std::runtime_error("Выбрано неверное действие!");
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
    }
  };
}

void print_participants (Race* race, Transport** transport_list)
{
  std::cout << "Зарегистрированные транспортные средства: ";
  for (int i = 0; i < 7; i++)
  {
    if (transport_list[i]->getParticipate() == true)
    {
      if (i != 0)
        std::cout << ", ";
     std::cout << transport_list[i]->getName();
    }
  }
  std::cout << std::endl;
}

void print_race_attributes(Race* race)
{
  print_race_type(static_cast<int>(race->getType()));
  std::cout << " Расстояние: " << race->getDistance() << std::endl;
}


void print_transport_menu(Race* race, Transport** transport_list)
{
  print_race_attributes(race);
  if (race->getParticipants() > 0)
      print_participants(race, transport_list);
  for (int i = 0; i < 7; i++)
    {
      
      std::cout << (i+1) << ": ";
      std::cout << transport_list[i]->getName() <<  std::endl;
    }
  std::cout << "0: Закончить регистрацию" << std::endl;
  std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: " << std::endl;
}


int choose_transport_menu(Race* race, Transport** transport_list)
{
  int choice{};

  while(true)
  {
    print_transport_menu(race, transport_list);
    
    try
    {
      std::cin >> choice;
      if ((choice < 0)||(choice > 7))
        throw std::runtime_error("Выбран неверный вариант!");
      if ((choice == 0)&&(race->getParticipants() < 2))
        throw std::runtime_error("Должно быть зарегистировано хотя бы 2 транспортных средства!");
      if (choice == 0)
        break;
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
      continue;
    }
    try
    {
      transport_list[choice-1]->setParticipate(race->getType());
      race->increaseParticipants();
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
    } 
  }
  return choice;
}

void race_result(Race* race, Transport** transport_list)
{
  std::cout << "Результаты гонки: " << std::endl;
  for (int i = 0, j = 0; i < 7; i++)
    {
      if (transport_list[i]->getParticipate() == true)
        {
          std::cout << ++j << ": ";
          std::cout << transport_list[i]->getName() << ". Время: " << transport_list[i]->time_calculation() <<  std::endl;
        }
    }

}

int continue_menu()
{
  int menu_choice{};
  while (true)
  {
  std::cout << "1: Провести еще одну гонку" << std::endl;
  std::cout << "2: Выйти" << std::endl;
    try
    {
      std::cin >> menu_choice;
      if ((menu_choice < 1)||(menu_choice > 2))
        throw std::runtime_error("Неверный выбор: ");
      else
      break;
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
    }
  }
  return menu_choice;
}


int race_start_menu()
{
  int menu_choice{};
  while (true)
  {
    std::cout << "1. Зарегистрировать транспорт" << std::endl;
    std::cout << "2. Начать гонку" << std::endl;
    try
    {
      std::cin >> menu_choice;
      if ((menu_choice < 1)||(menu_choice > 2))
        throw std::runtime_error("Неверный выбор: ");
      else
      break;
    }
    catch(const std::runtime_error& e)
    {
      std::cerr << e.what() << '\n';
    }
  }
  return menu_choice;
}

Transport** create_matrix(Race* race)
{
  double distance_ = race->getDistance();
  Transport** transport_list;
  Camel* camel = new Camel(distance_);
  Camel_quick_run* camel_quick_run = new Camel_quick_run(distance_);
  Boots_all_terrain* boots_all_terrain = new Boots_all_terrain(distance_);
  Centaur* centaur = new Centaur(distance_);
  Broom* broom = new Broom(distance_);
  Eagle* eagle = new Eagle(distance_);
  Magic_carpet* magic_carpet = new Magic_carpet(distance_);
  transport_list = new Transport*[7]{camel,camel_quick_run,boots_all_terrain,centaur,broom,eagle,magic_carpet};
  return transport_list;
}

void clear_game(Race* race, Transport** transport_list)
{
  for (int i = 0; i < 7; i++)
    delete transport_list[i];
  delete race;
}

int main() 
{
  int choice{};
  std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
  while (true)
  {
    print_race_menu();
    Race* race = new Race();
    try_type(race);
    try_distance(race);
    Transport** transport_list = create_matrix(race);
    try_registration_menu(race);
    do 
    {
      choose_transport_menu(race, transport_list);
      choice = race_start_menu();
    }
    while(choice != 2);
    race_result(race, transport_list);
    clear_game(race, transport_list);
    transport_list = nullptr;
    race = nullptr;
    if (continue_menu() == 1)
      continue;
    else 
      break;
  }
  
  return 0;
}
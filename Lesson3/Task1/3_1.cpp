#include <iostream>
#include <fstream>
#include <string>

class Address 
{
  private:
    std::string city;
    std::string street;
    int house;
    int room;
  public:
    Address (std::string *city, std::string *street, int *house, int *room)
    {
      this->city = *city;
      this->street = *street;
      this->house = *house;
      this->room = *room;
    }
    std::string convert_to_string (Address *address)
    {
      return address->city + ", " + address->street + ", " + std::to_string(address->house) + ", " + std::to_string(address->room);  
    }
    ~Address() {}
};

int main() 
{
  std::ifstream read_text ("in.txt");
  if (!read_text.is_open())
  {
    std::cout << "Error!" << std::endl;
    return 0;
  }
  int n {0};
  read_text >> n;
  std::string city;
  std::string street;
  int house;
  int room;
  Address** address = new Address* [n];
  while (!read_text.eof())
    {
      for (int i = 0; i < n; i++)
        {
          read_text >> city >> street >> house >> room;
          address[i] = new Address{&city, &street, &house, &room};
        }
    }
  
  std::ofstream record_text ("out.txt");
  if (!record_text.is_open())
    {
      std::cout << "Error!" << std::endl;
      return 0;
    }
  record_text << n << std::endl;
  for (int i = n-1; i >= 0; i--)
    {
      record_text << address[i]->convert_to_string(address[i]) << std::endl;
    }

  for (int i = 0; i < n; i++)
    {
      delete address[i];
    }
  delete[] address;
    
  record_text.close();
  read_text.close();
  
  return 0;
}
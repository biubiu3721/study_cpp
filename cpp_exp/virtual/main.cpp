#include "../../include/log.h"

class grand
{
  public:
  virtual void Info() = 0;
    /*{
        DEBUG() << "I am a grand" << ENDL;
    }*/
};

class father : public grand
{
  public:
  virtual void Info() = 0;
  /*
  {
        DEBUG() << "I am a father" << ENDL;
  }*/
};


class son : public father
{
  public:
  virtual void Info()
  {
        DEBUG() << "I am a son" << ENDL;
  }
};


int main()
{
    grand * grand_ptr = new son;
    father * father_ptr = new son;
    son * son_ptr = new son;
    DEBUG() << "grand ptr:  "; 
    grand_ptr->Info();
    DEBUG() << "father ptr:  ";
    father_ptr->Info();
    DEBUG() << "son ptr:  ";
    son_ptr->Info();
}
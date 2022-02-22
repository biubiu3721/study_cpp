#include "../../include/log.h"

class grand
{
  public:
  virtual void Info()
  {
        DEBUG() << "I am a grand" << ENDL;
  }
};

class father : public grand
{
  public:
  void Info()
  
  {
        DEBUG() << "I am a father" << ENDL;
  }
};


class son : public father
{
  public:
  void Info()
  {
        DEBUG() << "I am a son" << ENDL;
  }
  void son_only()
  {
       DEBUG() << "only son" << ENDL;
  }
};



int exp1()
{
    grand * grand_ptr = new son;
    father * father_ptr = new son; 
    son * son_ptr = new son;  

    DEBUG() << "grand ptr:  "; 
    grand_ptr->Info(); 
    DEBUG() << "father ptr:  ";
    father_ptr->Info(); // Info(*father)
    DEBUG() << "son ptr:  ";
    son_ptr->Info(); // Info(*son)
    return 0;
}

int exp2()
{
    son *son_ptr = new grand;
    return 0;
}
int main()
{
    exp2();
    return 0;
}

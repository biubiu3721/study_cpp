#include "../../include/log.h"

/**
*@ 函数指针
*/
typedef void(*Fun)();



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
    //son *son_ptr = new grand;
    return 0;
}

Fun getAddr(void   *obj, unsigned int offset)
{
    DEBUG() << "================" << ENDL;
    void  *vptr_addr = (void*)*(unsigned long*)obj;  //64位操作系统占8字节，通过*(unsigned long *)obj取出前8字节，
                                                    //即vptr指针
    printf("vptr_addr: %p\n", vptr_addr);
    /**
    * @brief 通过vptr指针访问virtual table，因为虚表中每个元素(虚函数指针)在64位编译器下是8个字节，
    因此通过*(unsigned long *)vptr_addr取出前8字节，后面加上偏移量就是每个函数的地址！
    */
    void  *func_addr = (void*)*((unsigned long*)vptr_addr + offset);
    printf("func_addr: %p\n", func_addr);
    return (Fun)func_addr;
}

int test_vptr()
{
  grand * grand_inst1 = new grand();
  son * son_inst1 = new son();
  son * son_inst2 = new son();
  DEBUG() << "grand_inst1: ---------------------------------------------------------" << ENDL;
  Fun f1 = getAddr(grand_inst1, 0);
  (*f1)();
  DEBUG() << "son_inst1: ---------------------------------------------------------" << ENDL;
  Fun f2 = getAddr(son_inst1, 0);
  (*f2)();
  DEBUG() << "son_inst2: ---------------------------------------------------------" << ENDL;
  Fun f3 = getAddr(son_inst2, 0);
  (*f3)();
  return 0;
}


int main()
{
    //exp2();
    test_vptr();
    return 0;
}

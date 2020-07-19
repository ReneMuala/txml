ifndef txml_hpp
define txml_hpp

#include <iostream>

/* em C++ classes sao o ponto pe partida para oo */
class TXML{
public: 

  // inicializacao da minha class 
  TXML();

  // liberacao de memoria
  ~TXML();
 
private:

  // dados do arquivo txml
  std::string Data;
};

endif

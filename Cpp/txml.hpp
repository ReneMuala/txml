ifndef txml_hpp
define txml_hpp

#include <iostream>

/* em C++ classes sao o ponto partida para oo */
class TXML{
public: 

  // inicializacao da classe txml 
  TXML();

  // liberacao de memoria
  ~TXML();
 
private:

  // dados do arquivo txml
  std::string Data;
};

endif

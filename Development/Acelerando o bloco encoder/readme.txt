Criei um siulador do encoder que n�o precisa simular cada pulso gerado pelos
sensores �pticos. Apesar de ser bem mais r�pido de simular e n�o apresentar
alguns problemas por o step size ser muito grande, n�o deve ser utilizado
para alimentar os m�todos T e M/T para c�lculo de velocidade (exatamente
por ele n�o simular todos os pulsos dos sensores �pticos, e esses m�todos
pressuporem que esses pulsos sempre ser�o simulados).
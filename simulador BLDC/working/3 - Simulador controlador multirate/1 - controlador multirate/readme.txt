Desenvolvi um controlador discreto que pode mudar de Ts durante a
execu��o da simula��o. Esse simulador atualiza sua sa�da quando "clock"
estiver em n�vel l�gico alto (j� calcula automaticamente o tempo passado
e atualiza os ganhos do controlador).

Para validar forcei o Ts do meu bloco ser constante e comparei com o 
controlador discreto do pr�prio simulink.
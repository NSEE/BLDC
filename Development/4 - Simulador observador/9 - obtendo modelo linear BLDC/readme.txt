Fiz a lineariza��o do motor

	- Supondo uma fun��o de transfer�ncia do tipo G/(Ts+1) obtive o modelo salvo em "motor_linearizado_sem_zeros"
		- Dentro do arquivo tem a fun��o de transfer�ncia e o espa�o de estados correspondente
		  (onde os estados s�o posi��o, velocidade e acelera��o e a sa�da � velocidade angular); 
		  dedu��o da transforma��o na p�g 41 do meu caderno de rascunho.
		- Dentro do arquivo "discretizacao_modelo_linear sem zeros.nb" tem a vers�o discretizada
		  simbolicamente no Mathematica.
	- Supondo uma fun��o de transfer�ncia do tipo (as+b)/(s^2+cs+d) obtive o "motor_linearizado"
		- O problema aqui � que n�o sei como passar essa tf para um espa�o de estados que um dos
		  estados seja a posi��o (que � o que eu me�o)


%%Inicializa��o das vari�veis do motor
%Maxon flat motor EC 32 flat - 339260 - 12v
R=10.1/2; %Resist�ncia por fase em Ohm
L=2.04/2000; %Indut�ncia por fase em Henry
P=8; %N�mero de polos
Kt=15.7e-3/(1.19); % Constante de torque do motor em Nm/A
Kd=0; %Este valor n�o � dado no cat�logo (atrito viscoso)
J=1.39e-6; %In�rcia do rotor em kg.m^2
Ke=Kt; %Consta de for�a eletromotriz em V.s (Igualdade v�lida apenas para unidades no SI)
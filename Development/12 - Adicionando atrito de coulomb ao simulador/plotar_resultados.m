figure;
hold on; h_Tr = plot(sim.time, sim.signals.values(:,1));
h_w = plot(sim.time, sim.signals.values(:,3),'g','LineWidth',2);
h_Tat = plot(sim.time, sim.signals.values(:,2),'r','LineWidth',2);
legend([h_Tr h_Tat h_w],{'Torque l�quido', 'Torque de atrito', 'Velocidade angular'});
grid;
title('Simula��o BLDC com atrito de coulomb');
xlabel('tempo (s)');
ylabel('(escala fict�cia para mostrar todos os resultados)');

load resultados_testes_encoder.mat;

%% Plota a entrada x sa�da de cada encoder.
subplot(3,1,1);
plot(resultados.posicao_exata.Time,resultados.posicao_exata.Data);
hold;
plot(resultados.encoder72.Time,resultados.encoder72.Data,'r');
grid;
axis([0 1 -360 360]);
title('Encoder com resolu��o de 72 pulsos / revolu��o');
legend('Posi��o exata','Posi��o medida');


subplot(3,1,2);
plot(resultados.posicao_exata.Time,resultados.posicao_exata.Data);
hold;
plot(resultados.encoder72.Time,resultados.encoder18.Data,'r');
grid;
axis([0 1 -360 360]);
title('Encoder com resolu��o de 18 pulsos / revolu��o');
legend('Posi��o exata','Posi��o medida')

subplot(3,1,3);
plot(resultados.posicao_exata.Time,resultados.posicao_exata.Data);
hold;
plot(resultados.encoder72.Time,resultados.encoder4.Data,'r');
grid;
axis([0 1 -360 360]);
title('Encoder com resolu��o de 4 pulsos / revolu��o');
legend('Posi��o exata','Posi��o medida')

%% Plota o erro em cada encoder.
figure;

subplot(3,1,1);
plot(resultados.encoder72.Time,abs(resultados.posicao_exata.Data-resultados.encoder72.Data));
grid minor;
title('Erro absoluto - 72 pulsos / revolu��o');
legend('abs(Posi��o medida-Posi��o Exata)');
set(gca,'YTick',[0 max(abs(resultados.posicao_exata.Data-resultados.encoder72.Data))]);

subplot(3,1,2);
plot(resultados.encoder18.Time,abs(resultados.posicao_exata.Data-resultados.encoder18.Data));
grid minor;
title('Erro absoluto - 18 pulsos / revolu��o');
legend('abs(Posi��o medida-Posi��o Exata)');
set(gca,'YTick',[0 max(abs(resultados.posicao_exata.Data-resultados.encoder18.Data))]);

subplot(3,1,3);
plot(resultados.encoder4.Time,abs(resultados.posicao_exata.Data-resultados.encoder4.Data));
grid minor;
title('Erro absoluto - 4 pulsos / revolu��o');
legend('abs(Posi��o medida-Posi��o Exata)');
set(gca,'YTick',[0 max(abs(resultados.posicao_exata.Data-resultados.encoder4.Data))]);








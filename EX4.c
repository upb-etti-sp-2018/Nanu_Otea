n=-15:0.01:25;
m=0:0.01:50;
x1=sin((pi/17)*n); 
subplot(2,1,1);
plot(n,x1)
hold on; 
x2=cos(pi*m/sqrt(23));
plot(m,x2),title('sin si cos')
hold off;                               %reţinem graficul curent şi adaugăm în aceeaşi fereastră grafică următoarele reprezentări grafice
subplot(2,1,2) 
plot(n,x2),title('cos')

stem(m,x1)
stem(m,x2),title('sin si cos')
stem(m,x2),title('cos')

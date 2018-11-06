n=-15:25;
x1=sin((pi/17)*n);
figure
stem(n,x1),hold on     
n=0:50;
x2=cos((pi/sqrt(23))*n);
plot(n,x2)
figure
n=-15:25;
subplot(2,1,1),plot(n,x1),title('Sin plot'),grid
n=0:50;
subplot(2,1,2),plot(n,x2),title('Cos plot'),grid

 n=-15:25;
x1=sin((pi/17)*n); 
figure
stem(n,x1),hold on      %reţinem graficul  şi le adaugăm în aceeaşi fereastră pe următoarele 
n=0:50;
x2=cos((pi/sqrt(23))*n); 
stem(n,x2)
figure
n=-15:25;
subplot(2,1,1),stem(n,x1),title('Sin stem'),grid
n=0:50;
subplot(2,1,2),stem(n,x2),title('Cos stem'),grid



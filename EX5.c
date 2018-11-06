FS = 50;   %frecventa lui sin
t = 0:0.001:0.2;
x = 2*sin(2*pi*FS*t);
plot(t,x,'.-'),xlabel('Timp [x]'),grid
hold on        %suprapune cel de-al doilea grafic peste primul
FC = 20;   %frecventa lui cos
t = 0:0.001:0.2;
x = 2*cos(2*pi*FC*t);
plot(t,x,'r.-'),xlabel('Timp [x]'),grid        %grafic trasat cu linie rosie
hold off

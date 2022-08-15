#pts=0.4

set key off
set out "poincare.pdf"
set term pdfcairo

pts=0.01
PI=acos(-1)
tp=2.0*pi
tmod(x)=x-floor(x/tp)*tp
mo(x)=tmod(x)<pi ? tmod(x) : tmod(x)-tp

set multiplot layout 2,2

plot "pc1.dat" u (mo($2)):3 w p pt 7 ps pts
plot "pc2.dat" u (mo($1)):2 w p pt 7 ps pts
plot "pc3.dat" u (mo($1)):2 w p pt 7 ps pts 
unset multiplot

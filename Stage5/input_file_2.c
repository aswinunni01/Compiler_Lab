begin
read(a);
if(a>=10) then
read(b);
read(c);
if(b>c) then
write(b);
else
write(c);
endif
else
read(b);
read(c);
if(b<c) then
write(b);
else
write(c);
endif
endif
read(a);
read(b);
c = a+b;
d= b-a;
e =a*b;
f=  b/a;
g = (c*d)/f;
write(c);
write(d);
write(e);
write(f);
write(g);
end

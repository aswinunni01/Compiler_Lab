begin
read(a);
read(b);
read(c);
if(a<b) then
if(b<c) then
write(c);
else
write(b);
endif
else
if(a>c) then
write(a);
else
write(c);
endif
endif
end

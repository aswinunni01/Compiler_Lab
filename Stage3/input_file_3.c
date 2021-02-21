begin
b=1;
a=0;
while(b!=0) do
write(a);
if(a+50) then
if(b==10) then
a=a+b;
continue
endif
break
endif
read(b);
a=a+b;
endwhile
write(a);
end

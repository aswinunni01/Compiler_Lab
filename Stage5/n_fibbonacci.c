begin
decl
	int n,f2,f0,f1,i;
enddecl
	read(n);
	if(n>=2) then
		f0=0;
		f1=1;
		n=n-1;
		while(n!=0) do
			f2=f1+f0;
			f0=f1;
			f1=f2;
			n=n-1;
		endwhile;
		write(f1);
	else if(n==1) then
			write(1);
		else write(0);
		endif;
	endif;

end

begin
decl
	int arar[10][10], i, m,n;
	str name;
enddecl

	read(name);
	m=0;
	n=0;
	while(m<2) do
		n=0;
		while(n<5) do
			read(arar[m][n]);
			n=n+1;
		endwhile;
		m=m+1;
	endwhile;
	m=0;
	n=0;
	while(m<2) do
		n=0;
		while(n<5) do
			write(arar[m][n]);
			n=n+1;
			endwhile;
		m=m+1;
	endwhile;
	write(name);
	write(arar[0][0]);
end


	
	class
	fact{
	decl
	int x;
	int findfactorial(int n);
	enddecl
	int findfactorial(int n){
	decl
	int p;
	enddecl
	begin
	if(n<=1)then
	p=1;
	else
	p=n*self.findfactorial(n-1);
	endif;
	return p;
	end
	}
	}
	testfactsum{
	decl
	fact o1;
	int testfun(int n);
	enddecl
	int testfun(int n){
	decl
	int sum;
	enddecl
	begin
	self.o1=new(fact);
	sum=0;
	while(n!=0)do
	sum=sum+self.o1.findfactorial(n);
	n=n-1;
	endwhile;
	return sum;
	end
	
	}
	}
	endclass
	decl
	testfactsum obj;
	enddecl
	int main(){
	decl
	int x,n;
	enddecl
	begin
	x=initialize();
	obj=new(testfactsum);
	read(n);
	write(obj.testfun(n));
	return 1;
	end
	
	
	
	}

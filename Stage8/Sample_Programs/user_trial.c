type

bst{
	int data;

}

endtype

decl
	bst a;
	int f1(bst a, int num);
enddecl

int f1(bst a, int num){
	decl
	  int c;
	enddecl
	begin
	 c = 10;
	a.data = c;
	num = 3;
	return 1;
	end
}

int main(){
	decl
	 int num;
	 int x;
	 bst d;	 
	enddecl
	begin
	num = initialize();
	a = alloc();
	d = alloc();
	read(num);
	a.data = num;
	x = f1(a, num);
	write(a.data);
	write(num);
	d = a;
	write(d.data);
	return 0;
	end

}

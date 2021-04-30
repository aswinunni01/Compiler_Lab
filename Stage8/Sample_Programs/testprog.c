class

	A{
		decl
			int a;
			int b;
			int c;
			int d;
			str e;
			int Fn1(int p1);
			str Fn2(str p2);
		enddecl

			int Fn1(int p1){
				decl
					int l1;
				enddecl
				begin
					l1 =p1*2;
					write(l1);
					self.a = l1*2;
					write(self.a);
					return 1;
				end
			}
			
			str Fn2(str p2){
				decl
					str l2;
				enddecl
					begin
					l2 = p2;
					write(l2);
					l2 = "Hello world";
					self.e = l2;
					write(self.e);
					return 0;
					end

			}
			
	}
endclass

decl
	int g1, g2;
	str g3;
	A obj1;
enddecl

int main(){
	decl
		int l3;
	enddecl
	begin
	read(g3);
	g1 = initialize();
	obj1 = new(A);
	g3 = obj1.Fn2(g3);
	read(g2);
	g1 = obj1.Fn1(g2);
	write("COMPLETED");
	return 1;
	end



}

 	class
	Rectangle
	{
	decl
	int length;
	int breadth;
	int set_dimensions();
	int area();
	enddecl
	
	int area() {
	decl
	enddecl
	begin
	return self.length * self.breadth;
	end
	}
	int set_dimensions() {
	decl
	enddecl
	begin
	write("Enter length ");
	read(self.length);
	write("Enter breadth");
	read(self.breadth);
	return 0;
	end
	}
	}
	Square extends Rectangle
	{
	decl
	int set_dimensions();
	enddecl
	
	int set_dimensions() {
	decl
	enddecl
	begin
	write("Enter side sq");
	read(self.length);
	self.breadth = self.length;
	return 0;
	end
	}
	}
	endclass
	
	decl
	Rectangle obj;
	enddecl
	
	int main() {
	decl
	int x;
	enddecl
	begin
	x=initialize();
	write("Enter");
	write("1.Rectangle");
	write("2.Square");
	read(x);
	if(x==1) then
	obj = new(Rectangle);
	else
	obj = new(Square);
	endif;
	x = obj.set_dimensions();
	write(obj.area());
	return 0;
	end
	}

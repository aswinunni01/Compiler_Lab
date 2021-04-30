type
	list{
	int data;
	list next;
	}
	endtype
	
	class
	linkedlist{
	decl
	list head;
	list tail;
	int length;
	int getlength();
	int init();
	list insert(int data);
	int printlinkedlist();
	enddecl
	int getlength(){
	begin
	return self.length;
	end
	}
	int init(){
	begin
	self.head=null;
	self.tail=null;
	self.length=0;
	return 1;
	end
	}
	list insert(int data){
	decl
	list temp;
	enddecl
	begin
	temp=alloc();
	temp.data=data;
	temp.next=null;
	if(self.head== null)then
	self.head=temp;
	self.tail=temp;
	else
	self.tail.next=temp;
	self.tail=temp;
	endif;
	self.length=self.length+1;
	return temp;
	end
	}
	int printlinkedlist(){
	decl
	list temp, temp2;
	enddecl
	begin
	temp=self.head;
	temp2 = temp;
	while(temp2!= null)do
	write(temp2.data);
	temp2=temp2.next;
	endwhile;
	return 1;
	end
	}
	}
	endclass
	decl
	linkedlist obj, obj2;
	enddecl
	int main(){
	decl
	int x,y,z;
	list a;
	enddecl
	begin
	x=initialize();
	obj=new(linkedlist);
	x=obj.init();
	read(x);
	while(x!=0)do
	read(y);
	a=obj.insert(y);
	x=x-1;
	endwhile;
	write("List Length");
	write(obj.getlength());
	write("List contents");
	x=obj.printlinkedlist();
	obj2=obj;
	return 1;
	end
	}

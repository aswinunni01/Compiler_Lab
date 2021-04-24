 	type
	bst{
	int a;
	bst left;
	bst right;
	}
	endtype
	
	class
	bstclass{
	decl
	bst root;
	int init();
	bst getroot();
	int setroot(bst n1);
	bst getnode(int key);
	bst insert(bst h, int key);
	int inOrder_fun(bst h);
	int preOrder_fun(bst h);
	int postOrder_fun(bst h);
	enddecl
	int init(){
	decl
	enddecl
	begin
	self.root=null;
	return 1;
	end
	}
	bst getroot(){
	decl
		int a;
	enddecl
	begin
	a=0;
	return self.root;
	end
	}
	int setroot(bst n1){
	decl
	enddecl
	begin
	self.root=n1;
	return 1;
	end
	}
	bst getnode(int key){
	decl
	bst temp;
	enddecl
	begin
	temp=alloc();
	temp.a=key;
	temp.left=null;
	temp.right=null;
	return temp;
	end
	}
	
	bst insert(bst h, int key){
	decl
	enddecl
	begin
	if (h == null) then
	h = self.getnode(key);
	else
	if (key < h.a) then
	h.left = self.insert(h.left, key);
	else
	if (key > h.a) then
	h.right = self.insert(h.right, key);
	endif;
	endif;
	endif;
	return h;
	end
	}
	int inOrder_fun(bst h){
	decl
	int in;
	enddecl
	begin
	if(h!= null) then
	in=self.inOrder_fun(h.left);
	write(h.a);
	in=self.inOrder_fun(h.right);
	endif;
	return 1;
	end
	}
	
	int preOrder_fun(bst h){
	decl
	int in;
	enddecl
	begin
	if(h!= null) then
	write(h.a);
	in=self.preOrder_fun(h.left);
	in=self.preOrder_fun(h.right);
	endif;
	return 1;
	end
	}
	
	int postOrder_fun(bst h){
	decl
	int in;
	enddecl
	begin
	
	if(h!= null) then
	in=self.postOrder_fun(h.left);
	in=self.postOrder_fun(h.right);
	write(h.a);
	endif;
	return 1;
	end
	
	}
	
	}
	endclass
	decl
	bstclass obj;
	int helloworld();
	enddecl
	int helloworld(){
	decl
		int a;
	enddecl
	begin
	a = 1;
	return 1;
	end
	}
	int main(){
	decl
	bst Root;
	int x,in,val;
	enddecl
	begin
	x=initialize();
	obj = new(bstclass);
	x=obj.init();
	read(val);
	Root = obj.getroot();
	while(val!=0) do
	Root = obj.insert(Root,val);
	read(val);
	endwhile;
	x = obj.setroot(Root);
	in = obj.inOrder_fun(obj.getroot());
	in = obj.preOrder_fun(obj.getroot());
	in = obj.postOrder_fun(obj.getroot());
	return 0;
	end
	}

decl
  int fact(int n);
enddecl

int fact(int n)
{
  decl
    int f;
  enddecl

  begin
    if(n<=1) then
      f=1;
    else
      f=n*fact(n-1);
    endif;

    return f;
  end
}

int main()
{
  decl
    int a,res;
  
  enddecl

  begin
    read(a);
    res = fact(a);
    write(res);
    abc = "hello";

    write(abc);

    return 0;
  end  
}  



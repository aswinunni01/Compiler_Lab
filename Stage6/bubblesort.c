decl 
  int n,arr[10],i,j, BubbleSort(int first, int last), dup;
  str tempfn(str z, str z);

enddecl

int BubbleSort(int first, int last)
{
  decl
	  int temp;
  str z;
  enddecl

  begin
    if(first < last) then
	    if(last>0) then

      if(arr[first] > arr[first+1]) then
        temp = arr[first];
        arr[first] = arr[first+1];
        arr[first+1] = temp;
      endif;
      z = tempfn(z, z);
      dup = BubbleSort(first+1, last);
      dup = BubbleSort(first, last-1);
      endif;
    endif;

    return 0;
  end
}

int main()
{
  decl
   int r;
  enddecl

  begin
    read(n);

    i=0;
    while(i<n) do
      read(arr[i]);
      i = i+1;
    endwhile;

    r = BubbleSort(0,n-1);

    i=0;
    while(i<n) do
      write(arr[i]);
      i = i+1;
    endwhile;

    return 0;
  end
}

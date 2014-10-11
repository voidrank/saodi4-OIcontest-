program x;
  const 
    f1='success.in';
	f2='success.out';
  var
    n,j:longint;
	sum,x1:real;
  function fuck(i:longint):real;
    var 
	  total:real;
	begin 
	  total:=1;
	  for j:=1 to i do
	  total:=total*x1;
	  fuck:=x1/i;
	end;
  procedure fuck_off;
    begin 
	  for j:=1 to n do
	  sum:=sum+fuck(j);
	end;
begin 
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
  read(x1,n);
  sum:=0;
  fuck_off;
  write(sum:0:4);

  close(input);
  close(output);
end.
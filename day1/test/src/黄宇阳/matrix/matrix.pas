program xx;
  const
    f1='matrix.in';
	f2='matrix.out';
	the_max=1000000009;
  var
    n,p,d,ans,i,t:longint;
  function get_number(a1,b1,c1,d1:longint):longint;
    begin
	  get_number:=a1+(b1+c1-2)*d1;
	end;
begin
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
  read(n,p,d);
  ans:=0;
  for i:=1 to n do
    begin
      t:=n-i+1;
      ans:=ans+get_number(p,i,i,d)*get_number(p,i,t,d);
    end;
  ans:=ans mod the_max;	
  write(ans);
 
   close(input);
   close(output);
 end. 
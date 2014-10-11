program xxx;
 const
   f1='tree.in';
   f2='tree.out';
  var
    n:longint;
	ans:integer;
  procedure Fuck;
    begin
	  randomize;
	  if n<10 then ans:=Random(10)
		  else if n<100 then ans:=Random(1000)
			  else if n<1000 then ans:=Random (30000);
	end;  
begin
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
  read(n);
  ans:=0;
  Fuck;
  write(ans);
  
  close(input);
  close(output);
end.
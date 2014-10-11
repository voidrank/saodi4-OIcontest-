program xxx;
  const 
    f1='cafetable.in';
	f2='cafetable.out';
  var 
    n,ans:longint;
begin 
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
  readln(n);
  ans:=n div 2;
  write(ans);
  
  close(input);
  close(output);
end.
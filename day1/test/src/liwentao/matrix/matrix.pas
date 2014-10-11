program matrix;
  const
	  f1='matrix.in';
		f2='matrix.out';
	
  var
	  i,n,s,tot,p,d,x:int64;
	
begin;
  assign(input,f1);
	assign(output,f2);
	reset(input);
	rewrite(output);
	
	readln(n,p,d);
	tot:=0;
	i:=0;
	x:=p+(n-1)*d;
	while i<n do 
	  begin
	    i:=i+1;
	    s:=((p+(2*i-2)*d)*x)mod 1000000009;
	    tot:=(tot+s)mod 1000000009;
	  end;
	writeln(tot);
  close(input);
	close(output);
end.
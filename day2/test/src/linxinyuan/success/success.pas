var ji,x,a:real;
      i:longint;
	  n:int64;
begin
    assign(input,'success.in');
	reset(input);
	assign(output,'success.out');
	rewrite(output);
    read(x,n);
	ji:=0;
	if n>2000000 then 
		n:=2000000;
	a:=1;
	for i:=1 to n do 
	begin
	    a:=a*x;
	    ji:=ji+a/i;    
	end;
		writeln(ji:0:4);

    close(input);
    close(output);	
end.
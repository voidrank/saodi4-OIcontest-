program t1;
  var
    i:longint;
    s,m,x:real;
	n:int64;
  begin 
    assign(input,'success.in');
	reset(input);
	assign(output,'success.out');
	rewrite(output);
	read(x,n);
	s:=0;m:=1;
	if n>2000000 then 
	  n:=2000000;
	for i:=1 to n do 
	  begin 
	    m:=m*x;
        s:=s+m/i;
      end;
	 write(s:1:4);
	 close(input);
	 close(output);
	end.
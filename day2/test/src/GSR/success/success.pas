program success;
var n,t:extended;
	  x,k:real;
begin
	assign(input,'success.in'); reset(input);
	assign(output,'success.out'); rewrite(output);
	read(x,n);
	t:=n;
	k:=0;
	repeat
		k:=trunc(x*(k+(1/t))*100000000)/100000000;
		t:=t-1;
	until t=0;
	write(k:0:4);
	close(input);
	close(output);
end.
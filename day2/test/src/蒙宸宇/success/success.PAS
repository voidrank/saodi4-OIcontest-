program success;
var 
x,y,p,q,s:real;
N,i:longint;

begin
assign(input,'success.in');
reset(input);
assign(output,'success.out');
rewrite(output);
read(x,N);
y:=0;
for i:=1 to N do
	 begin
         p:=1;
         for j:=1 to i do
		     p:=p*x;
		 q:=p/i;
		 y:=y+q;
		 end;
writeln(y:0:4);
close(input);
close(output);
end.
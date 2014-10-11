var n,p,d,a,b,c:int64;
begin
     assign(input,'matrix.in');
	 reset(input);
	 assign(output,'matrix.out');
	 rewrite(output);
	 read(n,p,d);
	 a:=n mod 1000000009;
	 b:=p mod 1000000009;
	 c:=((n-1) mod 1000000009)*(d mod 1000000009) mod 1000000009;
	 a:=((a*(b+c)mod 1000000009)*(b+c))mod 1000000009;
	 writeln(a);
     close(input);
	 close(output);
end.
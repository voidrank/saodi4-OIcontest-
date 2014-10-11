program linchao;
    const
        f1='matrix.in';
        f2='matrix.out';  		
    var
        n,p,d,t,m:longint;	
begin
    assign(input,f1);
	assign(output,f2);
	reset(input);
	rewrite(output);
	readln(n,p,d);
	m:=p+(n-1)*d;
	t:=(n div 2)+1; 		
    m:=m*m*(2*t-1);
	writeln(m mod 1000000009);
	close(input);
	close(output);
end.

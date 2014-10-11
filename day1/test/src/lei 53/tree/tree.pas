program linchao;
    const
        f1='tree.in';
        f2='tree.out';  		
    var     
        n,t,i,p,b:integer; 
	    a:array[1..1000]of integer;	
begin
    assign(input,f1);
	assign(output,f2);
	reset(input);
	rewrite(output);	
    readln(n);
	t:=0;
	p:=0;
	for i:=1 to n do read(a[i]);
	for i:=1 to n do if a[i-1]>a[i] then inc(t);
	
    writeln(t*2,'.000');  
    close(input);
	close(output);
end.

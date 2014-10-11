program linchao;
    const
        f1='sound.in';      
	    f2='sound.out'; 
    var
        i,t,n,m,l,k,s,d:integer;      
        a:array[1..1000000]of integer;  
		
	begin
	assign(input,f1);
	assign(output,f2);
	reset(input);
	rewrite(output);
    t:=1; 
    readln(n,m);
	for i:=1 to m do t:=t*2;
    for i:=1 to n do
	begin
		read(a[i]); 	
        l:=a[i];     
        k:=l div t;
	    s:=k*t-l;
	    d:=(k+1)*t-l;
	    if s<0 then s:=(-1)*s;
		if d<0 then d:=(-1)*d;
		if s>=d then a[i]:=(k+1)*t else a[i]:=k*t;  	     
	end;	
	readln;
	for i:=1 to n do write(a[i],' ');
	close(input);
	close(output);
end.









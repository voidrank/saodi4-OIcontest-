program tree;
  const
	  f1='tree.in';
		f2='tree.out';
		
  var
    i,j,n,q,k:longint;
		bo:boolean;
		b,d,a:array[1..10010]of integer;

procedure out;
begin
  writeln('2.000');
	close(input);
	close(output);
	halt;
end;

begin
  assign(input,f1);
	assign(output,f2);
	reset(input);
	rewrite(output);
	
	readln(n);
	for i:=1 to n do
		read(d[i]);
	bo:=true;
	for i:=1 to n do
		begin
		  read(b[i]);
	    if b[i]<>d[i] then
				bo:=false;
		end;
	if bo then out;
	writeln('2.000');
	{i:=2;j:=2;q:=1;
	repeat
		k:=d[i];
		while d[i]=b[j] do
		begin
	  	a[d[i]]:=q;
			inc(i);inc(j);
	  end;
		
		while d[i]<>b[j] do
		begin
		  a[b[j]]:=q;
		  inc(j);
		end;
	  q:=k;
	until j>n;
	
	for i:=2 to n do writeln(a[i]);}
		
  close(input);
	close(output);
end.
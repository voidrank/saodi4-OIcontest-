program hmm;
var b:array[0..50,0..50]of real;
	  a:array[0..50,0..1000]of real;
	  x:array[0..10000] of real;
	  o:array[0..1000] of byte;
	  t:array[0..50,0..10000]of real;
	  total:real;
	  m,n,q:integer;
	  j,l:integer;
procedure print;
begin
	total:=total;
	write(total:0:4);
end;

procedure work(y,k:integer);
var i:integer;
begin
	for i:=1 to n do
	begin
		t[k,i]:=t[k-1,y]*b[y,i]*a[i,o[k]];
		if k<>m then work(i,k+1) else total:=total+t[k,i];
	end;
end;

begin
	assign(input,'hmm.in'); reset(input);
	assign(output,'hmm.out'); rewrite(output);
	readln(n,m,q);
	a[1,0]:=1;
	for j:=1 to n do
		read(x[j]);
	readln;
	for j:=1 to n do
	begin
		for l:=0 to q-1 do
			read(a[j,l]);
		readln;
	end;
	for j:=1 to n do
	begin
		for l:=1 to n do
			read(b[j,l]);
		readln;
	end;
	for j:=1 to m do
		read(o[j]);
	total:=0;
	for j:=1 to n do
	begin
		t[1,j]:=x[j]*a[j,o[1]];
		work(j,2);
	end;
	print;
	close(input);
	close(output);
end.
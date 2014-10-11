var  n,m,q,i,j:integer;
       kai:array[1..50]of real;
	   a,b:array[1..50,1..50]of real;
	   o:array[1..1000]of integer;
	   ji:real;
function gai(bh,bs:integer):real;
   var zhi:real;
         i1:integer;
begin
    if bs>m 
	then begin
 		         gai:=1;
	             exit;
	       end;
    zhi:=0;
    for i1:=1 to n do 
	begin
	    if (b[bh,i1]<>0)and(a[i1,o[bs]]<>0) then 
	    zhi:=zhi+b[bh,i1]*a[i1,o[bs]]*gai(i1,bs+1);
	end;
	gai:=zhi;
end;
begin
	ji:=0;
    assign(input,'hmm.in');
	reset(input);
	assign(output,'hmm.out');
	rewrite(output);
	read(n,m,q);
	for i:=1 to n do 
	   read(kai[i]);
	for i:=1 to n do 
		for j:=1 to q do
			read(a[i,j]);
	for i:=1 to n do 
		for j:=1 to n do 
			read(b[i,j]);
	for i:=1 to m do 
		read(o[i]);
	for i:=1 to m do 
		o[i]:=o[i]+1;
	for i:=1 to n do 
	   if (kai[i]<>0)and(a[i,o[1]]<>0) then 
		  ji:=ji+kai[i]*a[i,o[1]]*gai(i,2); 
	writeln(ji:0:4);
	close(input);
    close(output);
end.
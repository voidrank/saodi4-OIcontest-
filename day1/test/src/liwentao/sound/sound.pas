program sound;
  const 
	  f1='sound.in';
		f2='sound.out';
		c:array[0..16]of longint=(1,2,4,8,16,32,64,128,256,512,1024,2048,4096,
																								8192,16384,32768,65536);
		
	var
	  n,m,x,d,i:longint;
	
procedure work(var a:longint);
  var
	  i:integer;
begin
  for i:=1 to 16 do
		if (i*d<=a)and(a<=(i+1)*d) then
			begin
				if abs(i*d-a)>=abs((i+1)*d-a) then
					x:=(i+1)*d else x:=i*d;
				exit;
		  end;
end;

begin
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
	readln(n,m);
	d:=c[m];
	for i:=1 to n do
		begin
	    read(x);
	    work(x);
	    write(x,' ');
	  end;
	
  close(input);
  close(output);
end.
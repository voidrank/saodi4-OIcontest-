program sound;
	var
		table:array[0..65536]of longint;
		n,m,k:longint;
	procedure main;
		var
			i,p:longint;
		begin
			k:=1;for i:=1 to m do k:=k shl 1;
			p:=0;
			for i:=0 to 65535 do
			begin
				if (p+1)*k<i then inc(p);
				if (abs(p*k-i)>=abs((p+1)*k-i)) 
				then table[i]:=(p+1)*k 
				else table[i]:=p*k;
			end;
		end;
	procedure init;
		var
			i,x:longint;
		begin
			readln(n,m);
			main;
			for i:=1 to n do
				begin
					read(x);
					write(table[x],' ');
				end;
		end;
	begin
		assign(input,'sound.in');reset(input);
		assign(output,'sound.out');rewrite(output);
		init;
		close(input);close(output);
	end.

program matrix;
	var
		sum,n,p,d:int64;
	procedure init;
		var
			i:longint;
			k1,k2,k:int64;
		begin
			readln(n,p,d);
			d:=d mod 1000000009;
			p:=p mod 1000000009;
			sum:=0;
			for i:=1 to n do
				begin
					k1:=(P+(i+i-2)*d) mod 1000000009;
					k2:=(P+(n-1)*d) mod 1000000009;
					k:=k1*k2 mod 1000000009;
					sum:=(sum+k)mod 1000000009;
				end;
			writeln(sum);
		end;
	begin
		assign(input,'matrix.in');reset(input);
		assign(output,'matrix_baoli.out');rewrite(output);
		init;
		close(input);close(output);
	end.

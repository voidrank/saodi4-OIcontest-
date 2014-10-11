program caic;
var 
N:longint;
begin
assign(input,'cafetable.in');
reset(input);
assign(output,'cafetable.out');
rewrite(output);
read(N);
writeln((N-1) div 2);
close(input);
close(output);
end;
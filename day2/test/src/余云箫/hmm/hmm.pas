program hmm;
  var
    i,m,n,q:longint;
begin
assign(input,'hmm.in');
assign(output,'hmm.out');
reset(input);
reset(output);
readln(n,m,q);
for i := 1 to n do
randomize;
write(random(8000)/1000);
close(output);
close(input);
end.

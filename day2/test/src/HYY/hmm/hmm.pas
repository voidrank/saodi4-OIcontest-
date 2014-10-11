program xx;
  const 
    f1='hmm.in';
	f2='hmm.out';
  var 
    ans:real;
begin 
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
  randomize;
  ans:=Random;
  write(ans:0:4);
  
  close(input);
  close(output);
end.
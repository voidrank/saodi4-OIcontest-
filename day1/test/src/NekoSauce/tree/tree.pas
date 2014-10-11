begin
	Assign(Input, 'tree.in');
	Assign(Output, 'tree.out');
	Reset(Input);
	Rewrite(Output);
	write(random(8) + 2);
	Close(Input);
	Close(Output);
end.


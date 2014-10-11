var
	size, start, offset: Int64;

begin
	Assign(Input, 'matrix.in');
	Reset(Input);
	Assign(Output, 'matrix.out');
	Rewrite(Output);
	read(size, start, offset);
	write((size * sqr(start + (size - 1) * offset)) mod 1000000009);
	Close(Input);
	Close(Output);
end.


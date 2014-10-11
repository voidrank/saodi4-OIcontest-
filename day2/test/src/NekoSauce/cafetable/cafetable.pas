const
	fIN = 'cafetable.in';
	fOUT = 'cafetable.out';

{var
	UniSet: array [1..100000] of Boolean;
	MagicX: array [1..100000] of Cardinal;
	LpCtrl, InfoCount, C1, C2: Cardinal;

begin
	FillChar(UniSet, SizeOf(UniSet), False);
	Read(InfoCount);
	for LpCtrl := 1 to InfoCount do
		begin
			Read(C1, C2);
			}

var
	Value: Cardinal;

begin
	Assign(Input, fIN);
	Assign(Output, fOUT);
	Reset(Input);
	Rewrite(Output);
	
	Read(Value);
	Write(Value div 2);
	
	Close(Input);
	Close(Output);
end.

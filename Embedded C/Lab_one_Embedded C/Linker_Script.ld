ENTRY(reset)

MEMORY 
{
	MEM (rwx) :ORIGIN =0x00000000 , LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		Startup.o(.text)
	}>MEM
	.text :
	{
		*(.text)
	}>MEM
	.data :
	{
		*(.data)
	}>MEM
	.bss :
	{
		*(.bss)
	}>MEM
	
	. = . + 0x1000;
	StackPointer = . ;
}

MEMORY
{
	Flash(RX) : ORIGIN = 0x08000000 , LENGTH = 128k
	Sram(RWX) : ORIGIN = 0x20000000 , LENGTH = 20K
}

SECTIONS
{
	.text :
	{
		*(.vectors*)
		*(.text*)
		*(.rodata)
		. = ALIGN(4) ; 
		_E_Text_ = . ;
	}>Flash
	
	.data :
	{
		_S_Data_ = . ;
		*(.data)
		. = ALIGN(4) ; 
		_E_Data_ = . ;
		. = ALIGN(4) ; 
	}>Sram AT>Flash
	
	.bss :
	{
		_S_Bss_ = . ;
		*(.bss)
		. = ALIGN(4) ;
		_E_Bss_ = . ;
		. = ALIGN(4) ;
		. = . + 0x1000;
		_StackPointer = . ;
	}>Sram
}
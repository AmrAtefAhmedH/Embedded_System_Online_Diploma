
MEMORY
{
	Flash(RX) : ORIGIN = 0x00000000 , LENGTH = 512M
	Sram(RWX) : ORIGIN = 0x20000000 , LENGTH = 512M
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
	}>Sram
}
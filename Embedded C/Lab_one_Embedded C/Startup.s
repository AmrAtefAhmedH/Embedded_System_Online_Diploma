.global reset 

reset:
	ldr	sp, =StackPointer
	bl 	main
stop:
	b stop
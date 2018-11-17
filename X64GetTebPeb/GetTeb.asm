.CODE
GetTeb PROC
	mov rax, 30h
	mov rax, gs:[rax]
	ret
GetTeb ENDP
END

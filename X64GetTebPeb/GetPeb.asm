.CODE
GetPeb PROC
	mov rax, [rcx+60h]
	ret
GetPeb ENDP
END
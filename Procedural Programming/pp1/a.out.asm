
a.out:     file format elf64-x86-64


Disassembly of section .interp:

0000000000400238 <.interp>:
  400238:	2f                   	(bad)  
  400239:	6c                   	insb   (%dx),%es:(%rdi)
  40023a:	69 62 36 34 2f 6c 64 	imul   $0x646c2f34,0x36(%rdx),%esp
  400241:	2d 6c 69 6e 75       	sub    $0x756e696c,%eax
  400246:	78 2d                	js     400275 <printf@plt-0x1fb>
  400248:	78 38                	js     400282 <printf@plt-0x1ee>
  40024a:	36                   	ss
  40024b:	2d 36 34 2e 73       	sub    $0x732e3436,%eax
  400250:	6f                   	outsl  %ds:(%rsi),(%dx)
  400251:	2e 32 00             	xor    %cs:(%rax),%al

Disassembly of section .note.ABI-tag:

0000000000400254 <.note.ABI-tag>:
  400254:	04 00                	add    $0x0,%al
  400256:	00 00                	add    %al,(%rax)
  400258:	10 00                	adc    %al,(%rax)
  40025a:	00 00                	add    %al,(%rax)
  40025c:	01 00                	add    %eax,(%rax)
  40025e:	00 00                	add    %al,(%rax)
  400260:	47                   	rex.RXB
  400261:	4e 55                	rex.WRX push %rbp
  400263:	00 00                	add    %al,(%rax)
  400265:	00 00                	add    %al,(%rax)
  400267:	00 02                	add    %al,(%rdx)
  400269:	00 00                	add    %al,(%rax)
  40026b:	00 06                	add    %al,(%rsi)
  40026d:	00 00                	add    %al,(%rax)
  40026f:	00 18                	add    %bl,(%rax)
  400271:	00 00                	add    %al,(%rax)
	...

Disassembly of section .note.gnu.build-id:

0000000000400274 <.note.gnu.build-id>:
  400274:	04 00                	add    $0x0,%al
  400276:	00 00                	add    %al,(%rax)
  400278:	14 00                	adc    $0x0,%al
  40027a:	00 00                	add    %al,(%rax)
  40027c:	03 00                	add    (%rax),%eax
  40027e:	00 00                	add    %al,(%rax)
  400280:	47                   	rex.RXB
  400281:	4e 55                	rex.WRX push %rbp
  400283:	00 25 62 03 95 69    	add    %ah,0x69950362(%rip)        # 69d505eb <__isoc99_scanf@plt+0x6995014b>
  400289:	d7                   	xlat   %ds:(%rbx)
  40028a:	5e                   	pop    %rsi
  40028b:	e0 ec                	loopne 400279 <printf@plt-0x1f7>
  40028d:	21 aa b3 eb 4d 38    	and    %ebp,0x384debb3(%rdx)
  400293:	7c f0                	jl     400285 <printf@plt-0x1eb>
  400295:	e5 ee                	in     $0xee,%eax
  400297:	50                   	push   %rax

Disassembly of section .gnu.hash:

0000000000400298 <.gnu.hash>:
  400298:	01 00                	add    %eax,(%rax)
  40029a:	00 00                	add    %al,(%rax)
  40029c:	01 00                	add    %eax,(%rax)
  40029e:	00 00                	add    %al,(%rax)
  4002a0:	01 00                	add    %eax,(%rax)
	...

Disassembly of section .dynsym:

00000000004002b8 <.dynsym>:
	...
  4002d0:	1a 00                	sbb    (%rax),%al
  4002d2:	00 00                	add    %al,(%rax)
  4002d4:	12 00                	adc    (%rax),%al
	...
  4002e6:	00 00                	add    %al,(%rax)
  4002e8:	21 00                	and    %eax,(%rax)
  4002ea:	00 00                	add    %al,(%rax)
  4002ec:	12 00                	adc    (%rax),%al
	...
  4002fe:	00 00                	add    %al,(%rax)
  400300:	33 00                	xor    (%rax),%eax
  400302:	00 00                	add    %al,(%rax)
  400304:	20 00                	and    %al,(%rax)
	...
  400316:	00 00                	add    %al,(%rax)
  400318:	0b 00                	or     (%rax),%eax
  40031a:	00 00                	add    %al,(%rax)
  40031c:	12 00                	adc    (%rax),%al
	...

Disassembly of section .dynstr:

0000000000400330 <.dynstr>:
  400330:	00 6c 69 62          	add    %ch,0x62(%rcx,%rbp,2)
  400334:	63 2e                	movslq (%rsi),%ebp
  400336:	73 6f                	jae    4003a7 <printf@plt-0xc9>
  400338:	2e 36 00 5f 5f       	cs add %bl,%cs:%ss:0x5f(%rdi)
  40033d:	69 73 6f 63 39 39 5f 	imul   $0x5f393963,0x6f(%rbx),%esi
  400344:	73 63                	jae    4003a9 <printf@plt-0xc7>
  400346:	61                   	(bad)  
  400347:	6e                   	outsb  %ds:(%rsi),(%dx)
  400348:	66                   	data16
  400349:	00 70 72             	add    %dh,0x72(%rax)
  40034c:	69 6e 74 66 00 5f 5f 	imul   $0x5f5f0066,0x74(%rsi),%ebp
  400353:	6c                   	insb   (%dx),%es:(%rdi)
  400354:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%rdx),%esp
  40035b:	72 74                	jb     4003d1 <printf@plt-0x9f>
  40035d:	5f                   	pop    %rdi
  40035e:	6d                   	insl   (%dx),%es:(%rdi)
  40035f:	61                   	(bad)  
  400360:	69 6e 00 5f 5f 67 6d 	imul   $0x6d675f5f,0x0(%rsi),%ebp
  400367:	6f                   	outsl  %ds:(%rsi),(%dx)
  400368:	6e                   	outsb  %ds:(%rsi),(%dx)
  400369:	5f                   	pop    %rdi
  40036a:	73 74                	jae    4003e0 <printf@plt-0x90>
  40036c:	61                   	(bad)  
  40036d:	72 74                	jb     4003e3 <printf@plt-0x8d>
  40036f:	5f                   	pop    %rdi
  400370:	5f                   	pop    %rdi
  400371:	00 47 4c             	add    %al,0x4c(%rdi)
  400374:	49                   	rex.WB
  400375:	42                   	rex.X
  400376:	43 5f                	rex.XB pop %r15
  400378:	32 2e                	xor    (%rsi),%ch
  40037a:	37                   	(bad)  
  40037b:	00 47 4c             	add    %al,0x4c(%rdi)
  40037e:	49                   	rex.WB
  40037f:	42                   	rex.X
  400380:	43 5f                	rex.XB pop %r15
  400382:	32 2e                	xor    (%rsi),%ch
  400384:	32 2e                	xor    (%rsi),%ch
  400386:	35                   	.byte 0x35
	...

Disassembly of section .gnu.version:

0000000000400388 <.gnu.version>:
  400388:	00 00                	add    %al,(%rax)
  40038a:	02 00                	add    (%rax),%al
  40038c:	02 00                	add    (%rax),%al
  40038e:	00 00                	add    %al,(%rax)
  400390:	03 00                	add    (%rax),%eax

Disassembly of section .gnu.version_r:

0000000000400398 <.gnu.version_r>:
  400398:	01 00                	add    %eax,(%rax)
  40039a:	02 00                	add    (%rax),%al
  40039c:	01 00                	add    %eax,(%rax)
  40039e:	00 00                	add    %al,(%rax)
  4003a0:	10 00                	adc    %al,(%rax)
  4003a2:	00 00                	add    %al,(%rax)
  4003a4:	00 00                	add    %al,(%rax)
  4003a6:	00 00                	add    %al,(%rax)
  4003a8:	17                   	(bad)  
  4003a9:	69 69 0d 00 00 03 00 	imul   $0x30000,0xd(%rcx),%ebp
  4003b0:	42 00 00             	rex.X add %al,(%rax)
  4003b3:	00 10                	add    %dl,(%rax)
  4003b5:	00 00                	add    %al,(%rax)
  4003b7:	00 75 1a             	add    %dh,0x1a(%rbp)
  4003ba:	69 09 00 00 02 00    	imul   $0x20000,(%rcx),%ecx
  4003c0:	4c 00 00             	rex.WR add %r8b,(%rax)
  4003c3:	00 00                	add    %al,(%rax)
  4003c5:	00 00                	add    %al,(%rax)
	...

Disassembly of section .rela.dyn:

00000000004003c8 <.rela.dyn>:
  4003c8:	f8                   	clc    
  4003c9:	0f 60 00             	punpcklbw (%rax),%mm0
  4003cc:	00 00                	add    %al,(%rax)
  4003ce:	00 00                	add    %al,(%rax)
  4003d0:	06                   	(bad)  
  4003d1:	00 00                	add    %al,(%rax)
  4003d3:	00 03                	add    %al,(%rbx)
	...

Disassembly of section .rela.plt:

00000000004003e0 <.rela.plt>:
  4003e0:	18 10                	sbb    %dl,(%rax)
  4003e2:	60                   	(bad)  
  4003e3:	00 00                	add    %al,(%rax)
  4003e5:	00 00                	add    %al,(%rax)
  4003e7:	00 07                	add    %al,(%rdi)
  4003e9:	00 00                	add    %al,(%rax)
  4003eb:	00 01                	add    %al,(%rcx)
	...
  4003f5:	00 00                	add    %al,(%rax)
  4003f7:	00 20                	add    %ah,(%rax)
  4003f9:	10 60 00             	adc    %ah,0x0(%rax)
  4003fc:	00 00                	add    %al,(%rax)
  4003fe:	00 00                	add    %al,(%rax)
  400400:	07                   	(bad)  
  400401:	00 00                	add    %al,(%rax)
  400403:	00 02                	add    %al,(%rdx)
	...
  40040d:	00 00                	add    %al,(%rax)
  40040f:	00 28                	add    %ch,(%rax)
  400411:	10 60 00             	adc    %ah,0x0(%rax)
  400414:	00 00                	add    %al,(%rax)
  400416:	00 00                	add    %al,(%rax)
  400418:	07                   	(bad)  
  400419:	00 00                	add    %al,(%rax)
  40041b:	00 03                	add    %al,(%rbx)
	...
  400425:	00 00                	add    %al,(%rax)
  400427:	00 30                	add    %dh,(%rax)
  400429:	10 60 00             	adc    %ah,0x0(%rax)
  40042c:	00 00                	add    %al,(%rax)
  40042e:	00 00                	add    %al,(%rax)
  400430:	07                   	(bad)  
  400431:	00 00                	add    %al,(%rax)
  400433:	00 04 00             	add    %al,(%rax,%rax,1)
	...

Disassembly of section .init:

0000000000400440 <.init>:
  400440:	48 83 ec 08          	sub    $0x8,%rsp
  400444:	48 8b 05 ad 0b 20 00 	mov    0x200bad(%rip),%rax        # 600ff8 <__isoc99_scanf@plt+0x200b58>
  40044b:	48 85 c0             	test   %rax,%rax
  40044e:	74 05                	je     400455 <printf@plt-0x1b>
  400450:	e8 3b 00 00 00       	callq  400490 <__gmon_start__@plt>
  400455:	48 83 c4 08          	add    $0x8,%rsp
  400459:	c3                   	retq   

Disassembly of section .plt:

0000000000400460 <printf@plt-0x10>:
  400460:	ff 35 a2 0b 20 00    	pushq  0x200ba2(%rip)        # 601008 <__isoc99_scanf@plt+0x200b68>
  400466:	ff 25 a4 0b 20 00    	jmpq   *0x200ba4(%rip)        # 601010 <__isoc99_scanf@plt+0x200b70>
  40046c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400470 <printf@plt>:
  400470:	ff 25 a2 0b 20 00    	jmpq   *0x200ba2(%rip)        # 601018 <__isoc99_scanf@plt+0x200b78>
  400476:	68 00 00 00 00       	pushq  $0x0
  40047b:	e9 e0 ff ff ff       	jmpq   400460 <printf@plt-0x10>

0000000000400480 <__libc_start_main@plt>:
  400480:	ff 25 9a 0b 20 00    	jmpq   *0x200b9a(%rip)        # 601020 <__isoc99_scanf@plt+0x200b80>
  400486:	68 01 00 00 00       	pushq  $0x1
  40048b:	e9 d0 ff ff ff       	jmpq   400460 <printf@plt-0x10>

0000000000400490 <__gmon_start__@plt>:
  400490:	ff 25 92 0b 20 00    	jmpq   *0x200b92(%rip)        # 601028 <__isoc99_scanf@plt+0x200b88>
  400496:	68 02 00 00 00       	pushq  $0x2
  40049b:	e9 c0 ff ff ff       	jmpq   400460 <printf@plt-0x10>

00000000004004a0 <__isoc99_scanf@plt>:
  4004a0:	ff 25 8a 0b 20 00    	jmpq   *0x200b8a(%rip)        # 601030 <__isoc99_scanf@plt+0x200b90>
  4004a6:	68 03 00 00 00       	pushq  $0x3
  4004ab:	e9 b0 ff ff ff       	jmpq   400460 <printf@plt-0x10>

Disassembly of section .text:

00000000004004b0 <.text>:
  4004b0:	31 ed                	xor    %ebp,%ebp
  4004b2:	49 89 d1             	mov    %rdx,%r9
  4004b5:	5e                   	pop    %rsi
  4004b6:	48 89 e2             	mov    %rsp,%rdx
  4004b9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  4004bd:	50                   	push   %rax
  4004be:	54                   	push   %rsp
  4004bf:	49 c7 c0 80 06 40 00 	mov    $0x400680,%r8
  4004c6:	48 c7 c1 10 06 40 00 	mov    $0x400610,%rcx
  4004cd:	48 c7 c7 9d 05 40 00 	mov    $0x40059d,%rdi
  4004d4:	e8 a7 ff ff ff       	callq  400480 <__libc_start_main@plt>
  4004d9:	f4                   	hlt    
  4004da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
  4004e0:	b8 4f 10 60 00       	mov    $0x60104f,%eax
  4004e5:	55                   	push   %rbp
  4004e6:	48 2d 48 10 60 00    	sub    $0x601048,%rax
  4004ec:	48 83 f8 0e          	cmp    $0xe,%rax
  4004f0:	48 89 e5             	mov    %rsp,%rbp
  4004f3:	77 02                	ja     4004f7 <__isoc99_scanf@plt+0x57>
  4004f5:	5d                   	pop    %rbp
  4004f6:	c3                   	retq   
  4004f7:	b8 00 00 00 00       	mov    $0x0,%eax
  4004fc:	48 85 c0             	test   %rax,%rax
  4004ff:	74 f4                	je     4004f5 <__isoc99_scanf@plt+0x55>
  400501:	5d                   	pop    %rbp
  400502:	bf 48 10 60 00       	mov    $0x601048,%edi
  400507:	ff e0                	jmpq   *%rax
  400509:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
  400510:	b8 48 10 60 00       	mov    $0x601048,%eax
  400515:	55                   	push   %rbp
  400516:	48 2d 48 10 60 00    	sub    $0x601048,%rax
  40051c:	48 c1 f8 03          	sar    $0x3,%rax
  400520:	48 89 e5             	mov    %rsp,%rbp
  400523:	48 89 c2             	mov    %rax,%rdx
  400526:	48 c1 ea 3f          	shr    $0x3f,%rdx
  40052a:	48 01 d0             	add    %rdx,%rax
  40052d:	48 d1 f8             	sar    %rax
  400530:	75 02                	jne    400534 <__isoc99_scanf@plt+0x94>
  400532:	5d                   	pop    %rbp
  400533:	c3                   	retq   
  400534:	ba 00 00 00 00       	mov    $0x0,%edx
  400539:	48 85 d2             	test   %rdx,%rdx
  40053c:	74 f4                	je     400532 <__isoc99_scanf@plt+0x92>
  40053e:	5d                   	pop    %rbp
  40053f:	48 89 c6             	mov    %rax,%rsi
  400542:	bf 48 10 60 00       	mov    $0x601048,%edi
  400547:	ff e2                	jmpq   *%rdx
  400549:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
  400550:	80 3d f1 0a 20 00 00 	cmpb   $0x0,0x200af1(%rip)        # 601048 <__isoc99_scanf@plt+0x200ba8>
  400557:	75 11                	jne    40056a <__isoc99_scanf@plt+0xca>
  400559:	55                   	push   %rbp
  40055a:	48 89 e5             	mov    %rsp,%rbp
  40055d:	e8 7e ff ff ff       	callq  4004e0 <__isoc99_scanf@plt+0x40>
  400562:	5d                   	pop    %rbp
  400563:	c6 05 de 0a 20 00 01 	movb   $0x1,0x200ade(%rip)        # 601048 <__isoc99_scanf@plt+0x200ba8>
  40056a:	f3 c3                	repz retq 
  40056c:	0f 1f 40 00          	nopl   0x0(%rax)
  400570:	48 83 3d a8 08 20 00 	cmpq   $0x0,0x2008a8(%rip)        # 600e20 <__isoc99_scanf@plt+0x200980>
  400577:	00 
  400578:	74 1e                	je     400598 <__isoc99_scanf@plt+0xf8>
  40057a:	b8 00 00 00 00       	mov    $0x0,%eax
  40057f:	48 85 c0             	test   %rax,%rax
  400582:	74 14                	je     400598 <__isoc99_scanf@plt+0xf8>
  400584:	55                   	push   %rbp
  400585:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  40058a:	48 89 e5             	mov    %rsp,%rbp
  40058d:	ff d0                	callq  *%rax
  40058f:	5d                   	pop    %rbp
  400590:	e9 7b ff ff ff       	jmpq   400510 <__isoc99_scanf@plt+0x70>
  400595:	0f 1f 00             	nopl   (%rax)
  400598:	e9 73 ff ff ff       	jmpq   400510 <__isoc99_scanf@plt+0x70>
  40059d:	55                   	push   %rbp
  40059e:	48 89 e5             	mov    %rsp,%rbp
  4005a1:	48 83 ec 10          	sub    $0x10,%rsp
  4005a5:	48 8d 4d fc          	lea    -0x4(%rbp),%rcx
  4005a9:	48 8d 55 f8          	lea    -0x8(%rbp),%rdx
  4005ad:	48 8d 45 f4          	lea    -0xc(%rbp),%rax
  4005b1:	48 89 c6             	mov    %rax,%rsi
  4005b4:	bf 94 06 40 00       	mov    $0x400694,%edi
  4005b9:	b8 00 00 00 00       	mov    $0x0,%eax
  4005be:	e8 dd fe ff ff       	callq  4004a0 <__isoc99_scanf@plt>
  4005c3:	8b 55 f4             	mov    -0xc(%rbp),%edx
  4005c6:	8b 45 f8             	mov    -0x8(%rbp),%eax
  4005c9:	39 c2                	cmp    %eax,%edx
  4005cb:	7c 0a                	jl     4005d7 <__isoc99_scanf@plt+0x137>
  4005cd:	8b 55 f4             	mov    -0xc(%rbp),%edx
  4005d0:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4005d3:	39 c2                	cmp    %eax,%edx
  4005d5:	7d 1e                	jge    4005f5 <__isoc99_scanf@plt+0x155>
  4005d7:	8b 55 f8             	mov    -0x8(%rbp),%edx
  4005da:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4005dd:	39 c2                	cmp    %eax,%edx
  4005df:	7c 0f                	jl     4005f0 <__isoc99_scanf@plt+0x150>
  4005e1:	8b 55 f8             	mov    -0x8(%rbp),%edx
  4005e4:	8b 45 f4             	mov    -0xc(%rbp),%eax
  4005e7:	39 c2                	cmp    %eax,%edx
  4005e9:	7c 05                	jl     4005f0 <__isoc99_scanf@plt+0x150>
  4005eb:	8b 45 f8             	mov    -0x8(%rbp),%eax
  4005ee:	eb 03                	jmp    4005f3 <__isoc99_scanf@plt+0x153>
  4005f0:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4005f3:	eb 03                	jmp    4005f8 <__isoc99_scanf@plt+0x158>
  4005f5:	8b 45 f4             	mov    -0xc(%rbp),%eax
  4005f8:	89 c6                	mov    %eax,%esi
  4005fa:	bf 9b 06 40 00       	mov    $0x40069b,%edi
  4005ff:	b8 00 00 00 00       	mov    $0x0,%eax
  400604:	e8 67 fe ff ff       	callq  400470 <printf@plt>
  400609:	b8 00 00 00 00       	mov    $0x0,%eax
  40060e:	c9                   	leaveq 
  40060f:	c3                   	retq   
  400610:	41 57                	push   %r15
  400612:	41 89 ff             	mov    %edi,%r15d
  400615:	41 56                	push   %r14
  400617:	49 89 f6             	mov    %rsi,%r14
  40061a:	41 55                	push   %r13
  40061c:	49 89 d5             	mov    %rdx,%r13
  40061f:	41 54                	push   %r12
  400621:	4c 8d 25 e8 07 20 00 	lea    0x2007e8(%rip),%r12        # 600e10 <__isoc99_scanf@plt+0x200970>
  400628:	55                   	push   %rbp
  400629:	48 8d 2d e8 07 20 00 	lea    0x2007e8(%rip),%rbp        # 600e18 <__isoc99_scanf@plt+0x200978>
  400630:	53                   	push   %rbx
  400631:	4c 29 e5             	sub    %r12,%rbp
  400634:	31 db                	xor    %ebx,%ebx
  400636:	48 c1 fd 03          	sar    $0x3,%rbp
  40063a:	48 83 ec 08          	sub    $0x8,%rsp
  40063e:	e8 fd fd ff ff       	callq  400440 <printf@plt-0x30>
  400643:	48 85 ed             	test   %rbp,%rbp
  400646:	74 1e                	je     400666 <__isoc99_scanf@plt+0x1c6>
  400648:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40064f:	00 
  400650:	4c 89 ea             	mov    %r13,%rdx
  400653:	4c 89 f6             	mov    %r14,%rsi
  400656:	44 89 ff             	mov    %r15d,%edi
  400659:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40065d:	48 83 c3 01          	add    $0x1,%rbx
  400661:	48 39 eb             	cmp    %rbp,%rbx
  400664:	75 ea                	jne    400650 <__isoc99_scanf@plt+0x1b0>
  400666:	48 83 c4 08          	add    $0x8,%rsp
  40066a:	5b                   	pop    %rbx
  40066b:	5d                   	pop    %rbp
  40066c:	41 5c                	pop    %r12
  40066e:	41 5d                	pop    %r13
  400670:	41 5e                	pop    %r14
  400672:	41 5f                	pop    %r15
  400674:	c3                   	retq   
  400675:	66 66 2e 0f 1f 84 00 	data32 nopw %cs:0x0(%rax,%rax,1)
  40067c:	00 00 00 00 
  400680:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400684 <.fini>:
  400684:	48 83 ec 08          	sub    $0x8,%rsp
  400688:	48 83 c4 08          	add    $0x8,%rsp
  40068c:	c3                   	retq   

Disassembly of section .rodata:

0000000000400690 <.rodata>:
  400690:	01 00                	add    %eax,(%rax)
  400692:	02 00                	add    (%rax),%al
  400694:	25 64 25 64 25       	and    $0x25642564,%eax
  400699:	64                   	fs
  40069a:	00                   	.byte 0x0
  40069b:	25                   	.byte 0x25
  40069c:	64                   	fs
	...

Disassembly of section .eh_frame_hdr:

00000000004006a0 <.eh_frame_hdr>:
  4006a0:	01 1b                	add    %ebx,(%rbx)
  4006a2:	03 3b                	add    (%rbx),%edi
  4006a4:	34 00                	xor    $0x0,%al
  4006a6:	00 00                	add    %al,(%rax)
  4006a8:	05 00 00 00 c0       	add    $0xc0000000,%eax
  4006ad:	fd                   	std    
  4006ae:	ff                   	(bad)  
  4006af:	ff 80 00 00 00 10    	incl   0x10000000(%rax)
  4006b5:	fe                   	(bad)  
  4006b6:	ff                   	(bad)  
  4006b7:	ff 50 00             	callq  *0x0(%rax)
  4006ba:	00 00                	add    %al,(%rax)
  4006bc:	fd                   	std    
  4006bd:	fe                   	(bad)  
  4006be:	ff                   	(bad)  
  4006bf:	ff a8 00 00 00 70    	ljmpq  *0x70000000(%rax)
  4006c5:	ff                   	(bad)  
  4006c6:	ff                   	(bad)  
  4006c7:	ff c8                	dec    %eax
  4006c9:	00 00                	add    %al,(%rax)
  4006cb:	00 e0                	add    %ah,%al
  4006cd:	ff                   	(bad)  
  4006ce:	ff                   	(bad)  
  4006cf:	ff 10                	callq  *(%rax)
  4006d1:	01 00                	add    %eax,(%rax)
	...

Disassembly of section .eh_frame:

00000000004006d8 <.eh_frame>:
  4006d8:	14 00                	adc    $0x0,%al
  4006da:	00 00                	add    %al,(%rax)
  4006dc:	00 00                	add    %al,(%rax)
  4006de:	00 00                	add    %al,(%rax)
  4006e0:	01 7a 52             	add    %edi,0x52(%rdx)
  4006e3:	00 01                	add    %al,(%rcx)
  4006e5:	78 10                	js     4006f7 <__isoc99_scanf@plt+0x257>
  4006e7:	01 1b                	add    %ebx,(%rbx)
  4006e9:	0c 07                	or     $0x7,%al
  4006eb:	08 90 01 07 10 14    	or     %dl,0x14100701(%rax)
  4006f1:	00 00                	add    %al,(%rax)
  4006f3:	00 1c 00             	add    %bl,(%rax,%rax,1)
  4006f6:	00 00                	add    %al,(%rax)
  4006f8:	b8 fd ff ff 2a       	mov    $0x2afffffd,%eax
	...
  400705:	00 00                	add    %al,(%rax)
  400707:	00 14 00             	add    %dl,(%rax,%rax,1)
  40070a:	00 00                	add    %al,(%rax)
  40070c:	00 00                	add    %al,(%rax)
  40070e:	00 00                	add    %al,(%rax)
  400710:	01 7a 52             	add    %edi,0x52(%rdx)
  400713:	00 01                	add    %al,(%rcx)
  400715:	78 10                	js     400727 <__isoc99_scanf@plt+0x287>
  400717:	01 1b                	add    %ebx,(%rbx)
  400719:	0c 07                	or     $0x7,%al
  40071b:	08 90 01 00 00 24    	or     %dl,0x24000001(%rax)
  400721:	00 00                	add    %al,(%rax)
  400723:	00 1c 00             	add    %bl,(%rax,%rax,1)
  400726:	00 00                	add    %al,(%rax)
  400728:	38 fd                	cmp    %bh,%ch
  40072a:	ff                   	(bad)  
  40072b:	ff 50 00             	callq  *0x0(%rax)
  40072e:	00 00                	add    %al,(%rax)
  400730:	00 0e                	add    %cl,(%rsi)
  400732:	10 46 0e             	adc    %al,0xe(%rsi)
  400735:	18 4a 0f             	sbb    %cl,0xf(%rdx)
  400738:	0b 77 08             	or     0x8(%rdi),%esi
  40073b:	80 00 3f             	addb   $0x3f,(%rax)
  40073e:	1a 3b                	sbb    (%rbx),%bh
  400740:	2a 33                	sub    (%rbx),%dh
  400742:	24 22                	and    $0x22,%al
  400744:	00 00                	add    %al,(%rax)
  400746:	00 00                	add    %al,(%rax)
  400748:	1c 00                	sbb    $0x0,%al
  40074a:	00 00                	add    %al,(%rax)
  40074c:	44 00 00             	add    %r8b,(%rax)
  40074f:	00 4d fe             	add    %cl,-0x2(%rbp)
  400752:	ff                   	(bad)  
  400753:	ff 73 00             	pushq  0x0(%rbx)
  400756:	00 00                	add    %al,(%rax)
  400758:	00 41 0e             	add    %al,0xe(%rcx)
  40075b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  400761:	02 6e 0c             	add    0xc(%rsi),%ch
  400764:	07                   	(bad)  
  400765:	08 00                	or     %al,(%rax)
  400767:	00 44 00 00          	add    %al,0x0(%rax,%rax,1)
  40076b:	00 64 00 00          	add    %ah,0x0(%rax,%rax,1)
  40076f:	00 a0 fe ff ff 65    	add    %ah,0x65fffffe(%rax)
  400775:	00 00                	add    %al,(%rax)
  400777:	00 00                	add    %al,(%rax)
  400779:	42 0e                	rex.X (bad) 
  40077b:	10 8f 02 45 0e 18    	adc    %cl,0x180e4502(%rdi)
  400781:	8e 03                	mov    (%rbx),%es
  400783:	45 0e                	rex.RB (bad) 
  400785:	20 8d 04 45 0e 28    	and    %cl,0x280e4504(%rbp)
  40078b:	8c 05 48 0e 30 86    	mov    %es,-0x79cff1b8(%rip)        # ffffffff867015d9 <__isoc99_scanf@plt+0xffffffff86301139>
  400791:	06                   	(bad)  
  400792:	48 0e                	rex.W (bad) 
  400794:	38 83 07 4d 0e 40    	cmp    %al,0x400e4d07(%rbx)
  40079a:	6c                   	insb   (%dx),%es:(%rdi)
  40079b:	0e                   	(bad)  
  40079c:	38 41 0e             	cmp    %al,0xe(%rcx)
  40079f:	30 41 0e             	xor    %al,0xe(%rcx)
  4007a2:	28 42 0e             	sub    %al,0xe(%rdx)
  4007a5:	20 42 0e             	and    %al,0xe(%rdx)
  4007a8:	18 42 0e             	sbb    %al,0xe(%rdx)
  4007ab:	10 42 0e             	adc    %al,0xe(%rdx)
  4007ae:	08 00                	or     %al,(%rax)
  4007b0:	14 00                	adc    $0x0,%al
  4007b2:	00 00                	add    %al,(%rax)
  4007b4:	ac                   	lods   %ds:(%rsi),%al
  4007b5:	00 00                	add    %al,(%rax)
  4007b7:	00 c8                	add    %cl,%al
  4007b9:	fe                   	(bad)  
  4007ba:	ff                   	(bad)  
  4007bb:	ff 02                	incl   (%rdx)
	...

Disassembly of section .init_array:

0000000000600e10 <.init_array>:
  600e10:	70 05                	jo     600e17 <__isoc99_scanf@plt+0x200977>
  600e12:	40 00 00             	add    %al,(%rax)
  600e15:	00 00                	add    %al,(%rax)
	...

Disassembly of section .fini_array:

0000000000600e18 <.fini_array>:
  600e18:	50                   	push   %rax
  600e19:	05 40 00 00 00       	add    $0x40,%eax
	...

Disassembly of section .jcr:

0000000000600e20 <.jcr>:
	...

Disassembly of section .dynamic:

0000000000600e28 <.dynamic>:
  600e28:	01 00                	add    %eax,(%rax)
  600e2a:	00 00                	add    %al,(%rax)
  600e2c:	00 00                	add    %al,(%rax)
  600e2e:	00 00                	add    %al,(%rax)
  600e30:	01 00                	add    %eax,(%rax)
  600e32:	00 00                	add    %al,(%rax)
  600e34:	00 00                	add    %al,(%rax)
  600e36:	00 00                	add    %al,(%rax)
  600e38:	0c 00                	or     $0x0,%al
  600e3a:	00 00                	add    %al,(%rax)
  600e3c:	00 00                	add    %al,(%rax)
  600e3e:	00 00                	add    %al,(%rax)
  600e40:	40 04 40             	add    $0x40,%al
  600e43:	00 00                	add    %al,(%rax)
  600e45:	00 00                	add    %al,(%rax)
  600e47:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 600e4d <__isoc99_scanf@plt+0x2009ad>
  600e4d:	00 00                	add    %al,(%rax)
  600e4f:	00 84 06 40 00 00 00 	add    %al,0x40(%rsi,%rax,1)
  600e56:	00 00                	add    %al,(%rax)
  600e58:	19 00                	sbb    %eax,(%rax)
  600e5a:	00 00                	add    %al,(%rax)
  600e5c:	00 00                	add    %al,(%rax)
  600e5e:	00 00                	add    %al,(%rax)
  600e60:	10 0e                	adc    %cl,(%rsi)
  600e62:	60                   	(bad)  
  600e63:	00 00                	add    %al,(%rax)
  600e65:	00 00                	add    %al,(%rax)
  600e67:	00 1b                	add    %bl,(%rbx)
  600e69:	00 00                	add    %al,(%rax)
  600e6b:	00 00                	add    %al,(%rax)
  600e6d:	00 00                	add    %al,(%rax)
  600e6f:	00 08                	add    %cl,(%rax)
  600e71:	00 00                	add    %al,(%rax)
  600e73:	00 00                	add    %al,(%rax)
  600e75:	00 00                	add    %al,(%rax)
  600e77:	00 1a                	add    %bl,(%rdx)
  600e79:	00 00                	add    %al,(%rax)
  600e7b:	00 00                	add    %al,(%rax)
  600e7d:	00 00                	add    %al,(%rax)
  600e7f:	00 18                	add    %bl,(%rax)
  600e81:	0e                   	(bad)  
  600e82:	60                   	(bad)  
  600e83:	00 00                	add    %al,(%rax)
  600e85:	00 00                	add    %al,(%rax)
  600e87:	00 1c 00             	add    %bl,(%rax,%rax,1)
  600e8a:	00 00                	add    %al,(%rax)
  600e8c:	00 00                	add    %al,(%rax)
  600e8e:	00 00                	add    %al,(%rax)
  600e90:	08 00                	or     %al,(%rax)
  600e92:	00 00                	add    %al,(%rax)
  600e94:	00 00                	add    %al,(%rax)
  600e96:	00 00                	add    %al,(%rax)
  600e98:	f5                   	cmc    
  600e99:	fe                   	(bad)  
  600e9a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600e9d:	00 00                	add    %al,(%rax)
  600e9f:	00 98 02 40 00 00    	add    %bl,0x4002(%rax)
  600ea5:	00 00                	add    %al,(%rax)
  600ea7:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 600ead <__isoc99_scanf@plt+0x200a0d>
  600ead:	00 00                	add    %al,(%rax)
  600eaf:	00 30                	add    %dh,(%rax)
  600eb1:	03 40 00             	add    0x0(%rax),%eax
  600eb4:	00 00                	add    %al,(%rax)
  600eb6:	00 00                	add    %al,(%rax)
  600eb8:	06                   	(bad)  
  600eb9:	00 00                	add    %al,(%rax)
  600ebb:	00 00                	add    %al,(%rax)
  600ebd:	00 00                	add    %al,(%rax)
  600ebf:	00 b8 02 40 00 00    	add    %bh,0x4002(%rax)
  600ec5:	00 00                	add    %al,(%rax)
  600ec7:	00 0a                	add    %cl,(%rdx)
  600ec9:	00 00                	add    %al,(%rax)
  600ecb:	00 00                	add    %al,(%rax)
  600ecd:	00 00                	add    %al,(%rax)
  600ecf:	00 58 00             	add    %bl,0x0(%rax)
  600ed2:	00 00                	add    %al,(%rax)
  600ed4:	00 00                	add    %al,(%rax)
  600ed6:	00 00                	add    %al,(%rax)
  600ed8:	0b 00                	or     (%rax),%eax
  600eda:	00 00                	add    %al,(%rax)
  600edc:	00 00                	add    %al,(%rax)
  600ede:	00 00                	add    %al,(%rax)
  600ee0:	18 00                	sbb    %al,(%rax)
  600ee2:	00 00                	add    %al,(%rax)
  600ee4:	00 00                	add    %al,(%rax)
  600ee6:	00 00                	add    %al,(%rax)
  600ee8:	15 00 00 00 00       	adc    $0x0,%eax
	...
  600ef5:	00 00                	add    %al,(%rax)
  600ef7:	00 03                	add    %al,(%rbx)
	...
  600f01:	10 60 00             	adc    %ah,0x0(%rax)
  600f04:	00 00                	add    %al,(%rax)
  600f06:	00 00                	add    %al,(%rax)
  600f08:	02 00                	add    (%rax),%al
  600f0a:	00 00                	add    %al,(%rax)
  600f0c:	00 00                	add    %al,(%rax)
  600f0e:	00 00                	add    %al,(%rax)
  600f10:	60                   	(bad)  
  600f11:	00 00                	add    %al,(%rax)
  600f13:	00 00                	add    %al,(%rax)
  600f15:	00 00                	add    %al,(%rax)
  600f17:	00 14 00             	add    %dl,(%rax,%rax,1)
  600f1a:	00 00                	add    %al,(%rax)
  600f1c:	00 00                	add    %al,(%rax)
  600f1e:	00 00                	add    %al,(%rax)
  600f20:	07                   	(bad)  
  600f21:	00 00                	add    %al,(%rax)
  600f23:	00 00                	add    %al,(%rax)
  600f25:	00 00                	add    %al,(%rax)
  600f27:	00 17                	add    %dl,(%rdi)
  600f29:	00 00                	add    %al,(%rax)
  600f2b:	00 00                	add    %al,(%rax)
  600f2d:	00 00                	add    %al,(%rax)
  600f2f:	00 e0                	add    %ah,%al
  600f31:	03 40 00             	add    0x0(%rax),%eax
  600f34:	00 00                	add    %al,(%rax)
  600f36:	00 00                	add    %al,(%rax)
  600f38:	07                   	(bad)  
  600f39:	00 00                	add    %al,(%rax)
  600f3b:	00 00                	add    %al,(%rax)
  600f3d:	00 00                	add    %al,(%rax)
  600f3f:	00 c8                	add    %cl,%al
  600f41:	03 40 00             	add    0x0(%rax),%eax
  600f44:	00 00                	add    %al,(%rax)
  600f46:	00 00                	add    %al,(%rax)
  600f48:	08 00                	or     %al,(%rax)
  600f4a:	00 00                	add    %al,(%rax)
  600f4c:	00 00                	add    %al,(%rax)
  600f4e:	00 00                	add    %al,(%rax)
  600f50:	18 00                	sbb    %al,(%rax)
  600f52:	00 00                	add    %al,(%rax)
  600f54:	00 00                	add    %al,(%rax)
  600f56:	00 00                	add    %al,(%rax)
  600f58:	09 00                	or     %eax,(%rax)
  600f5a:	00 00                	add    %al,(%rax)
  600f5c:	00 00                	add    %al,(%rax)
  600f5e:	00 00                	add    %al,(%rax)
  600f60:	18 00                	sbb    %al,(%rax)
  600f62:	00 00                	add    %al,(%rax)
  600f64:	00 00                	add    %al,(%rax)
  600f66:	00 00                	add    %al,(%rax)
  600f68:	fe                   	(bad)  
  600f69:	ff                   	(bad)  
  600f6a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600f6d:	00 00                	add    %al,(%rax)
  600f6f:	00 98 03 40 00 00    	add    %bl,0x4003(%rax)
  600f75:	00 00                	add    %al,(%rax)
  600f77:	00 ff                	add    %bh,%bh
  600f79:	ff                   	(bad)  
  600f7a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600f7d:	00 00                	add    %al,(%rax)
  600f7f:	00 01                	add    %al,(%rcx)
  600f81:	00 00                	add    %al,(%rax)
  600f83:	00 00                	add    %al,(%rax)
  600f85:	00 00                	add    %al,(%rax)
  600f87:	00 f0                	add    %dh,%al
  600f89:	ff                   	(bad)  
  600f8a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600f8d:	00 00                	add    %al,(%rax)
  600f8f:	00 88 03 40 00 00    	add    %cl,0x4003(%rax)
	...

Disassembly of section .got:

0000000000600ff8 <.got>:
	...

Disassembly of section .got.plt:

0000000000601000 <.got.plt>:
  601000:	28 0e                	sub    %cl,(%rsi)
  601002:	60                   	(bad)  
	...
  601017:	00 76 04             	add    %dh,0x4(%rsi)
  60101a:	40 00 00             	add    %al,(%rax)
  60101d:	00 00                	add    %al,(%rax)
  60101f:	00 86 04 40 00 00    	add    %al,0x4004(%rsi)
  601025:	00 00                	add    %al,(%rax)
  601027:	00 96 04 40 00 00    	add    %dl,0x4004(%rsi)
  60102d:	00 00                	add    %al,(%rax)
  60102f:	00 a6 04 40 00 00    	add    %ah,0x4004(%rsi)
  601035:	00 00                	add    %al,(%rax)
	...

Disassembly of section .data:

0000000000601038 <.data>:
	...

Disassembly of section .bss:

0000000000601048 <.bss>:
	...

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	47                   	rex.RXB
   1:	43                   	rex.XB
   2:	43 3a 20             	rex.XB cmp (%r8),%spl
   5:	28 55 62             	sub    %dl,0x62(%rbp)
   8:	75 6e                	jne    78 <printf@plt-0x4003f8>
   a:	74 75                	je     81 <printf@plt-0x4003ef>
   c:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
   f:	38 2e                	cmp    %ch,(%rsi)
  11:	34 2d                	xor    $0x2d,%al
  13:	32 75 62             	xor    0x62(%rbp),%dh
  16:	75 6e                	jne    86 <printf@plt-0x4003ea>
  18:	74 75                	je     8f <printf@plt-0x4003e1>
  1a:	31 7e 31             	xor    %edi,0x31(%rsi)
  1d:	34 2e                	xor    $0x2e,%al
  1f:	30 34 2e             	xor    %dh,(%rsi,%rbp,1)
  22:	33 29                	xor    (%rcx),%ebp
  24:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
  27:	38 2e                	cmp    %ch,(%rsi)
  29:	34 00                	xor    $0x0,%al

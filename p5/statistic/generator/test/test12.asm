ori $28, $0, 0
add $29, $0, $0
J0:
jal L0
nop
J1:
jal L1
nop
J2:
jal L2
nop
J3:
jal L3
nop
J4:
jal L4
nop
J5:
jal L5
nop
J6:
jal L6
nop
J7:
jal L7
nop
J8:
jal L8
nop
J9:
jal L9
nop
J10:
jal L10
nop
J11:
jal L11
nop
J12:
jal L12
nop
J13:
jal L13
nop
J14:
jal L14
nop
J15:
jal L15
nop
J16:
jal L16
nop
J17:
jal L17
nop
J18:
jal L18
nop
J19:
jal L19
nop
J20:
jal L20
nop
J21:
jal L21
nop
J22:
jal L22
nop
J23:
jal L23
nop
J24:
jal L24
nop
J25:
jal L25
nop
J26:
jal L26
nop
J27:
jal L27
nop
J28:
jal L28
nop
J29:
jal end
nop

L15:
ori $30, $27, 27267
lw $7, 196($0)
lui $15, 29324
sw $15, 52($0)
sw $8, 104($16)
lw $26, 16420($7)
lw $7, 372($0)
ori $4, $7, 24557
lui $24, 48935
add $13, $24, $28
sw $13, 104($0)
sub $4, $24, $19
lui $4, 64022
add $13, $4, $4
add $20, $13, $7
lui $17, 47736
add $24, $8, $4
ori $23, $24, 9660
lw $0, 304($0)
sub $21, $6, $14
lw $12, 96($0)
add $18, $21, $12
add $28, $21, $12
beq $28, $23, J16
nop
add $2, $28, $1
sub $31, $18, $12
ori $31, $0, 12424
jr $31
nop

L0:
sub $17, $31, $9
lui $11, 57993
lui $19, 1275
sw $17, 384($0)
jr $31
nop

L16:
sub $14, $31, $9
add $14, $25, $14
sw $31, 72($0)
sub $20, $27, $14
lui $10, 52575
add $12, $1, $10
lui $12, 55455
add $30, $12, $12
lw $11, 384($0)
ori $19, $11, 43090
lui $2, 19728
sub $25, $26, $2
add $15, $12, $1
sw $19, 32($0)
lui $15, 43298
lw $27, 192($0)
ori $19, $8, 42509
lw $15, 16659($19)
sw $19, 52($0)
sw $27, 52($0)
lui $3, 35692
sub $13, $3, $19
ori $13, $3, 40993
ori $16, $3, 36485
lw $25, 108($0)
ori $12, $25, 49649
sw $25, 128($0)
sw $12, 248($0)
add $0, $16, $29
beq $27, $7, J17
nop

L26:
lui $24, 17702
add $18, $8, $24
beq $29, $29, J27
nop

L27:
add $26, $22, $18
sub $1, $24, $23
ori $19, $11, 23093
lw $13, -22885($19)
add $28, $13, $1
add $15, $28, $28
add $2, $21, $30
sub $11, $28, $23
lw $13, 192($0)
ori $30, $13, 60210
lw $25, 152($0)
jr $31
nop

L21:
lui $23, 55342
beq $23, $5, J22
nop
lw $24, 332($0)
sub $14, $9, $24
sw $24, 276($0)
lw $17, 56($0)
lui $9, 62837
lw $11, 164($0)
sub $2, $9, $11
ori $21, $9, 44173
ori $14, $21, 22234
lui $22, 32588
add $14, $22, $14
lui $10, 56144
lui $21, 6127
ori $25, $14, 39132
add $7, $14, $7
add $26, $21, $25
add $9, $21, $26
lw $13, 312($0)
sw $13, 176($0)
lw $30, 96($0)
sw $7, 344($0)
ori $9, $23, 24526
ori $25, $9, 61964
add $14, $0, $25
sub $26, $14, $25
sw $26, 168($0)
sub $5, $14, $14
add $3, $5, $4
jr $31
nop

L14:
sw $29, 132($0)
sw $14, 108($0)
ori $0, $4, 12755
sw $4, 68($0)
sw $1, 368($16)
ori $15, $24, 45776
sw $16, 124($0)
ori $2, $6, 54374
sw $10, 196($0)
add $6, $15, $2
ori $26, $6, 36125
sw $6, 396($0)
lui $11, 55771
sw $26, 100($0)
sw $11, 356($0)
ori $2, $22, 2791
sub $9, $2, $23
add $19, $9, $2
sw $9, 260($0)
add $19, $13, $9
sw $16, 184($0)
lw $26, 24($0)
lw $2, 188($26)
sw $26, 272($2)
sub $24, $14, $2
jr $31
nop

L19:
add $15, $21, $8
sub $28, $15, $15
sw $28, 228($0)
add $1, $8, $30
lui $26, 16797
add $21, $26, $1
ori $13, $1, 1211
lw $15, -12320($31)
ori $20, $15, 25761
sw $8, 176($0)
lw $11, 308($0)
lui $7, 32435
add $7, $7, $11
lw $11, 48($0)
sw $6, 292($0)
lui $23, 39386
add $30, $23, $23
ori $3, $23, 23142
add $14, $23, $3
sw $3, 368($0)
lui $26, 6395
add $26, $0, $3
beq $3, $26, J20
nop

L17:
sw $8, 264($26)
sub $4, $12, $3
lw $30, 344($0)
lui $11, 60416
lw $30, 220($0)
add $22, $30, $4
jr $31
nop

L20:
lw $14, 280($0)
add $6, $14, $14
sw $14, 140($6)
lui $30, 60951
ori $11, $30, 21761
lui $4, 56900
sw $30, 332($0)
ori $3, $18, 203
sub $9, $3, $6
add $5, $10, $1
jr $31
nop

L25:
sw $10, 388($0)
lw $28, 388($0)
lw $17, 180($0)
sub $14, $21, $28
sub $29, $14, $17
sub $21, $28, $23
lui $19, 43755
sub $6, $30, $21
sw $6, 216($0)
add $22, $26, $19
lw $8, 48($0)
ori $16, $8, 25481
add $23, $8, $16
add $2, $17, $23
lui $26, 19684
lui $25, 12597
ori $8, $16, 61918
jr $31
nop

L22:
add $21, $5, $9
lui $6, 41686
lw $10, 196($0)
ori $17, $10, 36327
sub $12, $6, $16
ori $9, $12, 13969
ori $14, $23, 62857
sub $3, $21, $14
sw $9, 120($0)
add $0, $5, $8
sub $12, $16, $17
sw $12, 164($0)
add $17, $3, $2
ori $0, $17, 1104
ori $16, $17, 31076
sw $17, 48($0)
lw $31, -12132($31)
sw $31, 72($31)
lw $21, 176($0)
lw $11, 224($21)
sw $31, 172($11)
ori $1, $11, 42994
sw $11, 8($0)
add $10, $1, $17
sw $1, 244($31)
lui $0, 27578
beq $27, $0, J23
nop

L8:
add $31, $9, $30
sw $30, 220($0)
sw $27, 336($0)
lui $14, 11330
sub $20, $14, $31
add $19, $20, $14
ori $22, $20, 42145
add $26, $22, $27
lui $12, 32105
ori $24, $22, 30848
ori $8, $24, 14032
sw $12, 268($0)
lw $31, 268($0)
ori $30, $20, 23776
ori $2, $31, 28928
ori $1, $2, 20302
sw $1, 112($0)
lui $5, 31376
ori $31, $0, 12368
jr $31
nop

L13:
ori $1, $21, 29076
add $3, $5, $21
lw $7, 176($0)
lui $30, 51186
ori $9, $30, 10098
sw $16, 344($0)
sw $7, 312($0)
jr $31
nop

L5:
sub $0, $16, $16
lw $1, 76($0)
lui $22, 50175
lw $26, 52($0)
lw $24, 348($12)
lw $2, 164($26)
lui $9, 53610
sub $19, $24, $9
add $19, $2, $19
sub $19, $22, $19
lw $14, 8($15)
jr $31
nop

L11:
sub $20, $24, $28
sub $8, $4, $20
lui $18, 17288
lw $23, 340($0)
lui $4, 4337
lui $11, 55613
ori $29, $8, 31147
sw $11, 336($0)
sub $0, $31, $20
lw $21, 100($23)
lui $18, 5768
sub $1, $18, $21
add $16, $1, $18
ori $28, $16, 2655
add $13, $28, $16
lw $17, 176($0)
add $24, $16, $24
sw $18, 64($17)
lw $19, 92($15)
sw $19, 252($0)
ori $21, $5, 39461
sw $24, 132($0)
ori $16, $28, 49681
lw $10, 384($0)
ori $4, $16, 44563
lw $7, 320($0)
sub $1, $7, $7
lw $16, 188($0)
sub $13, $16, $2
ori $9, $16, 7165
add $19, $9, $28
sub $27, $9, $19
lw $30, 252($0)
lw $26, 240($0)
ori $20, $30, 55714
jr $31
nop

L6:
sw $14, 352($14)
sub $17, $3, $27
add $21, $14, $17
sub $29, $21, $17
sub $21, $29, $17
sw $10, 144($16)
add $24, $21, $21
ori $1, $19, 48989
ori $9, $4, 56302
add $5, $9, $9
add $17, $5, $21
add $19, $5, $17
ori $9, $19, 27869
sw $17, 156($0)
sw $9, 212($0)
lui $2, 59202
ori $23, $26, 64922
lw $17, 160($0)
add $12, $23, $17
lw $20, 336($0)
lw $0, 380($20)
lui $17, 24258
add $0, $31, $17
sub $11, $29, $17
jr $31
nop

L23:
sub $3, $31, $24
sw $3, 292($0)
sw $23, 180($0)
sub $28, $3, $20
lw $15, 296($0)
sw $28, 172($27)
lui $2, 28254
ori $22, $15, 6388
lui $1, 15271
add $25, $6, $1
sw $1, 256($27)
lui $16, 14561
sw $16, 84($0)
add $4, $16, $16
sw $26, 216($0)
sw $4, 312($0)
add $30, $25, $4
ori $12, $30, 38882
ori $27, $12, 25134
ori $3, $26, 5507
lui $27, 38760
sub $29, $27, $27
sw $4, 180($0)
add $2, $27, $29
ori $12, $1, 52970
lw $20, 144($0)
lui $3, 9505
lui $23, 36791
lw $0, 380($29)
lw $0, 308($0)
lui $15, 20294
jr $31
nop

L12:
lui $14, 5368
lw $2, 160($0)
add $14, $2, $14
sub $8, $2, $2
sub $10, $8, $8
lw $9, 44($0)
ori $23, $10, 24588
ori $1, $10, 9834
add $28, $23, $23
add $20, $28, $30
lw $26, -9682($1)
sub $8, $26, $28
sw $8, 20($26)
lui $13, 32659
sw $18, 136($0)
ori $10, $8, 45652
sub $25, $10, $13
ori $14, $1, 36169
ori $21, $25, 7250
sub $13, $28, $25
jr $31
nop

L1:
lw $7, 44($0)
sub $28, $7, $8
lw $13, 24($7)
sw $28, 308($13)
add $9, $3, $28
sw $13, 176($9)
lui $3, 39169
sw $9, 372($0)
sw $3, 368($0)
jr $31
nop

L2:
sw $3, 148($0)
add $26, $23, $8
ori $10, $3, 12280
sw $10, 256($26)
beq $13, $14, J3
nop

L28:
ori $23, $13, 48561
add $8, $23, $31
add $29, $8, $13
sub $14, $29, $8
sub $29, $14, $5
lui $19, 47058
lw $19, 320($25)
sw $26, 64($14)
lw $20, 216($19)
ori $1, $20, 44835
sub $1, $16, $1
lui $14, 29409
lw $22, 204($0)
lui $12, 38507
sw $12, 112($0)
sw $16, 288($0)
sw $9, 292($0)
sub $9, $12, $21
ori $29, $9, 47572
sw $29, 8($0)
lw $5, 220($0)
add $12, $9, $5
sub $31, $17, $12
ori $31, $0, 12528
jr $31
nop

L3:
sw $1, 224($0)
sw $16, 384($8)
add $22, $26, $26
add $29, $10, $22
lw $18, 296($0)
ori $26, $29, 17579
sub $1, $29, $26
lw $25, 16639($1)
add $27, $28, $25
jr $31
nop

L4:
sub $10, $27, $20
lui $10, 35574
ori $25, $10, 22237
ori $22, $25, 22744
sw $22, 240($0)
add $16, $2, $2
jr $31
nop

L24:
lw $14, 244($0)
sub $21, $10, $15
add $12, $14, $23
sub $28, $12, $21
lui $30, 54292
ori $5, $30, 12952
lw $8, 108($0)
sw $4, 64($0)
add $10, $30, $25
ori $9, $10, 5824
add $10, $0, $9
beq $9, $10, J25
nop

L7:
sw $11, 344($0)
lui $9, 36042
sub $9, $9, $21
sw $23, 4($0)
lw $30, 244($0)
beq $30, $0, J8
nop

L10:
add $30, $24, $8
sub $3, $24, $30
ori $28, $3, 64986
lui $25, 16851
sw $25, 128($0)
ori $24, $25, 55886
ori $30, $24, 60741
sw $30, 228($15)
lui $19, 21844
ori $4, $23, 14026
add $4, $0, $19
beq $19, $4, J11
nop

L9:
ori $31, $13, 43279
add $12, $1, $31
sw $31, 52($0)
sw $12, 144($29)
sw $23, 184($0)
sw $31, 356($0)
ori $14, $27, 802
add $12, $14, $19
sw $12, 92($0)
lui $26, 54518
lw $8, 80($0)
lw $24, 276($8)
beq $27, $24, J10
nop

L18:
add $1, $8, $22
lui $5, 47794
lui $16, 60234
ori $9, $5, 55078
lw $8, 128($0)
jr $31
nop

end:
nop
nop

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
jal L29
nop
J30:
jal L30
nop
J31:
jal end
nop
L7:
sw $8, 196($19)
lui $0, 44483
sw $31, 184($0)
lui $0, 26801
jr $31
nop

L22:
beq $30, $24, J23
nop
lui $18, 26773
ori $24, $18, 7111
lw $22, 300($0)
ori $27, $27, 61741
sw $22, 68($0)
sw $5, 108($0)
sub $9, $18, $27
sw $22, 176($0)
ori $31, $26, 851
sw $9, 224($0)
add $15, $31, $10
ori $29, $31, 60770
add $20, $29, $11
lui $0, 54342
sw $31, 208($0)
lui $11, 57832
add $4, $26, $27
sub $13, $26, $4
ori $28, $19, 61620
ori $24, $28, 15751
add $13, $24, $10
lui $16, 40459
ori $31, $0, 12480
jr $31
nop

L28:
sw $24, 396($0)
sub $26, $24, $13
lw $23, 396($0)
lui $2, 39763
lw $9, 140($0)
add $16, $0, $2
jr $31
nop

L17:
sw $7, -12240($31)
lw $3, 328($0)
beq $3, $3, J18
nop

L21:
jr $31
nop

L14:
sub $0, $15, $2
lui $9, 63193
lui $17, 33957
lui $12, 7618
sub $1, $9, $12
ori $2, $1, 5101
add $7, $2, $9
sub $17, $1, $2
sw $2, 392($0)
ori $4, $17, 37400
lw $9, 693($4)
lw $23, 372($0)
add $26, $16, $30
sw $26, 264($23)
lw $13, 264($0)
add $19, $1, $29
lui $25, 54100
sub $19, $13, $3
ori $1, $19, 40077
beq $9, $2, J15
nop
sw $1, 368($0)
ori $4, $16, 58227
sw $17, 200($0)
ori $17, $4, 882
add $25, $5, $17
ori $17, $25, 26782
lw $0, 140($0)
ori $18, $22, 31544
sw $31, 216($0)
sw $21, 300($0)
ori $27, $30, 10874
add $19, $2, $27
lui $19, 19760
add $6, $19, $18
sw $24, 80($0)
lw $22, 104($0)
add $1, $1, $22
lui $15, 3246
ori $2, $29, 11564
lui $11, 7540
ori $12, $2, 65532
ori $6, $24, 40526
lui $10, 26845
sw $6, 136($0)
lw $8, 160($0)
lui $9, 32958
ori $7, $9, 43614
sub $16, $28, $5
sw $16, 364($0)
ori $14, $28, 28718
lw $2, 140($0)
add $27, $5, $20
lw $1, 92($0)
sw $24, 364($0)
sw $2, 36($0)
sub $19, $24, $27
add $8, $19, $4
ori $11, $8, 60785
add $27, $29, $8
sub $0, $27, $11
ori $15, $8, 2279
lw $3, 48($0)
ori $20, $15, 14640
ori $0, $19, 25588
add $0, $3, $20
sw $26, 332($3)
ori $26, $18, 39770
lui $1, 7768
sw $26, 364($0)
lw $23, 228($0)
lui $18, 53434
lw $19, 104($0)
lw $11, 64($0)
sub $8, $19, $11
ori $31, $14, 20582
lui $17, 49862
add $30, $0, $4
beq $4, $30, J15
nop

L30:
ori $28, $23, 34454
sw $28, 192($0)
sw $29, 324($15)
sub $14, $13, $28
lw $0, 20($0)
lui $4, 28698
sub $17, $29, $4
lw $4, 224($0)
sub $10, $27, $4
lui $1, 45460
sub $21, $27, $1
sub $31, $21, $1
add $19, $21, $31
sub $8, $2, $3
sw $31, 316($0)
sw $0, 104($0)
add $21, $0, $19
beq $19, $21, J31
nop

L19:
sw $17, 372($26)
lui $31, 55703
lw $30, 392($11)
lw $11, 288($0)
sw $31, 288($0)
beq $11, $11, J20
nop

L9:
lui $11, 29044
lui $31, 42010
add $17, $1, $11
lw $7, 368($0)
ori $16, $7, 61298
sw $0, 88($0)
lui $19, 2093
lw $11, 248($0)
ori $1, $12, 65067
ori $29, $19, 50975
ori $6, $4, 30370
lui $4, 31299
ori $18, $5, 3111
ori $24, $18, 14765
add $8, $18, $24
sub $31, $18, $8
lw $2, 132($0)
add $1, $8, $31
add $14, $8, $4
ori $16, $14, 57660
sw $14, 100($0)
beq $13, $31, J10
nop
ori $31, $0, 12376
jr $31
nop

L13:
lui $23, 45410
lw $22, 0($0)
add $3, $22, $22
add $6, $12, $22
lui $12, 61748
sw $23, 360($0)
lui $7, 57631
sw $3, 320($0)
lw $6, 196($4)
add $29, $28, $6
sub $3, $25, $29
lui $9, 2745
sub $5, $29, $3
lui $2, 13403
sub $28, $6, $2
sw $11, 8($0)
sub $19, $2, $2
add $13, $19, $19
ori $23, $28, 54878
lw $15, 288($0)
ori $24, $7, 36162
sw $27, 68($0)
sw $23, 104($0)
sub $31, $24, $15
ori $31, $0, 12408
jr $31
nop

L0:
sub $22, $8, $4
sw $26, 84($22)
add $24, $7, $28
add $8, $31, $24
add $21, $24, $11
sw $22, -11940($8)
jr $31
nop

L18:
lw $1, 156($3)
lui $7, 51358
lw $4, 256($0)
sw $7, 388($4)
ori $19, $9, 47399
lui $5, 426
ori $22, $5, 18226
add $27, $22, $4
lw $26, 324($0)
add $17, $26, $5
sub $29, $9, $6
add $15, $22, $29
beq $15, $29, J19
nop
sw $17, 288($0)
sw $4, 136($0)
lw $11, 280($0)
jr $31
nop

L6:
add $15, $26, $12
sw $10, 260($0)
add $2, $15, $13
add $12, $2, $20
add $11, $2, $12
lui $12, 24654
sw $12, 296($0)
add $31, $5, $25
lui $31, 37842
sw $31, 192($0)
ori $2, $7, 14896
add $19, $0, $2
lui $25, 1784
ori $2, $27, 2371
lw $1, 196($0)
sw $1, 296($0)
lw $19, 140($0)
beq $19, $0, J7
nop

L4:
sub $16, $27, $18
sw $16, 176($0)
add $24, $28, $31
ori $29, $3, 49906
sub $0, $24, $21
sw $29, -12224($24)
lui $26, 9639
add $18, $26, $25
ori $16, $26, 18829
lw $26, 244($0)
lw $28, 264($26)
lui $26, 34216
add $3, $10, $26
add $17, $28, $26
beq $17, $17, J5
nop

L23:
sw $16, 136($0)
ori $24, $2, 48850
lw $10, 144($0)
sw $10, 156($10)
sw $30, 188($0)
lw $29, 124($10)
sub $20, $8, $29
lui $1, 56479
add $4, $20, $30
add $30, $3, $4
sub $24, $1, $4
add $27, $3, $4
lui $30, 42658
sub $31, $4, $27
ori $31, $16, 28157
ori $17, $31, 5275
add $27, $17, $31
add $23, $27, $31
lw $11, 8($0)
sw $3, 352($0)
lui $9, 26056
sw $11, 188($0)
sw $14, 76($0)
lui $14, 19508
beq $14, $23, J24
nop
sw $10, 336($0)
sw $30, 172($0)
add $0, $6, $23
sw $9, 224($0)
sw $14, 320($0)
lw $8, 172($0)
add $9, $8, $8
lui $12, 12799
ori $31, $0, 12488
jr $31
nop

L25:
sub $8, $27, $13
lui $3, 27315
sw $3, 228($0)
lw $3, 72($0)
ori $19, $31, 54746
ori $5, $19, 33393
lw $18, 76($0)
lui $28, 1495
lw $9, 228($29)
ori $16, $9, 27715
sw $21, 372($0)
sub $14, $4, $9
sw $8, 140($0)
ori $31, $15, 27790
add $14, $31, $15
sub $3, $10, $14
ori $8, $30, 10452
sw $31, 96($0)
ori $0, $16, 38900
sw $8, 196($0)
ori $31, $28, 3274
ori $27, $31, 1519
lui $9, 36496
ori $15, $27, 12742
lui $26, 7400
ori $23, $14, 9983
sw $23, 184($0)
lw $17, 332($10)
sw $31, 132($0)
ori $12, $15, 21355
lui $9, 6310
ori $17, $12, 43110
ori $2, $17, 11356
ori $21, $17, 3527
sub $20, $17, $12
ori $25, $23, 53013
beq $25, $25, J26
nop

L15:
ori $16, $17, 42020
add $2, $8, $5
add $15, $16, $2
sub $0, $16, $15
ori $22, $15, 2540
jr $31
nop

L10:
lui $23, 21589
lui $24, 27131
lui $25, 39354
ori $24, $25, 6756
lw $3, 312($0)
lw $9, 296($3)
sub $30, $9, $3
lw $3, 376($9)
lw $7, 88($30)
lw $13, 200($7)
ori $24, $13, 36554
add $12, $9, $31
beq $12, $31, J11
nop

L27:
lw $19, 236($0)
add $5, $20, $9
sub $1, $18, $29
lw $20, 180($0)
lw $4, 360($0)
lw $24, 276($0)
sub $15, $24, $5
add $5, $15, $16
add $13, $15, $5
sub $24, $13, $5
ori $23, $13, 30029
add $21, $23, $5
ori $11, $24, 24148
lui $29, 54871
lw $16, 252($0)
lw $11, 308($0)
add $16, $11, $25
sw $16, 140($0)
ori $10, $6, 52671
lw $13, 132($0)
lui $23, 25798
ori $9, $23, 44249
sw $9, 320($0)
sw $22, 104($0)
lw $11, 276($0)
sw $9, 392($0)
lw $5, 220($19)
ori $27, $5, 28416
ori $28, $13, 54370
lui $31, 50153
sw $27, 164($0)
add $25, $31, $5
lw $19, 204($0)
lw $7, 268($0)
sw $8, 112($0)
lw $16, 172($0)
lw $2, 148($0)
ori $27, $2, 35302
add $18, $16, $16
lw $21, 144($20)
lui $20, 8551
sw $20, 104($0)
lui $21, 945
lui $31, 4273
sw $31, 76($0)
add $8, $6, $21
ori $26, $8, 13974
ori $21, $8, 42062
ori $24, $21, 322
lui $8, 48916
lw $23, 88($0)
sw $23, 200($0)
sub $8, $24, $6
lw $7, 264($0)
ori $24, $7, 11923
lui $24, 6962
add $25, $8, $7
ori $31, $0, 12520
jr $31
nop

L2:
add $8, $6, $3
lui $22, 45877
ori $13, $22, 46868
add $6, $8, $13
add $12, $6, $13
lw $10, 248($25)
sub $1, $8, $0
add $22, $1, $12
jr $31
nop

L26:
sub $28, $20, $25
ori $13, $28, 46166
lui $2, 60437
sw $27, 216($0)
beq $16, $24, J27
nop
ori $31, $13, 6443
lw $12, 156($0)
add $19, $12, $31
ori $26, $19, 59570
sub $13, $19, $8
lui $2, 11774
lui $17, 5520
lw $11, 284($0)
sub $28, $11, $17
sw $13, 252($11)
lw $7, 372($0)
add $15, $7, $31
ori $2, $1, 65279
sw $15, 16($0)
lw $3, 328($0)
sub $10, $3, $15
sw $8, 128($0)
sub $6, $16, $2
sw $6, 208($0)
sw $10, -32424($20)
lw $10, 17851($7)
beq $7, $30, J27
nop
lui $22, 41680
ori $26, $6, 40137
add $10, $26, $26
add $21, $10, $23
sub $12, $10, $2
lui $13, 54416
sw $12, 380($3)
add $17, $13, $14
lw $16, 96($0)
beq $16, $17, J27
nop
ori $27, $10, 22824
add $2, $27, $26
lw $22, 32($0)
sw $6, 160($22)
add $3, $22, $17
ori $3, $3, 35452
sub $9, $3, $3
lw $9, 8($0)
add $28, $8, $9
add $1, $28, $28
lw $2, 340($0)
sub $23, $2, $30
sub $25, $3, $23
add $11, $1, $14
lui $18, 44802
lw $3, 156($0)
sw $19, 60($3)
add $6, $3, $20
lw $23, -32672($6)
lw $14, 8($0)
lui $17, 18300
lui $9, 28153
sw $9, 268($0)
lw $9, 308($0)
lui $20, 60732
lw $26, 172($0)
add $23, $26, $9
add $16, $23, $20
lw $24, 108($0)
sw $24, 216($0)
sw $16, 352($0)
ori $20, $24, 55528
ori $7, $16, 63207
sw $20, 308($0)
lui $7, 62376
sub $22, $20, $31
add $15, $22, $25
lw $21, 36($0)
add $0, $21, $15
sw $7, 92($3)
lw $18, 380($0)
lw $7, 332($29)
lui $12, 57637
lw $30, 68($0)
add $30, $30, $26
ori $14, $26, 63945
sw $12, 156($0)
add $16, $30, $8
sw $16, 68($0)
sub $5, $7, $16
lui $15, 63330
ori $31, $0, 12512
jr $31
nop

L8:
sub $24, $11, $28
add $31, $17, $10
ori $27, $24, 36304
sw $27, 272($0)
lw $31, -509($21)
lui $5, 1653
sub $14, $27, $31
add $6, $5, $14
sub $30, $25, $6
sub $10, $2, $25
ori $31, $0, 12368
jr $31
nop

L16:
ori $16, $15, 58968
sw $16, 112($0)
ori $30, $11, 65448
add $29, $30, $15
add $8, $29, $26
sw $8, -12168($31)
ori $31, $2, 8360
lui $15, 15842
lw $9, 228($0)
add $2, $15, $9
sub $7, $8, $21
sw $9, 68($0)
beq $29, $29, J17
nop

L29:
ori $13, $16, 14585
add $1, $13, $16
lw $7, 112($0)
lw $1, 136($0)
lui $10, 28122
lui $8, 13172
ori $10, $8, 65503
sw $10, 48($0)
lui $5, 61063
sub $18, $10, $5
add $9, $18, $5
ori $14, $9, 29740
lw $15, 168($0)
sw $15, 328($0)
lw $27, 332($0)
lw $18, 224($11)
add $2, $18, $18
add $26, $7, $2
lui $5, 43250
ori $10, $5, 59266
lui $31, 34750
lw $31, 328($0)
beq $8, $31, J30
nop
lw $6, 104($0)
sw $13, 40($0)
sub $19, $31, $21
lw $1, 196($0)
ori $28, $1, 31502
lw $5, 200($0)
sw $13, 264($0)
sw $17, 176($0)
lw $2, 284($3)
ori $9, $15, 28947
lw $9, -28675($9)
lw $29, 136($0)
sw $29, 292($0)
sw $9, 396($0)
add $3, $18, $29
ori $4, $6, 39976
beq $29, $14, J30
nop
ori $31, $0, 12536
jr $31
nop

L12:
beq $2, $20, J13
nop
lui $14, 33240
ori $28, $1, 43214
sw $14, -12312($31)
lw $23, 348($0)
sw $26, 208($0)
ori $26, $23, 65436
ori $26, $26, 17044
ori $16, $21, 58354
add $4, $11, $16
ori $4, $26, 44555
lui $18, 19858
lui $12, 38522
lw $4, 252($0)
sub $17, $4, $21
ori $31, $17, 48512
lw $30, 344($0)
add $5, $30, $4
lui $17, 35997
ori $10, $17, 28662
sub $9, $7, $10
lw $15, 216($0)
lui $21, 35224
sub $13, $21, $11
sub $28, $13, $2
lw $25, 0($0)
add $16, $27, $25
add $20, $16, $28
add $2, $20, $9
sub $31, $20, $19
ori $7, $31, 33018
sub $27, $22, $2
sw $19, 392($0)
ori $16, $27, 996
ori $5, $19, 21027
lw $19, 308($0)
ori $2, $19, 14689
lw $30, 100($0)
lw $15, 316($19)
sw $15, 60($0)
ori $28, $19, 50586
sub $21, $6, $28
sub $15, $28, $21
ori $31, $0, 12400
jr $31
nop

L3:
sub $29, $2, $29
sw $29, 224($29)
sw $4, 260($24)
sw $9, 80($15)
jr $31
nop

L1:
lui $5, 27804
ori $0, $22, 17706
lw $28, 316($2)
ori $23, $26, 53740
add $6, $28, $23
jr $31
nop

L20:
jr $31
nop

L24:
sw $28, 260($0)
jr $31
nop

L11:
add $19, $24, $16
sw $19, 24($0)
sub $0, $16, $19
sw $25, 0($0)
sw $8, 104($0)
ori $21, $10, 40479
sub $8, $17, $7
lw $11, 232($0)
sw $8, 36($3)
lw $2, 276($11)
lw $22, 276($0)
lui $11, 57850
beq $11, $18, J12
nop
ori $12, $11, 12461
add $16, $0, $12
beq $12, $16, J12
nop

L5:
sw $17, 96($2)
ori $21, $26, 35023
beq $8, $21, J6
nop
ori $26, $21, 19643
lw $20, 116($0)
sub $15, $21, $20
add $11, $26, $15
sw $11, 268($20)
lui $7, 20641
sub $9, $7, $15
sw $10, 280($25)
add $22, $26, $26
ori $21, $20, 673
add $26, $23, $22
ori $11, $28, 9678
sw $28, 392($0)
beq $11, $22, J6
nop
sw $22, 352($20)
sub $0, $7, $4
ori $4, $0, 28541
add $11, $5, $4
sw $4, 24($20)
lui $28, 39134
beq $28, $30, J6
nop
lui $17, 7351
ori $24, $4, 44267
sw $20, 136($0)
lui $27, 8924
sub $20, $12, $24
ori $10, $20, 4383
sub $19, $21, $10
sw $10, 40($0)
ori $10, $14, 38631
sw $4, -12208($31)
lui $16, 47980
sub $3, $16, $11
sw $15, 356($0)
lui $26, 7343
sub $2, $19, $22
sw $26, 80($0)
jr $31
nop

end:
nop
nop

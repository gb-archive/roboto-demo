; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: twister_2bit.png
; Pixel Width: 160px
; Pixel Height: 144px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

twister_2bit_tile_map_size EQU $0168
twister_2bit_tile_map_width EQU $14
twister_2bit_tile_map_height EQU $12

twister_2bit_tile_data_size EQU $0BF0
twister_2bit_tile_count EQU $0168

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

twister_2bit_map_data:
DB $00,$00,$00,$00,$00,$01,$02,$03,$04,$05,$06,$07,$07,$08,$09,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$0A,$0B,$0C,$0D,$0E,$0F,$10,$11
DB $12,$13,$14,$15,$00,$00,$00,$00,$00,$00,$00,$00,$16,$17,$18,$19
DB $1A,$1B,$1C,$1D,$1E,$1F,$20,$21,$00,$00,$00,$00,$00,$00,$00,$00
DB $22,$23,$24,$25,$26,$27,$28,$29,$2A,$2B,$2C,$2D,$00,$00,$00,$00
DB $00,$00,$00,$2E,$2F,$30,$31,$32,$33,$34,$35,$36,$37,$38,$07,$39
DB $00,$00,$00,$00,$00,$00,$00,$00,$3A,$3B,$3C,$3D,$3E,$3F,$40,$41
DB $42,$07,$07,$43,$00,$00,$00,$00,$00,$00,$00,$00,$44,$45,$46,$47
DB $48,$49,$4A,$4B,$4C,$07,$07,$4D,$00,$00,$00,$00,$00,$00,$00,$00
DB $4E,$4F,$50,$51,$52,$53,$54,$55,$07,$07,$56,$57,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$58,$59,$5A,$5B,$5C,$5D,$5E,$07,$07,$5F,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$60,$61,$62,$63,$64,$65,$66
DB $07,$67,$68,$00,$00,$00,$00,$00,$00,$00,$00,$00,$69,$6A,$6B,$6C
DB $6D,$6E,$6F,$70,$12,$71,$72,$73,$00,$00,$00,$00,$00,$00,$00,$00
DB $74,$75,$76,$77,$78,$79,$7A,$7B,$7C,$7D,$7E,$7F,$00,$00,$00,$00
DB $00,$00,$00,$00,$80,$81,$82,$83,$84,$85,$86,$87,$88,$89,$2C,$8A
DB $00,$00,$00,$00,$00,$00,$00,$00,$8B,$8C,$8D,$8E,$8F,$90,$91,$92
DB $93,$94,$07,$95,$96,$00,$00,$00,$00,$00,$00,$00,$97,$98,$99,$9A
DB $9B,$9C,$9D,$9E,$9F,$A0,$07,$A1,$00,$00,$00,$00,$00,$00,$00,$00
DB $A2,$A3,$A4,$A5,$A6,$A7,$A8,$A9,$AA,$07,$07,$AB,$00,$00,$00,$00
DB $00,$00,$00,$00,$AC,$AD,$AE,$AF,$B0,$B1,$B2,$B3,$07,$07,$07,$B4
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$B5,$B6,$B7,$B8,$B9,$BA,$BB
DB $BC,$BD,$BE,$00,$00,$00,$00,$00

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

twister_2bit_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FD,$FF,$FC,$FF,$F0,$FF,$F5,$FF,$E0,$FF,$CA,$FF,$D0,$FF,$84,$FF
DB $02,$FD,$14,$EB,$00,$FF,$10,$FF,$84,$FF,$10,$FF,$84,$FF,$10,$FF
DB $56,$A9,$AF,$50,$01,$FE,$02,$FD,$00,$FF,$80,$FF,$22,$FF,$08,$FF
DB $FE,$00,$FA,$00,$BF,$40,$2F,$D0,$0B,$F4,$00,$FF,$00,$FF,$00,$FF
DB $00,$00,$00,$00,$A0,$00,$E8,$00,$FC,$00,$7F,$80,$9F,$60,$03,$FC
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$40,$00,$F8,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$01,$01,$01,$01,$02,$03,$04,$07,$08,$0F
DB $5F,$7F,$6F,$5F,$8F,$EF,$3F,$C7,$13,$E7,$17,$E3,$1B,$E1,$8D,$F1
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FC,$FF,$FD,$FF,$F8,$FF,$F5,$FF
DB $81,$FF,$2A,$FF,$00,$FF,$29,$FF,$84,$FF,$10,$FF,$4A,$FF,$20,$FF
DB $45,$FF,$10,$FF,$84,$FF,$10,$FF,$44,$FF,$81,$FF,$28,$FF,$81,$FF
DB $21,$FF,$00,$FF,$95,$FF,$40,$FF,$10,$FF,$05,$FF,$40,$FF,$09,$FF
DB $20,$FF,$02,$FF,$10,$FF,$40,$FF,$00,$FF,$25,$FF,$08,$FF,$00,$FF
DB $04,$FB,$02,$FD,$00,$FF,$81,$FE,$02,$FD,$00,$FF,$02,$FD,$40,$FF
DB $FC,$00,$BF,$40,$FC,$00,$3F,$C0,$BD,$40,$5F,$A0,$BF,$40,$6F,$90
DB $00,$00,$80,$00,$80,$00,$A0,$00,$40,$00,$D0,$00,$50,$00,$D4,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$02,$03,$05,$07
DB $11,$1F,$24,$3F,$40,$7F,$49,$7F,$82,$FF,$A8,$FF,$00,$FF,$52,$FF
DB $0D,$F0,$0C,$F0,$4E,$F0,$0C,$F0,$0C,$F0,$1C,$E0,$98,$E0,$3C,$C0
DB $FF,$FF,$7F,$FF,$7F,$7F,$3F,$7F,$7F,$3F,$1F,$3F,$3F,$1F,$1F,$1F
DB $F8,$FF,$F1,$FF,$E4,$FF,$F1,$FF,$E2,$FF,$C8,$FF,$C2,$FF,$D4,$FF
DB $44,$FF,$11,$FF,$44,$FF,$11,$FF,$44,$FF,$11,$FF,$84,$FF,$11,$FF
DB $50,$FF,$02,$FF,$50,$FF,$09,$FF,$40,$FF,$05,$FF,$50,$FF,$00,$FF
DB $20,$FF,$81,$FF,$28,$FF,$00,$FF,$44,$FF,$10,$FF,$02,$FF,$48,$FF
DB $42,$FF,$00,$FF,$24,$FF,$80,$FF,$28,$FF,$01,$FF,$04,$FF,$A0,$FF
DB $01,$FE,$00,$FF,$01,$FE,$40,$FF,$00,$FF,$20,$FF,$00,$FF,$20,$FF
DB $2F,$D0,$5F,$A0,$2B,$D4,$57,$A8,$9B,$64,$25,$DA,$4D,$B2,$15,$EA
DB $68,$00,$F6,$00,$D8,$00,$F8,$00,$F0,$00,$F1,$01,$E2,$03,$4D,$87
DB $08,$0F,$12,$1F,$20,$3F,$54,$7F,$82,$FF,$28,$FF,$42,$FF,$08,$FF
DB $00,$FF,$A4,$FF,$08,$FF,$A0,$FF,$04,$FF,$80,$FF,$21,$FE,$81,$FE
DB $38,$C0,$38,$C0,$50,$A0,$70,$80,$E0,$00,$E0,$00,$C0,$00,$C0,$00
DB $1F,$0F,$0F,$0F,$0F,$07,$0F,$07,$07,$07,$07,$07,$07,$03,$03,$03
DB $81,$FF,$D4,$FF,$82,$FF,$08,$FF,$92,$FF,$44,$FF,$01,$FF,$AA,$FF
DB $44,$FF,$10,$FF,$88,$FF,$20,$FF,$8A,$FF,$20,$FF,$09,$FF,$20,$FF
DB $2A,$FF,$80,$FF,$25,$FF,$80,$FF,$28,$FF,$82,$FF,$10,$FF,$40,$FF
DB $00,$FF,$52,$FF,$00,$FF,$11,$FF,$84,$FF,$10,$FF,$05,$FF,$A0,$FF
DB $08,$FF,$44,$FF,$00,$FF,$22,$FF,$08,$FF,$20,$FF,$02,$FF,$48,$FF
DB $80,$FF,$10,$FF,$00,$FF,$40,$FF,$12,$FF,$80,$FF,$20,$FF,$02,$FF
DB $05,$FA,$2A,$D5,$03,$FC,$07,$F8,$17,$E8,$0F,$F1,$1E,$E3,$3D,$C7
DB $D8,$0F,$55,$1F,$60,$3F,$D2,$7F,$88,$FF,$A0,$FF,$15,$FF,$40,$FF
DB $40,$FF,$11,$FF,$88,$FF,$04,$FF,$A1,$FF,$00,$FF,$54,$FF,$00,$FF
DB $23,$FC,$03,$FC,$0F,$F0,$97,$E8,$0E,$F0,$3C,$C0,$38,$C0,$78,$80
DB $80,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $03,$03,$03,$01,$01,$01,$01,$01,$01,$01,$01,$01,$00,$01,$00,$01
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FF,$FF,$FF,$FF
DB $00,$FF,$0A,$FF,$50,$FF,$02,$FF,$28,$FF,$82,$FF,$28,$FF,$02,$FF
DB $8A,$FF,$20,$FF,$89,$FF,$24,$FF,$81,$FF,$08,$FF,$A1,$FF,$04,$FF
DB $09,$FF,$20,$FF,$08,$FF,$21,$FF,$08,$FF,$42,$FF,$08,$FF,$20,$FF
DB $00,$FF,$09,$FF,$40,$FF,$02,$FF,$20,$FF,$82,$FF,$10,$FF,$04,$FF
DB $00,$FF,$24,$FF,$01,$FF,$88,$FF,$20,$FF,$02,$FF,$88,$FF,$21,$FF
DB $90,$FF,$04,$FF,$20,$FF,$00,$FF,$90,$FF,$00,$FF,$41,$FF,$02,$FF
DB $28,$DF,$52,$BF,$A8,$7F,$20,$FF,$6A,$FF,$80,$FF,$AA,$FF,$01,$FF
DB $15,$FF,$A0,$FF,$09,$FF,$A4,$FF,$01,$FF,$94,$FF,$20,$FF,$02,$FF
DB $08,$FF,$22,$FD,$01,$FE,$43,$FC,$07,$F8,$17,$E8,$0E,$F0,$2F,$D0
DB $F0,$00,$F0,$00,$E0,$00,$C0,$00,$C0,$00,$80,$00,$00,$00,$00,$00
DB $01,$00,$01,$00,$00,$00,$01,$00,$00,$00,$01,$00,$01,$00,$01,$00
DB $51,$FF,$04,$FF,$A1,$FF,$0A,$FF,$A0,$FF,$92,$FF,$84,$FF,$C8,$FF
DB $48,$FF,$02,$FF,$48,$FF,$20,$FF,$82,$FF,$08,$FF,$90,$FF,$02,$FF
DB $09,$FF,$80,$FF,$24,$FF,$80,$FF,$29,$FF,$00,$FF,$92,$FF,$00,$FF
DB $41,$FF,$14,$FF,$80,$FF,$22,$FF,$00,$FF,$0A,$FF,$40,$FF,$12,$FF
DB $00,$FF,$09,$FF,$A0,$FF,$01,$FF,$94,$FF,$01,$FF,$AB,$FF,$02,$FF
DB $04,$FF,$1A,$FF,$54,$FF,$31,$FF,$40,$FF,$95,$FF,$00,$FF,$A5,$FF
DB $A4,$FF,$01,$FF,$54,$FF,$01,$FF,$50,$FF,$05,$FF,$40,$FF,$09,$FF
DB $48,$FF,$00,$FF,$50,$FF,$00,$FF,$42,$FD,$05,$FA,$03,$FC,$07,$F8
DB $3C,$C0,$BC,$40,$B8,$40,$F0,$00,$E0,$00,$F0,$00,$C0,$00,$80,$00
DB $01,$00,$00,$01,$01,$00,$00,$01,$01,$01,$01,$01,$01,$01,$01,$03
DB $92,$FF,$C0,$FF,$EA,$FF,$C0,$FF,$EA,$FF,$E0,$FF,$F4,$FF,$F1,$FF
DB $A0,$FF,$05,$FF,$80,$FF,$2A,$FF,$00,$FF,$90,$FF,$04,$FF,$51,$FF
DB $55,$FF,$00,$FF,$44,$FF,$11,$FF,$00,$FF,$91,$FF,$04,$FF,$20,$FF
DB $04,$FF,$50,$FF,$05,$FF,$20,$FF,$49,$FF,$04,$FF,$41,$FF,$16,$FF
DB $54,$FF,$4D,$FF,$10,$FF,$A5,$FF,$60,$FF,$85,$FF,$20,$FF,$95,$FF
DB $10,$FF,$41,$FF,$14,$FF,$42,$FF,$10,$FF,$42,$FF,$10,$FF,$41,$FF
DB $40,$FF,$12,$FF,$40,$FF,$08,$FF,$80,$FF,$20,$FF,$01,$FE,$40,$FF
DB $1B,$E4,$0F,$F0,$3E,$C0,$2E,$D0,$BD,$40,$7C,$80,$78,$80,$F4,$00
DB $A0,$00,$00,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $03,$03,$03,$03,$07,$03,$07,$07,$07,$07,$0F,$0F,$0F,$0F,$0F,$0F
DB $F8,$FF,$FD,$FF,$F8,$FF,$FE,$FF,$FC,$FF,$FE,$FF,$FF,$FF,$FF,$FF
DB $00,$FF,$22,$FF,$08,$FF,$A0,$FF,$04,$FF,$50,$FF,$05,$FF,$20,$FF
DB $09,$FF,$22,$FF,$80,$FF,$15,$FF,$80,$FF,$25,$FF,$09,$FF,$22,$FF
DB $04,$FF,$29,$FF,$94,$FF,$68,$FF,$52,$FF,$C0,$FF,$15,$FF,$40,$FF
DB $00,$FF,$55,$FF,$00,$FF,$A8,$FF,$02,$FF,$51,$FF,$04,$FF,$90,$FF
DB $10,$FF,$42,$FF,$28,$FF,$81,$FF,$28,$FF,$00,$FF,$24,$FF,$80,$FF
DB $02,$FD,$45,$FA,$03,$FC,$05,$FA,$0B,$F4,$07,$F8,$2F,$D0,$17,$E8
DB $F8,$00,$F0,$00,$E0,$00,$D0,$00,$C0,$00,$E0,$00,$80,$00,$A0,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$01
DB $1F,$1F,$1F,$1F,$3F,$3F,$3F,$3F,$7F,$7F,$7F,$7F,$FF,$FF,$FF,$FF
DB $88,$FF,$A0,$FF,$CA,$FF,$E0,$FF,$F4,$FF,$F1,$FF,$F9,$FF,$FF,$FF
DB $0C,$FF,$BA,$FF,$20,$FF,$2A,$FF,$C1,$FF,$94,$FF,$41,$FF,$04,$FF
DB $94,$FF,$01,$FF,$A8,$FF,$02,$FF,$50,$FF,$02,$FF,$50,$FF,$02,$FF
DB $02,$FF,$28,$FF,$42,$FF,$08,$FF,$82,$FF,$28,$FF,$82,$FF,$11,$FF
DB $20,$FF,$04,$FF,$90,$FF,$00,$FF,$90,$FF,$00,$FF,$40,$FF,$00,$FF
DB $2F,$D0,$16,$E8,$5F,$A0,$5F,$A0,$5E,$A0,$3E,$C0,$AE,$50,$BE,$40
DB $40,$00,$C0,$00,$00,$00,$40,$00,$80,$00,$80,$00,$80,$00,$80,$00
DB $01,$01,$03,$03,$03,$03,$07,$07,$0F,$0F,$0F,$0F,$1F,$1F,$3F,$3F
DB $FC,$FF,$F9,$FF,$F8,$FF,$F4,$FF,$F2,$FF,$E0,$FF,$CA,$FF,$C0,$FF
DB $51,$FF,$04,$FF,$50,$FF,$82,$FF,$28,$FF,$80,$FF,$2A,$FF,$80,$FF
DB $28,$FF,$82,$FF,$20,$FF,$8A,$FF,$20,$FF,$81,$FF,$28,$FF,$81,$FF
DB $00,$FF,$A4,$FF,$01,$FF,$94,$FF,$01,$FF,$24,$FF,$09,$FF,$20,$FF
DB $40,$FF,$02,$FD,$20,$FF,$00,$FF,$01,$FE,$20,$FF,$02,$FD,$40,$FF
DB $BD,$40,$7F,$80,$BD,$40,$7D,$80,$5F,$A0,$BD,$40,$BF,$40,$5E,$A0
DB $00,$00,$40,$00,$00,$00,$40,$00,$00,$00,$40,$00,$40,$00,$A0,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$02,$03,$04,$07,$0C,$07
DB $3F,$3F,$5F,$7F,$8F,$FF,$87,$FF,$23,$FF,$87,$FB,$05,$FB,$46,$F9
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FD,$FF,$F8,$FF,$FD,$FF
DB $90,$FF,$0A,$FF,$20,$FF,$05,$FF,$48,$FF,$20,$FF,$4A,$FF,$01,$FF
DB $24,$FF,$90,$FF,$04,$FF,$50,$FF,$04,$FF,$50,$FF,$04,$FF,$51,$FF
DB $24,$FF,$80,$FF,$24,$FF,$90,$FF,$04,$FF,$90,$FF,$04,$FF,$50,$FF
DB $04,$FF,$50,$FF,$82,$FF,$10,$FF,$84,$FF,$00,$FF,$92,$FF,$08,$FF
DB $01,$FE,$82,$FD,$00,$FF,$41,$FE,$00,$FF,$40,$FF,$01,$FE,$40,$FF
DB $FD,$00,$1F,$E0,$FE,$00,$2F,$D0,$DF,$20,$2F,$D0,$5F,$A0,$37,$C8
DB $40,$00,$A0,$00,$D0,$00,$A0,$00,$54,$00,$E8,$00,$B4,$00,$D5,$00
DB $08,$0F,$32,$1F,$24,$3F,$51,$7F,$84,$FF,$11,$FF,$80,$FF,$11,$FF
DB $87,$F8,$0E,$F0,$24,$F8,$0E,$F0,$0C,$F0,$0E,$F0,$1C,$E0,$1C,$E0
DB $FF,$FF,$7F,$FF,$FF,$7F,$3F,$7F,$3F,$3F,$1F,$3F,$1F,$1F,$0F,$1F
DB $F0,$FF,$E9,$FF,$F2,$FF,$E0,$FF,$EA,$FF,$E0,$FF,$C4,$FF,$D0,$FF
DB $50,$FF,$04,$FF,$48,$FF,$21,$FF,$08,$FF,$22,$FF,$88,$FF,$21,$FF
DB $04,$FF,$90,$FF,$05,$FF,$50,$FF,$01,$FF,$44,$FF,$10,$FF,$41,$FF
DB $02,$FF,$08,$FF,$40,$FF,$14,$FF,$00,$FF,$51,$FF,$04,$FF,$20,$FF
DB $01,$FF,$A8,$FF,$02,$FF,$90,$FF,$04,$FF,$22,$FF,$08,$FF,$21,$FF
DB $01,$FE,$40,$FF,$10,$FF,$00,$FF,$80,$FF,$10,$FF,$40,$FF,$00,$FF
DB $5F,$A0,$13,$EC,$AD,$52,$0B,$F4,$55,$AA,$0B,$F4,$49,$B6,$12,$ED
DB $FA,$00,$F6,$00,$F8,$00,$EC,$00,$F8,$00,$71,$81,$66,$83,$EC,$0F
DB $08,$0F,$12,$1F,$24,$3F,$40,$7F,$C4,$FF,$10,$FF,$44,$FF,$11,$FF
DB $44,$FF,$10,$FF,$02,$FF,$90,$FF,$00,$FF,$90,$FF,$41,$FE,$02,$FD
DB $18,$E0,$34,$C0,$38,$C0,$70,$80,$F0,$00,$60,$80,$E0,$00,$C0,$00
DB $1F,$0F,$07,$0F,$0F,$07,$07,$07,$03,$07,$07,$03,$07,$03,$01,$03
DB $C4,$FF,$90,$FF,$85,$FF,$90,$FF,$40,$FF,$85,$FF,$20,$FF,$92,$FF
DB $88,$FF,$04,$FF,$20,$FF,$85,$FF,$20,$FF,$09,$FF,$40,$FF,$12,$FF
DB $10,$FF,$85,$FF,$20,$FF,$08,$FF,$42,$FF,$10,$FF,$40,$FF,$02,$FF
DB $09,$FF,$20,$FF,$04,$FF,$90,$FF,$04,$FF,$90,$FF,$04,$FF,$50,$FF
DB $04,$FF,$10,$FF,$82,$FF,$08,$FF,$81,$FF,$24,$FF,$08,$FF,$A1,$FF
DB $50,$FF,$08,$FF,$80,$FF,$22,$FF,$10,$FF,$45,$FF,$10,$FF,$41,$FF
DB $05,$FA,$01,$FE,$05,$FA,$02,$FC,$0F,$F1,$0E,$F3,$1E,$E7,$18,$EF
DB $D1,$1F,$A0,$3F,$C2,$7F,$88,$FF,$02,$FF,$10,$FF,$04,$FF,$91,$FF
DB $00,$FF,$4A,$FF,$00,$FF,$49,$FF,$12,$FF,$40,$FF,$00,$FF,$28,$FF
DB $23,$FC,$83,$FC,$0F,$F0,$07,$F8,$1E,$E0,$1C,$E0,$78,$80,$BC,$40
DB $01,$03,$03,$01,$00,$01,$00,$01,$00,$01,$00,$01,$01,$00,$01,$00
DB $04,$FF,$90,$FF,$02,$FF,$08,$FF,$21,$FF,$04,$FF,$01,$FF,$28,$FF
DB $40,$FF,$04,$FF,$91,$FF,$00,$FF,$22,$FF,$08,$FF,$02,$FF,$20,$FF
DB $90,$FF,$04,$FF,$01,$FF,$24,$FF,$40,$FF,$09,$FF,$02,$FF,$90,$FF
DB $02,$FF,$48,$FF,$01,$FF,$08,$FF,$42,$FF,$11,$FF,$04,$FF,$10,$FF
DB $04,$FF,$10,$FF,$45,$FF,$00,$FF,$52,$FF,$08,$FF,$42,$FF,$11,$FF
DB $14,$FF,$40,$FF,$14,$FF,$40,$FF,$11,$FF,$42,$FF,$04,$FF,$48,$FF
DB $32,$DF,$60,$BF,$C1,$7F,$84,$FF,$20,$FF,$01,$FF,$48,$FF,$00,$FF
DB $04,$FF,$20,$FF,$09,$FF,$40,$FF,$12,$FF,$00,$FF,$49,$FF,$00,$FF
DB $00,$FF,$20,$FF,$03,$FC,$45,$FA,$07,$F8,$07,$F8,$1F,$E0,$5E,$A0
DB $F0,$00,$F0,$00,$E0,$00,$C0,$00,$80,$00,$80,$00,$00,$00,$00,$00
DB $01,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00
DB $7F,$FF,$FF,$FF,$7F,$FF,$FF,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $80,$FF,$02,$FF,$A0,$FF,$09,$FF,$80,$FF,$84,$FF,$80,$FF,$D1,$FF
DB $08,$FF,$44,$FF,$01,$FF,$10,$FF,$44,$FF,$01,$FF,$00,$FF,$24,$FF
DB $02,$FF,$48,$FF,$01,$FF,$08,$FF,$42,$FF,$08,$FF,$40,$FF,$04,$FF
DB $45,$FF,$00,$FF,$29,$FF,$00,$FF,$24,$FF,$82,$FF,$20,$FF,$84,$FF
DB $04,$FF,$50,$FF,$04,$FF,$48,$FF,$22,$FF,$89,$FF,$26,$FF,$94,$FF
DB $14,$FF,$A1,$FF,$40,$FF,$84,$FF,$81,$FF,$10,$FF,$00,$FF,$44,$FF
DB $4A,$FF,$00,$FF,$20,$FF,$01,$FF,$10,$FF,$02,$FF,$80,$FF,$08,$FF
DB $90,$FF,$00,$FF,$40,$FF,$01,$FE,$21,$FE,$05,$FA,$85,$FA,$07,$F8
DB $2C,$D0,$BA,$40,$F4,$00,$78,$80,$E0,$00,$E0,$00,$A0,$00,$C0,$00
DB $80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$01,$00,$00,$01,$01,$00,$00,$01,$01,$01,$03,$01
DB $C0,$FF,$C2,$FF,$C0,$FF,$E8,$FF,$E1,$FF,$E0,$FF,$F0,$FF,$F4,$FF
DB $01,$FF,$08,$FF,$40,$FF,$02,$FF,$08,$FF,$00,$FF,$21,$FF,$04,$FF
DB $10,$FF,$42,$FF,$00,$FF,$14,$FF,$40,$FF,$02,$FF,$28,$FF,$01,$FF
DB $29,$FF,$80,$FF,$24,$FF,$91,$FF,$04,$FF,$51,$FF,$0A,$FF,$54,$FF
DB $08,$FF,$54,$FF,$A0,$FF,$40,$FF,$C0,$FF,$02,$FF,$00,$FF,$10,$FF
DB $00,$FF,$88,$FF,$01,$FF,$10,$FF,$40,$FF,$04,$FF,$00,$FF,$00,$FF
DB $20,$FF,$00,$FF,$04,$FF,$20,$FF,$00,$FF,$81,$FE,$21,$FE,$02,$FD
DB $1A,$E4,$2F,$D0,$1E,$E0,$7E,$80,$5A,$A0,$7C,$80,$74,$80,$F8,$00
DB $80,$00,$00,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $03,$01,$03,$03,$03,$03,$03,$07,$03,$07,$07,$07,$0F,$07,$0F,$0F
DB $F0,$FF,$F8,$FF,$FC,$FF,$FD,$FF,$FE,$FF,$FE,$FF,$FF,$FF,$FF,$FF
DB $40,$FF,$00,$FF,$04,$FF,$01,$FF,$20,$FF,$00,$FF,$04,$FF,$00,$FF
DB $92,$FF,$08,$FF,$42,$FF,$08,$FF,$22,$FF,$82,$FF,$29,$FF,$8B,$FF
DB $18,$FF,$30,$FF,$D0,$FF,$20,$FF,$C8,$FF,$80,$FF,$00,$FF,$00,$FF
DB $01,$FF,$00,$FF,$80,$FF,$02,$FF,$10,$FF,$00,$FF,$80,$FF,$02,$FF
DB $20,$FF,$01,$FF,$04,$FF,$00,$FF,$40,$FF,$00,$FF,$10,$FF,$00,$FF
DB $02,$FD,$05,$FA,$07,$F8,$15,$EA,$0B,$F4,$17,$E8,$0F,$F0,$17,$E8
DB $E0,$00,$F8,$00,$C0,$00,$B0,$00,$C0,$00,$A0,$00,$A0,$00,$A0,$00
DB $1F,$0F,$1F,$1F,$3F,$1F,$1F,$3F,$7F,$3F,$3F,$7F,$FF,$7F,$FF,$FF
DB $80,$FF,$C9,$FF,$C0,$FF,$E0,$FF,$F2,$FF,$F8,$FF,$FB,$FF,$FE,$FF
DB $24,$FF,$0C,$FF,$70,$FF,$B1,$FF,$40,$FF,$80,$FF,$09,$FF,$00,$FF
DB $20,$FF,$02,$FF,$00,$FF,$00,$FF,$24,$FF,$00,$FF,$09,$FF,$00,$FF
DB $00,$FF,$10,$FF,$00,$FF,$41,$FF,$08,$FF,$00,$FF,$24,$FF,$00,$FF
DB $42,$FF,$00,$FF,$00,$FF,$24,$FF,$00,$FF,$01,$FF,$A8,$FF,$00,$FF
DB $05,$FA,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$20,$FF,$08,$FF,$00,$FF
DB $F0,$00,$7E,$80,$9F,$60,$0B,$F4,$00,$FF,$00,$FF,$40,$FF,$00,$FF
DB $00,$00,$00,$00,$A0,$00,$FA,$00,$5F,$A0,$01,$FE,$00,$FF,$00,$FF
DB $00,$00,$00,$00,$00,$00,$00,$00,$E4,$00,$6F,$90,$00,$FF,$00,$FF
DB $01,$00,$03,$01,$01,$03,$03,$07,$0F,$07,$CF,$0F,$EF,$1F,$3F,$FF
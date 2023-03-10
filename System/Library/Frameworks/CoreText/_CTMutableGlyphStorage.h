//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTGlyphStorageInterface;

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage
{
    CTGlyphStorageInterface *_interface;	// 56 = 0x38
    _Bool _implementsOrigins;	// 64 = 0x40
    _Bool _hasCustomAdvances;	// 65 = 0x41
    _Bool _implementsCustomAdvancesForIndexes;	// 66 = 0x42
}

@property(readonly, nonatomic) _Bool implementsCustomAdvancesForIndexes; // @synthesize implementsCustomAdvancesForIndexes=_implementsCustomAdvancesForIndexes;
@property(readonly, nonatomic) _Bool hasCustomAdvances; // @synthesize hasCustomAdvances=_hasCustomAdvances;
@property(readonly, nonatomic) _Bool implementsOrigins; // @synthesize implementsOrigins=_implementsOrigins;
- (void)disposeGlyphStack;	// IMP=0x00000000000d4df5
- (void)popGlyphAtIndex:(long long)arg1;	// IMP=0x00000000000d4dd8
- (void)pushGlyphAtIndex:(long long)arg1;	// IMP=0x00000000000d4dbb
- (void)initGlyphStackWithCapacity:(long long)arg1;	// IMP=0x00000000000d4d9e
- (void)sync;	// IMP=0x00000000000d4d09
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;	// IMP=0x00000000000d4c6f
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000d4bec
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000d4b24
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;	// IMP=0x00000000000d4ab8
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000d4a9b
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000d4a7e
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000d4a61
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000d4a44
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000d4926
- (struct CGPoint)originAtIndex:(long long)arg1;	// IMP=0x00000000000d48a7
- (void)resetOrigins:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000d483c
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000d481f
- (long long)attachmentCountAtIndex:(long long)arg1;	// IMP=0x00000000000d47fd
- (void)getCustomAdvances:(struct CGSize *)arg1 forIndexes:(const long long *)arg2 count:(long long)arg3;	// IMP=0x00000000000d47d1
- (struct CGSize)customAdvanceForIndex:(long long)arg1;	// IMP=0x00000000000d4776
- (void *)refCon;	// IMP=0x00000000000d4765
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000d469c
- (id)initWithInterface:(id)arg1 options:(unsigned int)arg2;	// IMP=0x00000000000d45bb
- (id)initWithInterface:(id)arg1;	// IMP=0x00000000000d45a7

@end


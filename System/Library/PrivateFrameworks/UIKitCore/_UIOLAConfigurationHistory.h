//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOLAConfigurationHistory
{
    _Bool _baselineRelativeArrangement;	// 8 = 0x8
    _Bool _itemOrderingChanged;	// 9 = 0x9
    _Bool _itemFittingSizeChanged;	// 10 = 0xa
    _Bool _hasEstablishedOrderingValues;	// 11 = 0xb
    _Bool _inOrderedArrangementUpdateSection;	// 12 = 0xc
    double _spacing;	// 16 = 0x10
    long long _distribution;	// 24 = 0x18
    NSMapTable *_customSpacings;	// 32 = 0x20
    double _proportionalFillDenominator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000106c0bb
@property(nonatomic) double proportionalFillDenominator; // @synthesize proportionalFillDenominator=_proportionalFillDenominator;
@property(nonatomic, getter=isInOrderedArrangementUpdateSection) _Bool inOrderedArrangementUpdateSection; // @synthesize inOrderedArrangementUpdateSection=_inOrderedArrangementUpdateSection;
@property(nonatomic) _Bool hasEstablishedOrderingValues; // @synthesize hasEstablishedOrderingValues=_hasEstablishedOrderingValues;
@property(readonly, nonatomic) NSMapTable *customSpacings; // @synthesize customSpacings=_customSpacings;
@property(nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property(nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged; // @synthesize _itemOrderingChanged;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (double)customSpacingAfterItem:(id)arg1;	// IMP=0x000000000106bf3e
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;	// IMP=0x000000000106be77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000106bd41

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(nonatomic) long long axis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(readonly) Class superclass;

@end


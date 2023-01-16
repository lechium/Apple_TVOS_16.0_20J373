//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVInfoCellView : UIView
{
    _Bool _headerOnLeading;	// 8 = 0x8
    UIView *_headerContentView;	// 16 = 0x10
    NSArray *_dataViews;	// 24 = 0x18
    double _headerWidth;	// 32 = 0x20
    double _headerMaxWidth;	// 40 = 0x28
    double _headerMinWidth;	// 48 = 0x30
    double _normalizedHeaderWidth;	// 56 = 0x38
    struct UIEdgeInsets _headerMargin;	// 64 = 0x40
}

+ (id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00100000000e3ec9
- (void).cxx_destruct;	// IMP=0x00000000000e5fe0
@property(nonatomic) double normalizedHeaderWidth; // @synthesize normalizedHeaderWidth=_normalizedHeaderWidth;
@property(nonatomic) struct UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(nonatomic) double headerMinWidth; // @synthesize headerMinWidth=_headerMinWidth;
@property(nonatomic) double headerMaxWidth; // @synthesize headerMaxWidth=_headerMaxWidth;
@property(nonatomic) double headerWidth; // @synthesize headerWidth=_headerWidth;
@property(nonatomic) _Bool headerOnLeading; // @synthesize headerOnLeading=_headerOnLeading;
@property(retain, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000e5bc0
- (void)layoutSubviews;	// IMP=0x00000000000e53b3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 withHeaderWidth:(double)arg2;	// IMP=0x00000000000e4df2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000e4da5
- (double)minimumHeaderWidth;	// IMP=0x00000000000e4a5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


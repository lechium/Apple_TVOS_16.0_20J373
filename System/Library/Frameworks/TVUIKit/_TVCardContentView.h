//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView, _TVUICardFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVCardContentView
{
    UIColor *_floatingContentViewBackgroundColor;	// 8 = 0x8
    _TVUICardFloatingContentView *_floatingContentView;	// 16 = 0x10
    UIView *__customSubviewContainerView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000039739
@property(retain, nonatomic) UIView *_customSubviewContainerView; // @synthesize _customSubviewContainerView=__customSubviewContainerView;
@property(retain, nonatomic) _TVUICardFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) UIColor *floatingContentViewBackgroundColor; // @synthesize floatingContentViewBackgroundColor=_floatingContentViewBackgroundColor;
- (void)_addContainerView:(id)arg1;	// IMP=0x000000000003935e
- (void)_createContainerView;	// IMP=0x00000000000392ef
- (void)_createFloatingContentView;	// IMP=0x0000000000039028
- (void)setLockupViewState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000038fb0
@property(nonatomic) struct NSDirectionalEdgeInsets focusSizeIncrease;
- (id)effectiveContentView;	// IMP=0x0000000000038eb7
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000038d98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038be1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038b1f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000038a83

@end


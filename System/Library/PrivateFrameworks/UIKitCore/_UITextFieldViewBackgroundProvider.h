//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UITextFieldViewBackgroundProvider
{
}

- (void)_buildDescription:(id)arg1;	// IMP=0x0000000000606f7f
- (void)setNeedsDisplay;	// IMP=0x0000000000606f12
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000606e84
- (void)removeFromTextField;	// IMP=0x0000000000606e19
- (void)addToTextField:(id)arg1;	// IMP=0x0000000000606d47
- (_Bool)hitTestView:(id)arg1;	// IMP=0x0000000000606cd8
- (id)overridingSetBackgroundColor:(id)arg1;	// IMP=0x0000000000606c76
@property(readonly, nonatomic) UIView *backgroundView;
- (void)didChangeFirstResponder;	// IMP=0x0000000000606bb1
- (void)layoutIfNeeded;	// IMP=0x0000000000606aa5

@end


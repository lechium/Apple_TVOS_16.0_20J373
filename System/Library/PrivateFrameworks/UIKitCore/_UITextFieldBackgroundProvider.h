//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextField;

__attribute__((visibility("hidden")))
@interface _UITextFieldBackgroundProvider : NSObject
{
    UITextField *_textField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f1d4c1
- (void)_buildDescription:(id)arg1;	// IMP=0x0000000000f1d4bb
- (id)description;	// IMP=0x0000000000f1d408
- (unsigned long long)hash;	// IMP=0x0000000000f1d398
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f1d2f7
- (_Bool)_isTV;	// IMP=0x0000000000f1d284
- (_Bool)hitTestView:(id)arg1;	// IMP=0x0000000000f1d27c
- (void)layoutIfNeeded;	// IMP=0x0000000000f1d276
- (void)setNeedsDisplay;	// IMP=0x0000000000f1d270
- (void)controlSizeDidChange:(_Bool)arg1;	// IMP=0x0000000000f1d26a
- (void)borderStyleDidChange:(_Bool)arg1;	// IMP=0x0000000000f1d264
- (void)selectedDidChangeAnimated:(_Bool)arg1;	// IMP=0x0000000000f1d25e
- (void)enabledDidChangeAnimated:(_Bool)arg1;	// IMP=0x0000000000f1d258
- (void)highlightedDidChangeAnimated:(_Bool)arg1;	// IMP=0x0000000000f1d252
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000f1d24c
- (void)didChangeFirstResponder;	// IMP=0x0000000000f1d246
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000f1d240
- (void)decodeWithCoder:(id)arg1;	// IMP=0x0000000000f1d23a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f1d234
- (void)removeFromTextField;	// IMP=0x0000000000f1d224
- (void)addToTextField:(id)arg1;	// IMP=0x0000000000f1d0ed
- (id)preferredMetricsProvider;	// IMP=0x0000000000f1d0e5
@property(readonly, nonatomic) _Bool drawsContent;
- (id)focusRingPathForBounds:(struct CGRect)arg1;	// IMP=0x0000000000f1d0d5
- (id)overridingSetBackgroundColor:(id)arg1;	// IMP=0x0000000000f1d0bf
- (id)overridingGetBackgroundColor;	// IMP=0x0000000000f1d0b7
@property(readonly, nonatomic) long long associatedBorderStyle;
@property(readonly, nonatomic) __weak UITextField *textField;

@end


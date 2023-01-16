//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface AVControlItem : NSObject
{
    UIImage *_image;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    _Bool __private;	// 17 = 0x11
    NSString *_accessibilityIdentifier;	// 24 = 0x18
    CDUnknownBlockType _action;	// 32 = 0x20
    UIColor *_tintColor;	// 40 = 0x28
    CDUnknownBlockType _actionBlock;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003304f
+ (id)controlItemWithImage:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00100000000332eb
+ (id)controlItemImageWithSymbolNamed:(id)arg1;	// IMP=0x0010000000033cad
+ (id)_startPiPControlItem;	// IMP=0x00100000000335a1
+ (id)_stopPiPControlItem;	// IMP=0x0010000000033489
+ (id)_cancelPiPControlItem;	// IMP=0x0010000000033373
- (void).cxx_destruct;	// IMP=0x0000000000032f90
@property(nonatomic, getter=_isPrivate, setter=_setPrivate:) _Bool _private; // @synthesize _private=__private;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
- (void)__pipDummy:(id)arg1;	// IMP=0x0000000000032f07
@property(retain, nonatomic, getter=_privateImage, setter=_setPrivateImage:) UIImage *_privateImage;
- (void)_blockAction:(id)arg1;	// IMP=0x0000000000032e15
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032c21
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032ae1
- (id)init;	// IMP=0x0000000000032a91
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double width;
- (void)_sendActionWithSender:(id)arg1;	// IMP=0x00000000000331d2
@property(readonly, nonatomic, getter=_isSpacer) _Bool spacer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

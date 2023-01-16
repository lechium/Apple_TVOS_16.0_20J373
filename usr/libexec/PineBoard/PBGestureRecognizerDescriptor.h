//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBGestureRecognizerDescriptor : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
}

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007f0ed
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000007f020
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000007efcf
- (id)succinctDescriptionBuilder;	// IMP=0x001000000007ef79
- (id)succinctDescription;	// IMP=0x001000000007ef28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007ef1c
@property(readonly, nonatomic) unsigned long long type;
- (void)appendDescriptionToBuilder:(id)arg1;	// IMP=0x001000000007ef0e
- (id)hashBuilder;	// IMP=0x001000000007eea6
- (_Bool)isTypeOf:(unsigned long long)arg1;	// IMP=0x001000000007ee80
- (id)init;	// IMP=0x001000000007ee44
- (void)applySettingsToGestureRecognizer:(id)arg1;	// IMP=0x001000000007f1b9
- (id)systemGestureRecognizerDescriptorWithActivationMask:(unsigned long long)arg1;	// IMP=0x0010000000096893
@property(readonly, nonatomic) double _minimumPressDuration;
@property(readonly, nonatomic) unsigned long long _numberOfPressBeganRequired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
